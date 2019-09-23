int timSNT(int x){
  int nt;
  for(int i=2;i<x;i++){
    if (x%i==0) {nt=0; break;}
    else nt=1;
  }
  return nt;
}
void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int n=2;n<=100;n++) {
    if (timSNT(n)==1) Serial.println(n);
  }
  delay(10000);
}
