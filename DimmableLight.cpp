int bluePin = 6;
int potPin = A1;
int potVal;
float LEDVal;

void setup() {
pinMode(bluePin, OUTPUT);
pinMode(potPin, INPUT);
Serial.begin(9600);
}

void loop() {
potVal = analogRead(potPin);
// point slope
LEDVal = (255./1023.) * potVal;
analogWrite(bluePin, LEDVal);
Serial.println(LEDVal);
}
