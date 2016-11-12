// Automatic motor pump for home
// 
// Made by Vivek Raj
// License: MIT
// Downloaded from: https://circuits.io/circuits/1106058-automatic-motor-pump-for-home

int motor_out = 13;
int level_high = 8;
int level_low = 7;
int check = 2;
int check_led = 12;

void setup(){
pinMode(motor_out, OUTPUT);
pinMode(check_led, OUTPUT);
pinMode(level_high, INPUT);
pinMode(level_low, INPUT);
pinMode(check, INPUT);

}

void loop (){
   
if (digitalRead(check) == HIGH) {
    digitalWrite(check_led , LOW);
    if ((((digitalRead(level_high) == LOW) && (digitalRead(level_low) == LOW)))) {
        while (((digitalRead(level_high) == LOW) && (digitalRead(check) == HIGH))) {
            digitalWrite(motor_out, HIGH);
            delay (1000);
         }
    } else {
    	digitalWrite(motor_out, LOW);
    }
  } else {
    digitalWrite(motor_out, LOW);
	digitalWrite(check_led, HIGH);
     }

}

    
      
