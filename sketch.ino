#include "OneButton.h"                              //OneButton library
 
 
OneButton button(A0, true);                         
 
#define L1 2
int RLY1 = LOW;                                   

#define L2 3
int RLY2 = LOW;

#define L3 4
int RLY3 = LOW;


void setup() {
 
  pinMode(L1, OUTPUT);                              
  pinMode(L2, OUTPUT);                              
  pinMode(L3, OUTPUT);                              
  
     
  button.attachDoubleClick(doubleclick);            // link the function to be called on a doubleclick event.
  button.attachClick(singleclick);                  // link the function to be called on a singleclick event.
  button.attachLongPressStop(longclick);            // link the function to be called on a longpress event.
} 
  
 
 
void loop() {
  
  button.tick();                                    
 
 
  delay(10);                                        
} 
 
 
 
void doubleclick() {                                // happens when button is double-clicked
  RLY1 = ~ RLY1;  
  digitalWrite(L1,RLY1);
  delay(250);                  
} 
 

 
void singleclick(){                                 // happens when the button is clicked
  RLY2 = ~ RLY2;  
  digitalWrite(L2,RLY2);
  delay(250);                              
}
 
void longclick(){                                   // happens when buton is long-pressed
  RLY3 = ~ RLY3;  
  digitalWrite(L3,RLY3);
  delay(250);
  
  // turn off the blue Relay
}