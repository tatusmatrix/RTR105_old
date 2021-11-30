#include <stdio.h>
#define N 100

int main()
{
    char sentence[N];
    char a;
    FILE *pFile;

    pFile = fopen("text.txt", "r");
    if (pFile != NULL)
    {
        while (fscanf(pFile, "%[^\n]\ns", sentence) != EOF)
        {
            printf("%s\n", sentence);
        }
        fclose(pFile);
    }
    else
    {
        printf("Nav sanācis atvērt failu!\n");
    }

    fflush(stdout);
    scanf("%c", &a);

    return 0;
}
