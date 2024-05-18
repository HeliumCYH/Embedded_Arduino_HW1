/*
 * @Author: HeliumCYH 165759375+HeliumCYH@users.noreply.github.com
 * @Date: 2024-05-12 17:58:44
 * @LastEditors: HeliumCYH 165759375+HeliumCYH@users.noreply.github.com
 * @LastEditTime: 2024-05-17 19:47:55
 * @FilePath: \StreamLED\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>
#include <LiquidCrystal.h>

// put function declarations here:
int myFunction(int, int);

LiquidCrystal lcd(3, 5, 10, 11, 12, 13);//例如//初始化几个LCD需要使用的引脚，这里面的“rs”“en”等应换成你所连的引脚

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);//设置LCD要显示的列数、行数，即2行16列
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 1);//设置光标定位到第0列，第1行（从0开始）
  lcd.print("hello, world!");//输出Hello World
  delay(1000);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print("Chen YH");
  lcd.print("                ");
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}