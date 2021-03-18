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
    ##int *p = &a[2]; *p=222; p = p + 2; *p = 666;
    ##到底發生了什麼事?
    int *p=&a[2];
    *p=222;
    ###int * p = &a[2] ; 的 p 心中的值(心裡放住址的小紙條) 印出來給你看
            aaa();
            printf("p心理小紙條記的值是:%d\n",p);
    ##int *p = &a[2]; *p=222; p = p + 2; *p = 666;
    ##到底發生了什麼事?
    p+=2;
    *p=666;
    ###int * p = &a[2] ; 的 p 心中的值(心裡放住址的小紙條) 印出來給你看
            aaa();
            printf("p心理小紙條記的值是:%d\n",p);
    p--;
    *p=555;
    ###int * p = &a[2] ; 的 p 心中的值(心裡放住址的小紙條) 印出來給你看
            aaa();
            printf("p心理小紙條記的值是:%d\n",p);
}


