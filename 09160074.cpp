///�Q�� int *p �ӧ��� n1�ܼƪ���
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

///�Q�� int *p2 �ӧ��� n3 �ܼƪ���
int *p2=&n3;
    *p2=300;
     printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
///�Q�� p2=p ���f�U��address��}���F�@�i, �ҥH *p2=400 �N�|�����L�a��e400��
    p2=p;
   *p2=400;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
