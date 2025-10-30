void setup() {
 Serial.begin(9600);
 Serial.println("Please type a word:");

}

void loop() {
  if(Serial.available()>0) {
    String x = Serial.readString();
    if(x=="What is your name?") {Serial.print(" Hello");}
    else if(x=="What is your age?") {Serial.print(" 22");}
    else if(x=="What is your local?") {Serial.print(" Host");}
    else if(x=="What is your single pointer?") {Serial.print(" Variable");}
    else if(x=="how are you?") {Serial.print(" Fine");}
    else {
    	Serial.print(" I didn't understand");
    }
    
  }
  
}