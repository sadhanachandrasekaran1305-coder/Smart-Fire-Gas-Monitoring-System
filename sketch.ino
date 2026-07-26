 #include <DHT.h>

#define DHTPIN 4
#define DHTTYPE DHT22

#define BUZZER 18
#define SMOKE_PIN 34

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);

  dht.begin();

  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, LOW);

  Serial.println("Fire & Gas Monitoring System Started...");
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  int smokeValue = analogRead(SMOKE_PIN);

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT22 sensor!");
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C  ");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %  ");

  Serial.print("Smoke Value: ");
  Serial.println(smokeValue);

  // Smoke threshold
  if (smokeValue > 2000) {
    Serial.println("⚠️ ALERT! Smoke Detected!");
    digitalWrite(BUZZER, HIGH);
  } else {
    digitalWrite(BUZZER, LOW);
  }

  delay(2000);
}