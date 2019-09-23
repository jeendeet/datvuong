int timSCP(int x){
  int scp;
  if(sqrt(x)-floor(sqrt(x))==0) scp=1;
  else scp=0;
  return scp;
}
void setup() {
 Serial.begin(9600);

}

void loop() {
  for(int n=0; n<=100; n++){
    if(timSCP(n)==1) Serial.println(n);
  }
 delay (10000000000);
}
