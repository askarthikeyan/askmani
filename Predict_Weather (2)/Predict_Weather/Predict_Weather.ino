//#include <ESP8266WiFi.h>
//#include <WiFiClient.h>
//#include <ThingSpeak.h>
#include "DecisionTree.h"
Eloquent::ML::Port::DecisionTree weatherClassifier;

#include "DHT.h"

// Variable Declaration
float t;
float h;
float hic;
int prediction;

// ssid name and password
/*
const char* ssid = "Bharat";//type your ssid
const char* password = "akhandta891@";//type your password
*/
//WiFiServer server(80);//Service Port
//WiFiClient client;
/*
unsigned long myChannelNumber = 2107048; // Thingspeak Channel Number
const char* myWriteAPIKey = "DRAFT9P2CEBMXVRB"; // Thingspeak Channel Write API Key
*/

#define DHTPIN 2     // Digital pin connected to the DHT sensor D1 earlier
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHT11 test!"));
  delay(10);
  //WiFi.begin(ssid, password);
  //ThingSpeak.begin(client);

  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);
  // Read humidity
  float h = dht.readHumidity();
  // Read temperature as Celsius
  float t = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Compute heat index in Celsius (the default)
  float hic = dht.computeHeatIndex(t,h);

  // Print values of temperature, humidity and heat index to serial monitor
  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C  Heat index: "));
  Serial.print(hic);
  Serial.println(F("°C"));

  float input[3] = {t,h,hic};
  // Giving input values to predict Function
  int prediction = weatherClassifier.predict(input);

  // Checking Condition of weather
  Serial.print("Prediction: ");
  if (prediction == 0){
    Serial.println("Clear");
  }
  else if(prediction == 1){
    Serial.println("Sunny");
  }
  else if(prediction == 2){
    Serial.println("Mist");
  }
  else if(prediction == 3){
    Serial.println("Light drizzle");
  }
  else if(prediction == 4){
    Serial.println("Light rain");
  }
  else if(prediction == 5){
    Serial.println("Overcast");
  }
  else if(prediction == 6){
    Serial.println("Cloudy");
  }
  else if(prediction == 7){
    Serial.println("Partly cloudy");
  }
  else if(prediction == 8){
    Serial.println("Patchy light drizzle");
  }
  else if(prediction == 9){
    Serial.println("Fog");
  }
  else if(prediction == 10){
    Serial.println("Moderate rain");
  }
  else if(prediction == 11){
    Serial.println("Patchy rain possible");
  }

  // Sending or Writing data to ThingSpeak
  /*
  ThingSpeak.writeField(myChannelNumber, 1, t, myWriteAPIKey);
  ThingSpeak.writeField(myChannelNumber, 2, h, myWriteAPIKey);
  ThingSpeak.writeField(myChannelNumber, 3, hif, myWriteAPIKey);
  ThingSpeak.writeField(myChannelNumber, 4, prediction, myWriteAPIKey);
  */
  delay(1000);
}
