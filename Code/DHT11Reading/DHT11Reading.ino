/*****************
 * Includes
******************/
//Include the DHT11 arduino library
#include <dht11.h>


/*****************
 * Macros
******************/
#define DHT11_PIN 2

/*****************
 * Object declarations 
*****************/
dht11 DHT11;


void setup() {
  //Configure the serial baud rate
  Serial.begin(9600);

  //Print a message
  Serial.println("DHT11 Reading example");  

}

void loop() {

  //Read Data
  DHT11.read(DHT11_PIN);

  //Print readed data
  Serial.println("Temperature: " +String(DHT11.temperature) + "°C - Humidity: " + String(DHT11.humidity) + "%");

  //Wait 2 seconds
  delay(2000);
}
