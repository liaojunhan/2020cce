///利用 int *p 來改變 n1變數的值
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

///利用 int *p2 來改變 n3 變數的值
int *p2=&n3;
    *p2=300;
     printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
///利用 p2=p 讓口袋的address位址換了一張, 所以 *p2=400 就會換到其他地方送400元
    p2=p;
   *p2=400;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
