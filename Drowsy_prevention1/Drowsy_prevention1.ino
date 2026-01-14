#define IR_SENSOR_PIN 34       // IR sensor connected to GPIO 34 
#define EYE_SENSOR_PIN 35      // Eye-blink sensor connected to GPIO 
35 
#define BUZZER_PIN 25          // Buzzer connected to GPIO 25 
 
void setup() { 
  pinMode(IR_SENSOR_PIN, INPUT); 
  pinMode(EYE_SENSOR_PIN, INPUT); 
  pinMode(BUZZER_PIN, OUTPUT); 
  Serial.begin(115200); 
} 
 
void loop() { 
  int irSensorValue = digitalRead(IR_SENSOR_PIN); 
  int eyeBlinkValue = digitalRead(EYE_SENSOR_PIN); 
 
23 
 
  // Check for drowsiness condition 
  if (irSensorValue == LOW && eyeBlinkValue == HIGH) { 
// Drowsy state detected 
    Serial.println("Drowsiness Detected! Activating Buzzer..."); 
    digitalWrite(BUZZER_PIN, HIGH);  // Turn ON the buzzer 
    delay(2000);                     // Keep buzzer on for 2 seconds 
    digitalWrite(BUZZER_PIN, LOW);   // Turn OFF the buzzer 
  } else { 
    digitalWrite(BUZZER_PIN, LOW);   // Ensure buzzer is OFF 
  } 
 
  delay(500); // Adjust as per your needs 
} 
