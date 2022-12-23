int LED[] = {17,2,15,12};
void setup(){
 pinMode(LED[3],OUTPUT); 
 pinMode(LED[2],OUTPUT);
 pinMode(LED[1],OUTPUT);
 pinMode(LED[0],OUTPUT);
 
}
void loop(){
  for(int x=0;x<=3;x++){
      digitalWrite(LED[x],LOW);
    delay(50);
    digitalWrite(LED[x],HIGH);
    delay(50);
  }
    for(int x=3;x>=0;x--){
      digitalWrite(LED[x],LOW);
    delay(50);
    digitalWrite(LED[x],HIGH);
    delay(50);
  }
  
}
