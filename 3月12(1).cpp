#include <stdio.h>
#include <stdlib.h>
int a[10];
int main()
{
    int b[10];
    int *p=(int*) malloc(sizeof(int)*10);
    for(int i=0;i<=11;i++)
        printf(" %d ",a[i]);
        printf("\n");

    for(int i=0;i<=11;i++)
        printf(" %d ",b[i]);
    return 0;
}
