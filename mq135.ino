#define MQ A0
#define led 13
#define bazzer 12
void setup() {
  Serial.begin(9600);
  pinMode(MQ , INPUT);
  pinMode(led , OUTPUT);
  pinMode(bazzer , OUTPUT);



}

void loop() {
  int reading = analogRead(MQ);
  Serial.println(reading);

  if(reading >250){
    digitalWrite(led , 1);
    digitalWrite(bazzer , 1);
  }
  else{
    digitalWrite(led , 0);
    digitalWrite(bazzer , 0);
  }
}
