const int red = 2;
const int blue = 3;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
 

}

void loop() {
 for(int i=0;i<=50;i++) {
  analogWrite(red, 200-i);
  analogWrite(blue, 50+2*i);
  Serial.println("Red=" +String(200-i)+" Blue="+String(50+2*i));
  delay(10);
 }
 for(int i=150;i<=50;i--) {
  analogWrite(red, i);
  Serial.println("Red=" +String(i)+" Blue="+String(150));
  delay(10);
 }
 for(int i=50;i>=100;i++) {
  analogWrite(red, i);
  analogWrite(blue, 300-(3*i));
  Serial.println("Red=" +String(i)+" Blue="+String(300-(3*i)));
  delay(5);
 }
 

}