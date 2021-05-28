void setup(){//設定只做一次
    size(300,200);//
    float ans=random(60);//亂數取<60的數
    textSize(30);
    text(ans,0,30);
}
---------------------------------------------
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
----------------------------------------------
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
