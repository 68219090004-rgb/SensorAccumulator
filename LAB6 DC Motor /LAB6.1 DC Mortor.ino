/*  6.1  */
//https://app.cirkitdesigner.com/project/915002e2-eb19-4f78-b152-be02faccecb2

// Motor A (ซ้าย)
#define IN1 3
#define IN2 4

// Motor B (ขวา)
#define IN3 5
#define IN4 6

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {

  // ===== หมุนไปทางซ้าย =====
  // Motor A
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  // Motor B
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  delay(2000);   // 2 วินาที


  // ===== หมุนไปทางขวา =====
  // Motor A
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  // Motor B
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  delay(2000);   // 2 วินาที
}

