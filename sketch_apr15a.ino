// Motor pins
#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11

// Ultrasonic sensor pins
#define trigFront 7
#define echoFront 6
#define trigLeft 5
#define echoLeft 4
#define trigRight 3
#define echoRight 2

long getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 20000);
  long distance = duration * 0.034 / 2;
  return (distance == 0 || distance > 400) ? 400 : distance;
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(trigFront, OUTPUT);
  pinMode(echoFront, INPUT);
  pinMode(trigLeft, OUTPUT);
  pinMode(echoLeft, INPUT);
  pinMode(trigRight, OUTPUT);
  pinMode(echoRight, INPUT);

  Serial.begin(9600);
}

void loop() {
  long front = getDistance(trigFront, echoFront);
  long left = getDistance(trigLeft, echoLeft);
  long right = getDistance(trigRight, echoRight);

  Serial.print("F: "); Serial.print(front);
  Serial.print(" L: "); Serial.print(left);
  Serial.print(" R: "); Serial.println(right);

  if (front > 20) {
    moveForward();
  } else if (left > right) {
    turnLeft();
    delay(400);
  } else {
    turnRight();
    delay(400);
  }
  delay(100);
}