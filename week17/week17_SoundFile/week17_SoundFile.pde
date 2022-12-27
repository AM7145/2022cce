import processing.sound.*;
SoundFile file;
void setup(){
  size(640,480);
  file = new SoundFile(this,"beat.aiff");
  file.loop();
}
void draw(){

}
