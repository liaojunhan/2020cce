void setup(){
 size(400,200); 
}
void draw(){
 background(255,57,127);
 fill(255);//白
 ellipse(100,100,180,180);
 //     畫圓 圓心 長  寬
 fill(0,0,255);//紅
 float stop=mouseX/50.0;
 text(stop,200,100);
 arc(100,100,180,180,0,stop);
}

void setup(){
 size(400,200); 
 fill(0,0,255);
 textSize(40);
}
float shift=0,v=10;//一開始的速度
void mousePressed(){
 v=random(10)+5; 
}
void draw(){
 background(255,57,127);
 float start=radians(90+shift);
 float stop=radians(180+shift);
 arc(100,100,180,180,start,stop);
 if(v>0.1){//還有速度時就轉動
  shift+=v;//轉動的速度
  v=v*0.99;//速度會慢慢減速
 }
 text(shift,200,100);//印出shift
 text(v,200,150);//印出轉動的速度
}


