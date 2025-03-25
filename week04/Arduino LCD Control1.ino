// Arduino LCD (16x2 I2C) Control - Hello World! Output

#include <Wire.h>				// I2C 통신을 위한 기본 라이브러리
#include <LiquidCrystal_I2C.h>		// I2c LCD 라이브러리


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  
  lcd.init();				// I2c Lcd 초기화
  lcd.backlight();				// 백라이트 켜기
  lcd.print("LCD init");
  delay (2000);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Hello, World!");
  
  for (int position = 0; position < 16; position++) {
    lcd.scrollDisplayLeft();
    delay(150);
  }
}

//아두이노 LCD (16x2 I2C) 제어 - i2c 주소 찾기

# include <Wire.h>

void setup() {
  Serial.begin(9600);	// 시리얼 모니터 시작 (속도: 9600 baud)
  Wire.begin();		// I2C 통신 시작
  Serial.println("I2C Scanner Running...");	// 시작 메시지 출력
}

void loop() {
  Serial.println("Scanning...");	//검색 시작 메시지 출력

  for (byte address=1; address<127; address++) {	// I2c 주소 범위: 0x01 ~0x7F (1~127)
    Wire.beginTransnission(address);	// 특정 주소로 통신 시작
    if (Wire.beginTransnission() == 0) {	// 응답이 0이면 I2C 장치가 존재함
      Serial.print("I2c 장치 발견 : 0x");	// 발견된 장치 주소 출력
      Serial.println(address, HEX);	// 16진수 (HEX) 형식으로 출력
      delay(500);	// 0.5초 대기 (너무 빠르게 반복되지 않도록)
    }
