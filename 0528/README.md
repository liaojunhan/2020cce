```java
void setup(){//設定只做一次
    size(300,200);//
    float ans=random(60);//亂數取<60的數
    textSize(30);
    text(ans,0,30);
}
```
```java
void setup(){
    size(300,200);
    textSize(30);
}
int ans=0;
void draw(){//畫圖,每秒60次,60fps
    background(#3D4E6F);
    //int ans=(int)random(60);
    text(ans,30,30);//跳太快了
}
void mousePressed(){//mouse按下去才做亂數
    ans=(int)random(60);
}
```
```java
//int a[]={1,2,3,4,5,6,7,8,9,10};//C,C++
int []a={1,2,3,4,5,6,7,8,9,10};//Java
void setup(){
  size(400,200);
  textSize(30);
}
void draw(){
  background(#3D4E6F);
  for(int i=0;i<10;i++){
    text(a[i],i*40,100);
  }
}
void mousePressed(){
  int i1=(int) random(10);
  int i2=(int) random(10);
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
}//交換,行數太擠,所以塞成一行,中間是分號喔
```
```java
//大樂透抽獎時會掉下球,49球挑6球
//int []a={1,2,3,4,5,6,7,8,9,10,......寫49很累
int []a=new int[49];//Java陣列宣告好
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i] = i+1;//人類1
}                      //電腦0
void draw(){
  background(#3D4E6F);
  for(int i=0;i<6;i++){//49只秀6個數字
    text(a[i],i*40,100);
  }//大樂透抽獎時會掉下球,49球挑6球
}
void mousePressed(){
  for(int i=0;i<10000;i++){
  int i1=(int) random(49);
  int i2=(int) random(49);
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
```
```java
//大樂透抽獎時會掉下球,49球挑6球
//int []a={1,2,3,4,5,6,7,8,9,10,......寫49很累
int []a=new int[49];//Java陣列宣告好
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i] = i+1;//人類1
                      //電腦0
  for(int i=0;i<10000;i++){//大作弊,抽獎前排好
   int i1=(int) random(49);
   int i2=(int) random(49);
   int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
int N=0;
void draw(){
  background(#3D4E6F);
  for(int i=0;i<N;i++){//49只秀6個數字
    fill(255); ellipse(50+i*50,100,40,40);//白球
    textAlign(CENTER,CENTER);//文字對齊:中,中
    fill(0); text(a[i],50+i*50,100);//黑字
  }//大樂透抽獎時會掉下球,49球挑6球
}
void mousePressed(){
  N++;//其實數字早就決定好了!!!!!我們只是慢慢印出來,讓人以為你是慢慢抽
}
```
