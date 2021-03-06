//進むときは三足
#include <Servo.h>

Servo myservo_a_1; //左前脚の第一関節
Servo myservo_b_1; //右前脚の第一関節
Servo myservo_c_1; //左後脚の第一関節
Servo myservo_d_1; //右後脚の第一関節
Servo myservo_a_2; //左前脚の第二関節
Servo myservo_b_2; //右前脚の第二関節
Servo myservo_c_2; //左後脚の第二関節
Servo myservo_d_2; //右後脚の第二関節

int Trig_r = 2;
int Echo_r = 3;
int Trig_l = 4;
int Echo_l = 5;
int Duration_r;
int Duration_l;
float Distance_r;
float Distance_l;

int Distance = 50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Trig_r,OUTPUT);
  pinMode(Echo_r,INPUT);
  pinMode(Trig_l,OUTPUT);
  pinMode(Echo_l,INPUT);
  
  myservo_a_1.attach(6);
  myservo_b_1.attach(7);
  myservo_c_1.attach(8);
  myservo_d_1.attach(9);
  myservo_a_2.attach(10);
  myservo_b_2.attach(11);
  myservo_c_2.attach(12);
  myservo_d_2.attach(13);
  
  myservo_a_2.write(90);
  myservo_b_2.write(90);
  myservo_c_2.write(90);
  myservo_d_2.write(90);
  delay(500);

  myservo_a_1.write(40);
  myservo_b_1.write(80);
  myservo_c_1.write(140);
  myservo_d_1.write(100);
  delay(500);

}

void zenshin(){
  myservo_b_2.write(180);
  delay(500);
  myservo_b_1.write(170);
  delay(500);
  myservo_b_2.write(90);
  delay(500);
  
  myservo_a_1.write(100);
  myservo_b_1.write(140);
  myservo_c_2.write(180);
  myservo_d_1.write(40);
  delay(500);

  myservo_c_1.write(80);
  delay(500);
  myservo_c_2.write(90);
  delay(500);

  myservo_a_2.write(0);
  delay(500);
  myservo_a_1.write(10);
  delay(500);
  myservo_a_2.write(90);
  delay(500);

  myservo_a_1.write(40);
  myservo_b_1.write(80);
  myservo_c_1.write(140);
  myservo_d_2.write(0);
  delay(500);

  myservo_d_1.write(100);
  delay(500);
  myservo_d_2.write(90);
  delay(500);
}

void koushin(){
  myservo_d_2.write(0);
  delay(500);
  myservo_d_1.write(10);
  delay(500);
  myservo_d_2.write(90);
  delay(500);
  
  myservo_a_2.write(0);
  myservo_b_1.write(140);
  myservo_c_1.write(80);
  myservo_d_1.write(40);
  delay(500);

  myservo_a_1.write(100);
  delay(500);
  myservo_a_2.write(90);
  delay(500);

  myservo_c_2.write(180);
  delay(500);
  myservo_c_1.write(170);
  delay(500);
  myservo_c_2.write(90);
  delay(500);

  myservo_a_1.write(40);
  myservo_b_2.write(180);
  myservo_c_1.write(140);
  myservo_d_1.write(100);
  delay(500);

  myservo_b_1.write(80);
  delay(500);
  myservo_b_2.write(90);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Trig_r,LOW);
  delayMicroseconds(1);
  digitalWrite(Trig_r,HIGH);
  delayMicroseconds(11);
  digitalWrite(Trig_r,LOW);
  Duration_r = pulseIn(Echo_r,HIGH);
  digitalWrite(Trig_l,LOW);
  delayMicroseconds(1);
  digitalWrite(Trig_l,HIGH);
  delayMicroseconds(11);
  digitalWrite(Trig_l,LOW);
  Duration_l = pulseIn(Echo_l,HIGH);
  Distance_r = Duration_r/2;
  Distance_r = Distance_r*340*100/1000000; // ultrasonic speed is 340m/s = 34000cm/s = 0.034cm/us 
  Distance_l = Duration_l/2;
  Distance_l = Distance_l*340*100/1000000; // ultrasonic speed is 340m/s = 34000cm/s = 0.034cm/us 

  if(Distance_r <= Distance){
    zenshin();
    koushin();
  }
  else if(Distance_l >= Distance){
    koushin();
    zenshin();
  }
}
