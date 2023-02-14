void setup(){
  size(640,480);
  background(184,161,207);
}
void draw(){
  if(mousePressed){
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
}
void keyPressed(){
  if(key=='z') stroke(255,0,0);
  if(key=='x') stroke(0,0,255);
  if(key=='c') stroke(0,0,0);
}
