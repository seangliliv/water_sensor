 

int waterPin = A0;        // Pin 
 

class Sensor {
private:
  int waterLevel;
   
public:
  // Constructor
  Sensor() {
    // Initialize 
    waterLevel = 0;
     
    
  }

  // Setter methods
  void setWaterLevel(int level) {
    waterLevel = level;
  }

 

  // Getter methods
  int getWaterLevel() {
    return waterLevel;
  }

  
};


Sensor mySensor;  
 

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  // Read 
 int waterLevel = analogRead(waterPin);

  // Set 
  mySensor.setWaterLevel(waterLevel);

  // Get 
  int currentWaterLevel = mySensor.getWaterLevel();
  
  Serial.print("water level: ");
  Serial.print(currentWaterLevel);
   

  delay(1000);  
}
