const int tombol_CW_mtr1 = 11;
const int tombol_CCW_mtr1 = 10;
const int tombol_break_mtr1 = 9;

const int tombol_CW_mtr2 = 6;
const int tombol_CCW_mtr2 = 7;
const int tombol_break_mtr2 = 8;

const int IN1Pin = 5; 
const int IN2Pin = 4;

const int IN3Pin = 3; 
const int IN4Pin = 2;

void setup()
{
pinMode(tombol_CW_mtr1, INPUT_PULLUP);
pinMode (tombol_CCW_mtr1,INPUT_PULLUP);
pinMode(tombol_break_mtr1, INPUT_PULLUP);
pinMode(tombol_CW_mtr2, INPUT_PULLUP);
pinMode(tombol_CCW_mtr2, INPUT_PULLUP);
pinMode(tombol_break_mtr2, INPUT_PULLUP);

pinMode(IN1Pin, OUTPUT);
pinMode(IN2Pin, OUTPUT);
pinMode(IN3Pin, OUTPUT);
pinMode(IN4Pin, OUTPUT);
}

void loop()
{

if (digitalRead(tombol_CW_mtr1)==LOW) {
digitalWrite(IN1Pin,HIGH);
digitalWrite(IN2Pin,LOW);
}
else 
if (digitalRead(tombol_CCW_mtr1)==LOW) {
digitalWrite(IN1Pin,LOW);
digitalWrite(IN2Pin,HIGH);
}

else
{
if (digitalRead(tombol_break_mtr1)==LOW) {
digitalWrite(IN1Pin,LOW);
digitalWrite(IN2Pin,LOW);
}
}

if (digitalRead(tombol_CW_mtr2)==LOW) {
digitalWrite(IN3Pin,HIGH);
digitalWrite(IN4Pin,LOW);
}
else 
if (digitalRead(tombol_CCW_mtr2)==LOW) {
digitalWrite(IN3Pin,LOW);
digitalWrite(IN4Pin,HIGH);
}

else
{
if ( digitalRead(tombol_break_mtr2)==LOW) {
digitalWrite(IN3Pin,LOW);
digitalWrite(IN4Pin,LOW);
}
}
}
