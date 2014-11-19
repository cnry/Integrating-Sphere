/*
 * Canary Connect, Inc.  2014
 *
 * This program randomly cycles through RGB colors.
 *
 */


// RGB LED program 

// Output
int redPin = 9;   // Red LED,   connected to digital pin 9
int grnPin = 10;  // Green LED, connected to digital pin 10
int bluPin = 11;  // Blue LED,  connected to digital pin 11




void setup()
{
  pinMode(redPin, OUTPUT);   // sets the pins as output
  pinMode(grnPin, OUTPUT);   
  pinMode(bluPin, OUTPUT); 
}

int redVal=255;
int grnVal=255;
int bluVal=255;

void loop()
{
    
 
   redVal = random(255);
   grnVal = random(255);
   bluVal = random(255);

    analogWrite(redPin, redVal);      
    analogWrite(grnPin, grnVal);      
    analogWrite(bluPin, bluVal);      

    delay(300);

}
