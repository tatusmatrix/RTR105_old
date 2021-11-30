/* fread example: read an entire file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  FILE * pFile;
  long lSize;
  unsigned char * buffer;
  size_t result;
  char a;

  pFile = fopen ( "test.c" , "rb" );
  if (pFile==NULL) {fputs ("File error",stderr); exit (1);}

  // obtain file size:
  fseek (pFile , 0 , SEEK_END);
  lSize = ftell (pFile);
  printf("test.c faila izmērs baitos: %ld\n",lSize);
  rewind (pFile);

  // allocate memory to contain the whole file:
  buffer = (char*) malloc (sizeof(char)*lSize + 1);
  if (buffer == NULL) {fputs ("Memory error",stderr); exit (2);}

  //printf("buffer izmērs baitos: %ld\n",sizeof(buffer));
  printf("piešķiramais izmērs baitos: %ld\n",sizeof(char)*lSize+1);
  printf("strlen(buffer) rezultāts pirms dati ir nolasīti: %ld\n",strlen(buffer));
  printf("%s",buffer);
  printf("\n");

/*
  for(int i=0;i<lSize+5;i++)
    printf("%d %c %d\n",i,buffer[i],buffer[i]);
  printf("\n");
*/

  // copy the file into the buffer:
  result = fread (buffer,sizeof(char),lSize,pFile);
  if (result != lSize) {fputs ("Reading error",stderr); exit (3);}
  buffer[lSize]='\0';

  /* the whole file is now loaded in the memory buffer. */
  printf("strlen(buffer) rezultāts pēc dati ir nolasīti: %ld\n",strlen(buffer));
  printf("%s",buffer);
  printf("\n");

/*
  for(int i=0;i<lSize;i++)
    printf("%d %c %d\n",i,buffer[i],buffer[i]);
  printf("\n");
*/

  // terminate
  fclose (pFile);
  free (buffer);
  fflush(stdout);
  scanf("%c",&a);
  return 0;
}