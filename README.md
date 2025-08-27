# Software Debouncing in C (Arduino)

This project is about handling button debouncing in software using an Arduino Uno.  
When working with push buttons, one problem that always shows up is "bouncing". A single press can actually look like multiple presses to the microcontroller because of how the contacts inside the button physically behave. To fix that, I implemented a simple software debouncing routine in C.


## What I Built
- A small circuit on Wokwi with:
  - Arduino Uno
  - Pushbutton connected to pin 2
  - LED connected to pin 13 through a 220Ω resistor
- A software routine that makes sure one press = one toggle of the LED  
- Used Arduino's internal pull-up resistor to keep the wiring simple


## How It Works
- Without debouncing: one press could toggle the LED multiple times  
- With debouncing: the code waits a short delay (20ms), checks again, and only toggles the LED if the button is still pressed  
- The LED now toggles cleanly once per button press


## Code
The exact C code I used for the Wokwi simulation is included in this repo under the file:
Software_Debouncing.c



## Videos
I uploaded all the demo videos showing the behavior before and after debouncing inside the folder named 'Videos'



## Simulation
You can try out the circuit yourself on Wokwi:  
[Wokwi Project Link](https://wokwi.com/projects/434539958514887681)

## What I Learned
- Mechanical switches bounce and need debouncing to be useful in digital systems  
- A simple software delay is often enough for small projects  
- Arduino's `INPUT_PULLUP` makes wiring cleaner and avoids using extra resistors  
- Wokwi is a great way to quickly test and share embedded code online  
