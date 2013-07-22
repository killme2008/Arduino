int buttonPin = 3;
 
// setup 中初始化串口和按键针脚. 
void setup()
{
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}
 
// loop 中每次都检查按钮,如果按钮被按下,就发送信息到串口
 
void loop()
{
  if (digitalRead(buttonPin) == HIGH)
    Serial.write('H');
  else
    Serial.write('L');
 
  delay(1000);
}
