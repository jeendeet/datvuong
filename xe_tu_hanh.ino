
const int trig = 12;    
const int echo = 8;
#define IN1  4
#define IN2 5
#define IN3 6
#define IN4 7
#define MAX_SPEED 255
#define MIN_SPEED 0
void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  Serial.begin(9600);
}
 
void motor_1_Dung() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
}
 
void motor_2_Dung() {
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
 
void motor_1_Tien(int speed) { 
  speed = constrain(speed, MIN_SPEED, MAX_SPEED);
  digitalWrite(IN1, HIGH);
  analogWrite(IN2, 255 - speed);
}
 
void motor_1_Lui(int speed) {
  speed = constrain(speed, MIN_SPEED, MAX_SPEED);
  digitalWrite(IN1, LOW);
  analogWrite(IN2, speed);
}
 
void motor_2_Tien(int speed) { 
  speed = constrain(speed, MIN_SPEED, MAX_SPEED);
  analogWrite(IN3, speed);
  digitalWrite(IN4, LOW);
}
 
void motor_2_Lui(int speed) {
  speed = constrain(speed, MIN_SPEED, MAX_SPEED);
  digitalWrite(IN4, HIGH);
}
 


int khoangcach(){
  int distance;
  unsigned long duration;
  digitalWrite(trig,0);
  delayMicroseconds(2);
  digitalWrite(trig,1);
  delayMicroseconds(5);
  digitalWrite(trig,0);

    duration= pulseIn(echo,HIGH);
    distance= int((duration/2)/29.412);
    return distance;
}

void loop(){

    while(khoangcach()>10){
      motor_1_Tien(MAX_SPEED);
      motor_2_Tien(MAX_SPEED); 
    }
    motor_2_Dung();
    motor_1_Dung();
    delay(10);
    motor_1_Tien(MAX_SPEED);
    motor_2_Lui(MAX_SPEED);
    delay(100);
    motor_2_Dung();
    motor_1_Dung();
    delay(100);
}
