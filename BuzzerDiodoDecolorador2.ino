/*
  Fade-Devolorador

  This example shows how to fade an LED on pin 4 using the analogWrite()
  function.

  The analogWrite()  and The tone() functions uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.
  

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

int led = 4;           // the PWM pin the LED is attached to
int buzzer =3;          // the PWM pin the BUZZER is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
int cont =0; 

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 4 to be an output:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  cont=cont+1;
  //int i=0;
//  do {
//    i++;
//    // set the brightness of pin 4:
//  analogWrite(led,brightness/i);// change the brightness for next time through the loop:
//  // set the TONE of pin 3:
//  tone(buzzer,2000/i);
//  delay(100);
//  noTone(buzzer);
//delay(500);
//    } while (i<5);
 
   analogWrite(led,brightness);// change the brightness for next time through the loop:
  // set the TONE of pin 3:
  tone(buzzer,10*brightness);
  delay(100);
  noTone(buzzer);
  delay(200);
  brightness = brightness + fadeAmount;
  // reverse the direction of the fading at the ends of the fade:
 if (brightness <= 0 || brightness >= 2500) {
  fadeAmount = -fadeAmount;
 // cont=cont-(2*cont+1);
 }


  // wait for 30 milliseconds to see the dimming effect
  //delay(3000);
}