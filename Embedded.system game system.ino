
const int ledPin = 3;
const int buttonPin = 7;
const int buzzerPin = 6;
unsigned long startTime;
unsigned long reactionTime;
bool gameStarted = false;
bool ledOn = false;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Get Ready...");
}
void loop() {
  if (!ledOn && digitalRead(buttonPin) == HIGH) {
    Serial.println("Too Early!");
    tone(buzzerPin, 200);
    delay(1000);
    noTone(buzzerPin);
    delay(2000);
    Serial.println("Try Again...");
  }
  if (!gameStarted) {
    delay(random(2000, 5000));
    tone(buzzerPin, 1000);
    delay(150);
    noTone(buzzerPin);
    digitalWrite(ledPin, HIGH);
    startTime = millis();
    gameStarted = true;
    ledOn = true;
  }
  if (ledOn && digitalRead(buttonPin) == HIGH) {
    reactionTime = millis() - startTime;
    digitalWrite(ledPin, LOW);
    ledOn = false;
    Serial.print("Reaction Time: ");
    Serial.print(reactionTime);
    Serial.println(" ms");
    for (int i = 0; i < 3; i++) {
      tone(buzzerPin, 1500);
      delay(100);
      noTone(buzzerPin);
      delay(100);
    }
    delay(3000);
    gameStarted = false;
    Serial.println("Next Round...");
  }
}