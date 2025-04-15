#include <SimpleTimer.h>
SimpleTimer timerCnt;

unsigned long loopCnt;

void timerCntFunc() {
  Serial.println(loopCnt);
  loopCnt = 0;
}

void setup() {
  Serial.begin(115200);
  Serial.println();

  timerCnt.setInterval(1000,timerCntFunc);    //timerCntFunc 호출
}

void loop() {
  timerCnt.run();   //run - 반드시 loop 안에서 호출해야함
  loopCnt++;
}

//함수의 원형부분이 헤더에 존재