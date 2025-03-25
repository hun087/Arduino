// Fine dust data LCD display

#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);

int V0 = A0;
int V_led = 7;

float V0_value = 0;
float Voltage = 0;
float dustDensity = 0;

void setup() {
	pinMode(V_led, OUTPUT);
	pinMode(Vo, INPUT);
	lcd.init();
	lcd.backlight();
	lcd.print("LCD init");
	delay (2000);
	lcd.clear();
}

void loop() {
  digitalWrite(V_led, LOW);
  delayMicroseconds(280);
  Vo_value = analogRead(vo);
  delayMicroseconds(40);
  digitalWrite(V_led,HIGH);
  delayMicroseconds(9680);

  Voltage = Vo_value*5.0 / 1023.0;
  dustDensity = (Voltage - 0.5)/0.005;
  lcd.setCursor(0,0);

  lcd.print(dustDensity);
  lcd.print("um");
  delay(1000);
  lcd.clear();
}
