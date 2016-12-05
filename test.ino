

void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {

tone(8,5000);
delay(100);
digitalWrite(3,LOW);

noTone(8);
delay(500);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,LOW);

tone(8,1000);
delay(100);
digitalWrite(4,LOW);

noTone(8);
delay(500);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);


tone(8,6000);
delay(100);
digitalWrite(5,LOW);

noTone(8);
delay(500);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);

}
