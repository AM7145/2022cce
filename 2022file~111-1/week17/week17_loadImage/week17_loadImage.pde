PImage img;
void setup(){
  size(640,414);
  img = loadImage("genshin_background.jpg");
}
void draw(){
  image(img,0,0);
}
