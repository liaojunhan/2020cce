
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
###利用 int *p 來改變 n1變數的值
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
```
###利用 int *p2 來改變 n3 變數的值
```C
int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
```

