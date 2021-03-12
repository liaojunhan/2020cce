#include <stdio.h>
int a[5]={0,10,20,30,40};
void aaa()
{
    for(int i=0;i<5;i++)
        printf("%d",a[i]);
    printf("\n");
}
int main()
{
    int *p=&a[2];
    *p=222;
            aaa();
            printf("p心理小紙條記的值是:%d\n",p);
    p+=2;
    *p=666;
            aaa();
            printf("p心理小紙條記的值是:%d\n",p);
    p--;
    *p=555;
            aaa();
            printf("p心理小紙條記的值是:%d\n",p);
}


