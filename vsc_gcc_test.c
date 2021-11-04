#include <stdio.h>
// Shift + Alt + F

int main()
{
    int a, N;

    printf("Enter number: ");
    fflush(stdout);
    scanf("%d", &N);

    a = 1;

    while (a < N)
    {
        printf("%d ", a);
        a++;
    }

    return 0;
}
