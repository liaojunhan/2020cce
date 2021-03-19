
# 2020cce
## 找零錢
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,(n%50)/5,(n%50%5));
}
```
## 因數個數 
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
## 整數轉換為等級 
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
## 找倍數
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
## 分式化簡
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
## 指標
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
## 毒入整數反序列印
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
## A的B次方函數
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
## 漸增數列相加
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
## 判斷正方形
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
## 2進位轉10進位
```C
#include<stdio.h>
int main()
{
 	int n;
 	scanf("%d",&n);
 	printf("%d\n",n/1000*2*2*2+n%1000/100*2*2+n%100/10*2+n%10/1*1);
}
```
## 均標與前標計算
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
## 進階題：計算陣列的平方值
```c
#include <stdio.h>
int a[100];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
```
## 進階題：大小寫轉換 
```c
#include <stdio.h>
int main()
{
	char c[10];
	scanf("%s",&c);
	int i=0;
	while(c[i]!='\0')
	{
		if('A'<=c[i]&&c[i]<='Z') printf("%c",c[i]-'A'+'a');
		else if('a'<=c[i]&&c[i]<='z') printf("%c",c[i]-'a'+'A');
		else printf("%c",c[i]);
		i++;
	}
	printf("\n");
}
```
## 基礎題：計算幾週與幾天 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d %d\n",n/7,n%7);
}
```
## 基礎題：計程車資計算 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=2000) printf("100\n");
	else if((n-2000)%500==0) printf("%d\n",(100+((n-2000)/500)*5));
	else if((n-2000)%500!=0) printf("%d\n",(100+((n-2000)/500)*5)+5);
}
```
## 基礎題：兩數間可被5整除的整數
```c
#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++)
	{
		if(i%5==0) printf("%d\n",i);
	}
	for(int i=n;i<=m;i++)
	{
		if(i%5==0) printf("%d\n",i);
	}
}
```
## 基礎題：整數間最大距離 
```c
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&b>c) printf("%d\n",a-c);
	else if(a>c&&c>b) printf("%d\n",a-b);
	else if(b>c&&c>a) printf("%d\n",b-a);
	else if(b>a&&a>c) printf("%d\n",b-c);
	else if(c>a&&a>b) printf("%d\n",c-b);
	else  printf("%d\n",c-a);
}
```
## 進階題：除惡務盡 
```c
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]!='2') printf("%c",a[i]);
		i++;
	}
	printf("\n");
}
```
## 進階題：擲骰統計 
```c
#include <stdio.h>
int main()
{
	char a[100];
	char count[7]={0};
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0')
	{
		count[a[i]-'0']++;
		i++;
	}
	for(i=1;i<=6;i++)
	{
		printf("%d:%d\n",i,count[i]);
	}
}
```
## 進階題：函數找整數的最大數字
```c
#include<iostream>
using namespace std;
int max_digit(int n)
{
	int max;//紀錄最大值
	max=n%10;//n的個位數
	while(n>0)
	{
		if(n%10 > max) max=n%10;
		n/=10;
	}
	return max;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* 上方C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
```
## 進階題：星星等腰三角 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
	}
		for(int k=1;k<=i*2-1;k++){
		printf("*");
		}
		printf("\n");
	}
}
```
## 基礎題：分開整數的每個數字 
```c
#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	char a[100];
	scanf("%s",&a);
	int i=0;
	while(i<(strlen(a)-1))//strlen(a)取得a字串的長度(有多少字元)
	{
		printf("%c   ",a[i]);
		i++;
	}
	printf("%c",a[i]);
}
```
## 基礎題：數字之首 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<10) printf("n");
	else if(n<100&&n>=10) printf("%d",n/10);
	else if(n<1000&&n>=100) printf("%d",n/100);
	else if(n<10000&&n>=1000) printf("%d",n/1000);
}
```
## 基礎題：輸出從0到N的偶數 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2==0) printf("%d ",i);
	}
}
```
## 基礎題：字元判別 
```c
#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if('A'<=a&&a<='Z') printf("U");
	else if('a'<=a&&a<='z') printf("L");
	else if('0'<=a&&a<='9') printf("D");
	else printf("O");
}
```
