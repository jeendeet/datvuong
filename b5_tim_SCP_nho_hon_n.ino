int timSCP(int x){
  int scp;
  if(sqrt(x)-floor(sqrt(x))==0) scp=1;
  else scp=0;
  return scp;
}
int n=0;
void setup() {
 Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
  int n=Serial.read();
  for(int t=0; t<=n; t++){
    if(timSCP(t)==1) Serial.println(t);
  }
 delay(10000000);
  }
}
