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

void setup() {
  // put your setup code here, to run once:
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

void loop() {
  // put your main code here, to run repeatedly:
  zenshin();
}
