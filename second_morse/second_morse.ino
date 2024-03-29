void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
char data;
int _pin;
void loop() {
  while (Serial.available()>0){
    data= Serial.read();
    output(data);
    delay(20);
  }
}
void output(char data)
{
  switch(data)
    {
          case 'a': dot();dash();break;
          case 'b': dash();dot();dot();dot();break;
          case 'c': dash();dot();dash();dot();break;
          case 'd': dash();dot();dot();break;
          case 'e': dot();break;
          case 'f': dot();dot();dash();dot();break;
          case 'g': dash();dash();dot();break;
          case 'h': dot();dot();dot();dot();break;
          case 'i': dot();dot();break;
          case 'j': dot();dash();dash();dash();break;
          case 'k': dash();dot();dash();break;
          case 'l': dot();dash();dot();dot();break;
          case 'm': dash();dash();break;
          case 'n': dash();dot();break;
          case 'o': dash();dash();dash();break;
          case 'p': dot();dash();dash();dot();break;
          case 'q': dash();dash();dot();dash();break;
          case 'r': dot();dash();dot();break;
          case 's': dot();dot();dot();break;
          case 't': dash();break;
          case 'u': dot();dot();dash();break;
          case 'v': dot();dot();dot();dash();break;
          case 'w': dot();dash();dash();break;
          case 'x': dash();dot();dot();dash();break;
          case 'y': dash();dot();dash();dash();break;
          case 'z': dash();dash();dot();dot();break;
          default: break;
    }
}
void dot()
{
  _pin=13;
  digitalWrite(_pin,HIGH);
  delay(250);
  digitalWrite(_pin,LOW);
  delay(250);
}
void dash()
{
  _pin=13;
  digitalWrite(_pin,HIGH);
  delay(1000);
  digitalWrite(_pin,LOW);
  delay(250);
}
