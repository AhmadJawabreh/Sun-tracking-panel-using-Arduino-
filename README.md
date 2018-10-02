# Sun-tracking-panel-using-Arduino-

Sun tracking panels: 

They are devices that orients solar panels “mirrors or lenses” toward the Sun,
and use the sun light to produce energy like in the form of electricity. 

Stationary mounts, which hold panels in a fixed position, can have their productivity compromised when the sun passes to a less-than-optimal angle.

Solution ?
Solar trackers, which automatically move to “track” the progress of the sun across the sky, and so maximizing output.

Our Task:
To make a hardware simulation of such a solar cell/panel that moves toward the sun light based on Arduino and light sensors 

Required components:
 1- Servo motor 
 2- Solar panel “papers”
 3- Arduino 
 4- LDR’s x 2
 5- Breadboard
 6- Resistors x 2
 7- Wires 
 8- voltage supply

How it works: 


The two LDR’s “Light Depended Resistor, sense the falling light on it ” are placed on the two sides of the solar panel, where they are connected to the Arduino through the breadboard.

An Arduino code is written to read these analog senses from the two sensors, try to figure which one sense higher light to move the panel toward it.

The servo motor here holds this panel to provide the control of rotary position for it, the motor will rotate the panel based on what sensor sense higher light through the arduino code.

When the difference between the two readings is very small, the rotation stops.

