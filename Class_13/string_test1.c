#include <stdio.h>
#include <string.h>
#define N 100

int main()
{
    char name[N];
    printf("Enter some text:");
    fgets(name, sizeof(name), stdin); // read string
    printf("Your text: ");
    puts(name); // display string

    int n = strlen(name), prev = 0, last = 0;

    for (int i = 0; i < n; i++)
    {
        printf("%d. symbol - %c(%hhd)", i + 1, name[i], name[i]);
        if (name[i] == ' ')
        {
            printf(" (this is \" \" symbol)\n");
            if (last - prev > 4)
                printf("word just finished and it is longer than 4 symbols\n");
            prev = i;
        }
        else
        {
            printf("\n");
            last = i;
        }
    }
    printf("\n");

    return 0;
}