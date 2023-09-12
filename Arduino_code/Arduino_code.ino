#include <Servo.h>
#include <avr/interrupt.h>
int count = 1;

Servo sv1;
Servo sv2;
Servo sv3;
Servo sv4;
Servo sv5;

int hig, stap, front, rot;
int a0, a1, a2, a3;
int i;

int h = -1; int s = -1; int r = -1; int f = -1;
int h2 = -1; int s2 = -1; int r2 = -1; int f2 = -1;

bool flag = false;
String signal;

String str1, str2, str3, str4, out;
String sa1 = "";
String sa2 = "";
String sa3 = "";
String sa4 = "";

void setdefaul(){
  rot = sv3.read();
  while (front > 20){
    front = sv1.read();
    hig = sv4.read();
    front -= 2;
    if (hig > 230 - front){hig = 230 - front;}
    if (hig < 130 - front){hig = 130 - front;}
    sv4.write(hig);
    sv1.write(front);
    sv2.write(front + 10);
    delay(30);
  }
  while (front < 20){
    front = sv1.read();
    hig = sv4.read();
    front += 2;
    if (hig > 230 - front){hig = 230 - front;}
    if (hig < 130 - front){hig = 130 - front;}
    sv4.write(hig);
    sv1.write(front);
    sv2.write(front + 10);
    delay(30);
  }
  while (hig < 130){
    hig += 2;
    sv4.write(hig);
    delay(30);
  }
  while (hig > 130){
    hig -= 2;
    sv4.write(hig);
    delay(30);
  }
  while (rot > 90){
    rot -= 2;
    sv3.write(rot);
    delay(30);
  }
  while (rot < 90){
    rot += 2;
    sv3.write(rot);
    delay(30);
  }
}
void position(int a, int b, int c, int d){
  front = sv1.read();
  rot = sv3.read();
  while (rot > a){
    rot -= 2;
    sv3.write(rot);
    delay(30);
  }
  while (rot < a){
    rot += 2;
    sv3.write(rot);
    delay(30);
  }
  while (front > b){
    hig = sv4.read();
    front -= 2;
    if (hig > 230 - front){hig = 230 - front;}
    if (hig < 130 - front){hig = 130 - front;}
    sv4.write(hig);
    sv1.write(front);
    sv2.write(front + 10);
    delay(30);
  }
  while (front < b){
    hig = sv4.read();
    front += 2;
    if (hig > 230 - front){hig = 230 - front;}
    if (hig < 130 - front){hig = 130 - front;}
    sv4.write(hig);
    sv1.write(front);
    sv2.write(front + 10);
    delay(30);
  }
  hig = sv4.read();
  while (hig < c){
    hig += 2;
    sv4.write(hig);
    delay(30);
  }
  while (hig > c){
    hig -= 2;
    sv4.write(hig);
    delay(30);
  }
  sv5.write(d);
}

void setup() {
  Serial.begin (9600);

  pinMode (A0, INPUT);
  pinMode (A1, INPUT);
  pinMode (A2, INPUT);
  pinMode (A3, INPUT);

  sv1.attach(2);
  sv2.attach(3);
  sv3.attach(4);
  sv4.attach(5);
  sv5.attach(6);
  
  sv1.write(20);
  sv2.write(30);
  sv3.write(90);
  sv4.write(130);
  sv5.write(90);
  sv3.write(90);
  cli();
  TCCR2A = 0;
  TCCR2B = 0;
  TIMSK2 = 0;
  TCCR2B |= (1 << CS22) | (1 << CS21) | (1 << CS20); 
  TCNT2 = 131;
  TIMSK2 = (1 << TOIE2);
  sei();
}
ISR (TIMER2_OVF_vect) 
{
  TCNT2 = 131;
  count ++;
  if (count == 50){
    count = 1;
    str1 = String(1000+sv1.read());
    str2 = String(1000+sv3.read());
    str3 = String(1000+sv4.read());
    str4 = String(1000+sv5.read());
    out = str1 + str2 + str3 + str4;
    Serial.println(out);
  }
}

void loop() {
if (Serial.available() > 0){
  signal = Serial.readString();
  if (signal == "aut") {
    flag = true;
  }
  if (signal == "con"){
    flag = false;
  }
  if (signal == "fir"){
    f = sv1.read();
    r = sv3.read();
    h = sv4.read();
    s = sv5.read();
  }
  if (signal == "sec"){
    f2 = sv1.read();
    r2 = sv3.read();
    h2 = sv4.read();
    s2 = sv5.read();
  }
  if (signal[0] == '*'){
    sa1 = "";sa2 = "";sa3 = "";sa4="";
    i = 1;
    while (signal[i] != '*'){
      sa1 = sa1 + signal[i];
      i++;
    }
    i++;
    while (signal[i] != '*'){
      sa2 = sa2 + signal[i];
      i++;
    }
    i++;
    while (signal[i] != '*'){
      sa3 = sa3 + signal[i];
      i++;
    }
    i++;
    while (i < signal.length()){
      sa4 = sa4 + signal[i];
      i++;
    }
    f = sa1.toInt();
    r = sa2.toInt();
    h = sa3.toInt();
    s = sa4.toInt();
  }
  if (signal[0] == '#'){
    sa1 = "";sa2 = "";sa3 = "";sa4 = "";
    i = 1;
    while (signal[i] != '#'){
      sa1 = sa1 + signal[i];
      i++;
    }
    i++;
    while (signal[i] != '#'){
      sa2 = sa2 + signal[i];
      i++;
    }
    i++;
    while (signal[i] != '#'){
      sa3 = sa3 + signal[i];
      i++;
    }
    i++;
    while (i < signal.length()){
      sa4 = sa4 + signal[i];
      i++;
    }
    f2 = sa1.toInt();
    r2 = sa2.toInt();
    h2 = sa3.toInt();
    s2 = sa4.toInt();
  }
}
if (flag == false){
  a0 = analogRead(A0);
  a1 = analogRead(A1);
  a2 = analogRead(A2);
  a3 = analogRead(A3);
  
  if (a3 > 800){
    hig = sv4.read();
    hig -= 2;
    if (hig > 230 - front){hig = 230 - front;}
    if (hig < 130 - front){hig = 130 - front;}
    if (hig > 144) {hig = 144;}
    if (hig < 30){hig = 30;}
    sv4.write(hig);
    delay(30);    
  }
  if (a3 < 200){
    hig = sv4.read();
    hig += 2;
    if (hig > 230 - front){hig = 230 - front;}
    if (hig < 130 - front){hig = 130 - front;}
    if (hig > 144) {hig = 144;}
    if (hig < 30){hig = 30;}
    sv4.write(hig);
    delay(30);    
  }

  if (a1 > 800){
    front = sv1.read();
    hig = sv4.read();
    front -= 2;
    if (front > 150){front = 150;}
    if (front < 0){front = 0;}
    if (hig > 230 - front){hig = 230 - front;}
    if (hig < 130 - front){hig = 130 - front;}
    if (hig > 144) {hig = 144;}
    if (hig < 30){hig = 30;}
    sv4.write(hig);
    sv1.write(front);
    sv2.write(front + 10);
    delay(30);    
  }
  if (a1 < 200){
    front = sv1.read();
    hig = sv4.read();
    front += 2;
    if (front > 150){front = 150;}
    if (front < 0){front = 0;}
    if (hig > 230 - front){hig = 230 - front;}
    if (hig < 130 - front){hig = 130 - front;}
    if (hig > 144) {hig = 144;}
    if (hig < 30){hig = 30;}
    sv4.write(hig);
    sv1.write(front);
    sv2.write(front + 10);
    delay(30);    
  }
  
  if (a0 > 800){
    rot = sv3.read();
    rot += 2;
    sv3.write(rot);
    delay(30);    
  }
  if (a0 < 200){
    rot = sv3.read();
    rot -= 2;
    sv3.write(rot);
    delay(30);
  }

  if (a2 > 800){
    stap = sv5.read();
    stap += 2;
    sv5.write(stap);
    delay(30);    
  }
  if (a2 < 200){
    stap = sv5.read();
    stap -= 2;
    if (stap < 42){stap = 42;}
    if (stap > 180){stap = 180;}
    sv5.write(stap);
    delay(30);
  }
}
else {
  if (r != -1 && r2 != -1){
    setdefaul();
    delay(30);
    position(r, f, h, s);
    delay(1000);
    setdefaul();
    delay(30);
    position(r2, f2, h2, s2);
    delay(1000);    
  }
}
}
