#define TRIG 13 //TRIG pin
#define ECHO 12 //ECHO pin

int led_r = 7;
int led_g = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(led_r, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop()
{
  long duration, distance; 
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  duration = pulseIn(ECHO, HIGH);  //pulseIn function : Measure the time of the pulse (Measure time at high)
  distance = duration /58.2;
  
  Serial.print(distance);
  Serial.println(" Cm");
  
  if(distance >=100)
  {
    digitalWrite(led_r, HIGH);  // led - HIGH = turn on
    digitalWrite(led_g, LOW);  // led - LOW = turn off
  }
  else
  {
    digitalWrite(led_r, LOW);
    digitalWrite(led_g, HIGH);
  }
  delay(1000); // Wait for 1000 millisecond(s)
  
  /*
  digitalWrite(led_r, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led_r, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  */
}


LED_BUILTIN - LED 내장 


