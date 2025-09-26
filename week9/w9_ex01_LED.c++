const byte LED_PINS[4] = {13, 12, 11, 10};
const byte POT_PIN = A0;

const float POT_TOTAL_OHM = 10000.0;
const float HYST = 50.0;

const float TH_OHM[4] = {150.0, 3000.0, 6000.0, 9000.0};

int level = 0;

void setup() {
  for (byte i = 0; i < 4; i++) pinMode(LED_PINS[i], OUTPUT);
  Serial.begin(9600);
  Serial.println("4-LED step by potentiometer resistance (starts at 150 ohm)");
}

void setLevel(int n){
  for (byte i = 0; i < 4; i++){
    digitalWrite(LED_PINS[i], (i < n) ? HIGH : LOW);
  }
}

void loop() {
  const int N = 8;
  long sum = 0;
  for (int i = 0; i < N; i++){ sum += analogRead(POT_PIN); delay(2); }
  float adc = sum / (float)N;

  float R_bottom = (adc / 1023.0) * POT_TOTAL_OHM;

  int newLevel = 0;
  if (R_bottom >= TH_OHM[0] - HYST) newLevel = 1;
  if (R_bottom >= TH_OHM[1] - HYST) newLevel = 2;
  if (R_bottom >= TH_OHM[2] - HYST) newLevel = 3;
  if (R_bottom >= TH_OHM[3] - HYST) newLevel = 4;

  if (newLevel != level){
    level = newLevel;
    setLevel(level);
  }

  Serial.print("ADC="); Serial.print(adc, 0);
  Serial.print("  R~="); Serial.print(R_bottom, 0); Serial.print(" ohm");
  Serial.print("  level="); Serial.println(level);

  delay(15);
}
