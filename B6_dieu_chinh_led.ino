#define led13 13
int n=0,t=0;
void setup() {
  Serial.begin(9600);
  pinMode (led13,OUTPUT);
  

}

void loop() {
  if(Serial.available()>0){
    Serial.println("So lan nhay la (lan)");
    int n=Serial.read();
    Serial.print(n);
    Serial.println("Thoi gian nhay la (ms)");
    int t=Serial.read();
    Serial.print(t);
    for(int i=0; i<=n; i++){
      digitalWrite(led13, HIGH);
      delay(t);
      digitalWrite(led13, LOW);
      delay(t);
    }
  }
}
