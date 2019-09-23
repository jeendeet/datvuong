int s,i,j,k;
int timSNT(int x){
  int nt;
  for(i=2;i<x;i++){
    if (x%i==0) {nt=0; break;}
    else nt=1;
  }
  return nt;
}

void setup() {
  Serial.begin(9600);
  Serial.println("nhap vao so n");
}
void loop() { 
  if(Serial.available()>0){
  int n= Serial.read();
  //Tong n so tu nhien dau tien
  s=0;
  for(k=1; k<=n; k++){s=s+k;}
  Serial.println("Tong n so tu nhien dau tien la: ");
  Serial.println(s);
  delay(1000);
  //Tong n so nguyen to dau tien
  k=0;
  s=2;
  j=3;
  while(k<=n){
  if( timSNT(j)==1) {s=s+j; k++;}
  }
  Serial.println("Tong n so nguyen to dau tien la: ");
  Serial.println(s);
  delay(1000);
  }
}
