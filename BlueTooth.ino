#include <DHT.h>
#define DHTPIN 5
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2,3);

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop() {
  int a =dht.readTemperature();
  int b =dht.readHumidity();
  Serial.println(a);
  Serial.println(b);
  BTSerial.print("온도:");
  BTSerial.print(a);
  BTSerial.println("C");
  BTSerial.print("습도:");
  BTSerial.println(b);

  delay(1000);

}
