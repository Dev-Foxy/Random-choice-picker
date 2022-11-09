#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lottery(int n)
{
    int i;
    srand(time(NULL));
    char object[n][20];

    printf("Enter the object name\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", &object[i]);
    }
    printf("The lucky winner is %s!", object[rand() % n]);
}

int main()
{
    int n;
    printf("How many object you want to add: ");
    scanf("%d", &n);
    lottery(n);

    return 0;
}