#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10

void init(int *num, int len)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < len; i++) 
        num[i] = rand() % 100;
}

void print(int *num, int len)
{
    int i;
    for (i = 0; i < len; i++) 
        printf("%d ", num[i]);
    printf("\n");
}

void sort(int *num, int len)
{
    int i, j, tmp;
    for (i = 0,j= len - 1;i <= j; i++) 
    {
        if(num[i] % 2 == 0)
        {
            tmp = num[i];
            num[i] = num[j];
            num[j] = tmp;
            i--;
            j--;
        }
    }
}

int main(int argc, const char *argv[])
{
    int num[20];
    init(num, 20);
    sort(num, 20);
    print(num, 20);
    return 0;
}
