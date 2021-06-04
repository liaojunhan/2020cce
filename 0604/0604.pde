/*void setup(){
  size(400,200);
  textSize(40);
}
void draw(){
  background(41,199,207);
  int s=second();
  text(s,100,100);
}
*/
-------------------------------------
/*void setup(){
  size(400,200);
  textSize(40);
}
void draw(){
  background(41,199,207);
  int s=second();
  text(9-s%10,100,100);
}*/
-------------------------------------
/*鐘聲:要下載外掛processing的sound
import processing.sound.*;
SoundFile player;//SoundFile是形狀 player變名
void setup(){
  size(400,200);
  textSize(40);
  player=new SoundFile(this,"bell.mp3");//要把檔案拖進來
}
void draw(){//每秒60次
  background(41,199,207);
  int s=second();
  text(9-s%10,100,100);
  if(9-s%10==0&&!player.isPlaying()){
    player.play();
  }
}
-------------------------------------
void mousePressed(){
  if(player.isPlaying()){
    player.stop();
  }else{
    player.play();
  }
}*/
