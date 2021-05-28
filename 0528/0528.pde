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
