/*
 Fluffy Prune for Linux.
 For littleBits Arduino module. Circut:
                                    Computer
                                       | (USB port)
 Power------Button------Input_0_on_Arduino

 You can adapt this for another Arduino by changing the number on 
 line 17 and connecting a button. If you don't know how to add a
 button, look at my guide at http://arduino.codingkid.ninja.
 Based off of:
  http://www.arduino.cc/en/Tutorial/KeyboardMessage

 Only use with an Arduino that supports keyboard emulation. 
 Licensed under the MIT license. 
 */

const int buttonPin = 0;          // input pin for pushbutton
int previousButtonState = HIGH;   // for checking the state of a pushButton
int counter = 0;                  // button push counter

void setup() {
  // make the pushButton pin an input:
  pinMode(buttonPin, INPUT);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  // read the pushbutton:
  int buttonState = digitalRead(buttonPin);
  // if the button state has changed,
  if ((buttonState != previousButtonState)
      // and it's currently pressed:
      && (buttonState == HIGH)) {
    // type out a message
    Keyboard.println("mkdir bobdiryay");
    Keyboard.println("cd bobdiryay");
    Keyboard.println("touch bob.py");
    Keyboard.println("nano bob.py");
    Keyboard.println("import time");
    Keyboard.println("print('bob')");
    Keyboard.println("time.sleep(1)");
    Keyboard.println("print('joe')");
    Keyboard.println("time.sleep(1)");
    Keyboard.print("print('Made with an Arduino')");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('o');
    delay(100);
    Keyboard.releaseAll();
    Keyboard.write(KEY_RETURN);
    delay(100);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('x');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    Keyboard.println("python3 bob.py");
    delay(3500);
    Keyboard.println("rm bob.py && cd .. && rmdir bobdiryay");
    delay(5100);
    
    
  }
  // save the current button state for comparison next time:
  previousButtonState = buttonState;
}
 
