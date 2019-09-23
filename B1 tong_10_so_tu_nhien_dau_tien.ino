void setup() {
  Serial.begin(9600);}
void loop() {
  // put your main code here, to run repeatedly:
  int i=0;
  int a=0;
  while (i<11){
    a=i+a;
    i++;
  }
  Serial.print("tong 10 so tu nhien la ");
  Serial.println(a);
  int b=0;
  int j=0;
  do{
    b=b+j;
    j++;
    delay(100);
  } while (j<11);
  Serial.print("tong 10 so tu nhien la ");
  Serial.println(b);
  delay(10000);
}
