// C++ code
//

#define M1_0 5
#define M1_1 3

int setPWM = 25;

void setup()
{
  pinMode(M1_0, OUTPUT);
  pinMode(M1_1, OUTPUT);
}

void loop()
{
  analogWrite(M1_0, setPWM);
  analogWrite(M1_1, 0);
  delay(3000);

  // Motor OFF (3 detik)
  analogWrite(M1_0, 0);
  analogWrite(M1_1, 0);
  delay(3000);
}
