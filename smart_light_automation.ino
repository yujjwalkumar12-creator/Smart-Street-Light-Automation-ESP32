const int LDR_PIN = 34;  // LDR Analog pin GPIO 34
const int LED_PIN = 13;  // Smart Light Pin GPIO 13 

const int THRESHOLD = 2000; 

void setup() {
  Serial.begin(115200); 
  
  pinMode(LDR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  
  Serial.println("Smart Lighting System Started!");
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  
  Serial.print("LDR (Light) Value: ");
  Serial.println(ldrValue);
  
  // Automation Logic (IF / ELSE)
  if (ldrValue > THRESHOLD) { 
    digitalWrite(LED_PIN, HIGH); // TURN LED ON 
    Serial.println("Status: [ANDHERA] -> Smart Light ON");
  } 
  else {
    digitalWrite(LED_PIN, LOW);  // TURN LED OFF 
    Serial.println("Status: [UJALA] -> Smart Light OFF");
  }
  
  Serial.println();
  delay(1000); 
}
