/* 4x3 Matrix 12 Key Membrane Switch Keypad [S228] : http://rdiot.tistory.com/312 [RDIoT Demo] */

#include <Keypad.h>
const byte ROWS = 4; //four rows
const byte COLS = 3; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
 {'1','2','3'},
 {'4','5','6'},
 {'7','8','9'},
 {'*','0','#'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3}; //connect to the column pinouts of the keypad
//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
void setup(){
 Serial.begin(9600);
}
 
void loop(){
 char customKey = customKeypad.getKey();
 
 if (customKey){
 Serial.println(customKey);
 }
 
}
