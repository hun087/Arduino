void setup() {
  Serial.begin(115200);
  Serial.println();
}

void loop() {
  static unsigned long loopCnt = 0;   // static - 메모리 공간 정적으로 다른 공간 저장
  static unsigned long nextMil = millis() + 1000;

  loopCnt++;

  if (millis() > nextMil) {
    nextMil = millis() + 1000;
    Serial.println(loopCnt);
    loopCnt = 0;
  }
}


s:88