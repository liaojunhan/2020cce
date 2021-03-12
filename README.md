
# 2020cce
## 第一個 找零錢
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,(n%50)/5,(n%50%5));
}
```
## 第二個 因數個數 
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		ans+=1;
	}
	printf("%d\n",ans);
}
```
## 第三個 整數轉換為等級 
```C
#include <stdio.h>
int main()
{
	int a[1000],ans=0;
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%3==0)
		ans+=1;
	}
	printf("%d\n",ans);
}
```
## 第四個 找倍數
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90) printf("A\n");
	else if(n<90&&n>=80) printf("B\n");
	else if(n<80&&n>=60) printf("C\n");
	else printf("F\n");
}
```
## 第五個 分式化簡
```C
#include <stdio.h>
int main()
{
	int a,b,i,ans=1;
	scanf("%d %d",&a,&b);
	for(int i=1;i<=b;i++)
	{
		if(a%i==0 && b%i==0) ans=i;
	}
	printf("%d %d\n",a/ans,b/ans);
}
```
## 第六個 指標
```C
###利用 int *p 來改變 n1變數的值
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

###利用 int *p2 來改變 n3 變數的值

int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

###利用 p2=p 讓口袋的address位址換了一張, 所以 *p2=400 就會換到其他地方送400元

    p2=p;
   *p2=400;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
```
## 第七個 毒入整數反序列印
```C
#include <stdio.h>
int a[1000];
int main()
{
	int n;
	for(int i=0;i<=1000;i++)
	{
		scanf("%d",&a[i]);
		n=i;
		if(a[i]==0) break;
	}	
	for(int i=n-i;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
```
## 第八個 A的B次方函數
```C
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
	ans*=a;
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
## 第八個 漸增數列相加
```C
#include <stdio.h>
int main()
{
	int n,i,ans=0;
	scanf("%d",&n);
	for(i=1;i<n;i++){
	ans+=i*(i+1);
	}
	printf("%d\n",ans);
	
}
```
## 第九個 判斷正方形
```C
#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(m==n) printf("Enter two numbers:  It is a square ");
	else printf("Enter two numbers:  It is not a square ");
}
```
## 第十個 2進位轉10進位
```C
#include<stdio.h>
int main()
{
 	int n;
 	scanf("%d",&n);
 	printf("%d\n",n/1000*2*2*2+n%1000/100*2*2+n%100/10*2+n%10/1*1);
}
```
## 第十一個 均標與前標計算
```C
#include <stdio.h>
int main()
{
	int n,a[50],sum=0;
	float avg=0;;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
		}
		avg=(float)sum/n;
			printf("均標:%.1f\n",avg);
	int x=0,sumtop=0;
	float avgtop=0;
	for(int i=0;i<n;i++){
	if(a[i]>=avg){ sumtop+=a[i];x++;}}
	avgtop=(float)sumtop/x;
	printf("前標:%.1f\n",avgtop);		
}
```
