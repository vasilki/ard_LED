int led = 8;
int x = 3;
void setup()

{

pinMode(led, OUTPUT);

}

void loop()

{
delay(200*x);

digitalWrite(led, HIGH);

delay(100*x);

digitalWrite(led, LOW);

delay(100*x);

digitalWrite(led, HIGH);
delay(100*x);

digitalWrite(led, LOW);

delay(100*x);

delay(200*x);

digitalWrite(led, HIGH);
delay(50*x);
digitalWrite(led, LOW);
delay(150*x);

delay(100*x);
digitalWrite(led, HIGH);
delay(50*x);
digitalWrite(led, LOW);
delay(50*x);
digitalWrite(led, HIGH);
delay(50*x);
digitalWrite(led, LOW);

}
