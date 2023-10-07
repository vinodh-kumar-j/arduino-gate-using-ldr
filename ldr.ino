
#define LDR A0
#define LIGHT 2
int Threshold = 350;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(LIGHT,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int Value = analogRead(A0);
  Serial.println(Value);
  if(Value <= Threshold)
  {
    digitalWrite(LIGHT, HIGH);
  }
  else
  {
    digitalWrite(LIGHT, LOW);
  }
 delay(500);
  
}
