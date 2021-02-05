//進むときは三足 42.89s 13.78s 12.30s 11.85s 12.44s 12.05s
#include <Servo.h>

Servo myservo_a_1; //左前脚の第一関節
Servo myservo_b_1; //右前脚の第一関節
Servo myservo_c_1; //左後脚の第一関節
Servo myservo_d_1; //右後脚の第一関節
Servo myservo_a_2; //左前脚の第二関節
Servo myservo_b_2; //右前脚の第二関節
Servo myservo_c_2; //左後脚の第二関節
Servo myservo_d_2; //右後脚の第二関節

int s = 140;

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
  
  myservo_a_2.write(70);//70
  myservo_b_2.write(115);//110
  myservo_c_2.write(100);//110
  myservo_d_2.write(85);//70
  delay(500);

  myservo_a_1.write(140);
  myservo_b_1.write(100);
  myservo_c_1.write(40);
  myservo_d_1.write(80);//80
  delay(500);

}

void zenshin(){
  /*
  myservo_b_1.write(90);
  delay(200);
  */
  myservo_b_2.write(180); //180
  delay(s);
  myservo_b_1.write(10);
  delay(s);
  myservo_b_2.write(115);//110
  delay(s);
  
  myservo_a_1.write(80); //80
  myservo_b_1.write(40);
  //myservo_c_2.write(180);
  myservo_d_1.write(140); //140
  delay(s);

  myservo_c_2.write(180);
  delay(s);
  myservo_c_1.write(100);
  delay(s);
  myservo_c_2.write(100);//110
  delay(s);

  /*
  myservo_a_1.write(90);
  delay(200);
  */
  myservo_a_2.write(0); //0
  delay(s);
  myservo_a_1.write(170);
  delay(s);
  myservo_a_2.write(70);//70
  delay(s);

  myservo_a_1.write(140);
  myservo_b_1.write(100);
  myservo_c_1.write(40);
  //myservo_d_2.write(0);
  delay(s);

  myservo_d_2.write(0);
  delay(s);
  myservo_d_1.write(80);//80
  delay(s);
  myservo_d_2.write(85);//70
  delay(s);
}

void loop() {
  // put your main code here, to run repeatedly:
  zenshin();
}
