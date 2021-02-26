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
	int m,n,i,a=0,b=0;
	scanf("%d%d",&m,&n);
	for(int i=1;i<m;i++){
		for(int i=1;i<n;i++){
			if(m%i==0&&n%i==0){
			m/=i;
			n/=i;
			}
		}
		
	}
	if(m%n==0){
		a=m/n;
		b=n/n;
	printf("%d %d\n",a,b);
	}
	else printf("%d %d\n",m,n);
}
```
