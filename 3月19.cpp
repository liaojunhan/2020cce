#include <stdio.h>
struct POINT{
    float x,y;
};
int main()
{
    ## struct POINT a={4.1, 3.2}; 並利用 a.x 及 a.y 印出來。
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);
    //利用 a.x 及 a.y 來改變裡面的值
    a.x=1;
    a.y=2;
    printf("%f %f\n",a.x,a.y);
    return 0;
}

## 外面的global全域變數 會初始值, 裡面的 local區域變數會是亂碼。 然後我們把 local變數裡面用程式來塞值。
    #include<stdio.h>
    struct DATA{
    int x,y;
    }a[3];
    struct DATA b={100,200};
    int main()
    {
    for(int i=0;i<3;i++)
    {
    printf("a[%d]: %d %d\n",i,a[i].x,a[i].y);
    }
    printf("b: %d %d\n",b.x,b.y);
    struct DATA c;
    printf("c: %d %d\n",c.x,c.y);
    c=b;
    printf("c: %d %d\n",c.x,c.y);
    }

    ## 使用 p->x, p->y, p->z 取用到指標指到的值
    #include <stdio.h>
    struct POINT{
    float x,y,z;
    };
    struct POINT point[5]={(0,0,0),(1,0,0),(0,1,0),(0,0,1),(1,1,1)} ;
    int main()
    {
    struct POINT *p=&point[0];
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    }   
