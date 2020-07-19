# ArduinoRobotics2020

## 6.5.2020
#### Reflection:
Today, I started playing with the arduino. I tried connecting it with my computer and ran some testcodes to make the arduino blink. I played with a arduino uno. I connected a DC motor to the arduino. I verified that the motor was able to run.

<img src="https://raw.githubusercontent.com/Kevin0u/ArduinoRobotics2020/master/static/images/6.5.2020.jpeg" width="400">

## 6.15.2020
#### Reflection:
Today, I realized that in order to make my motor run properly, I need a motor controller.

## 6.22.2020
#### Reflection:
Today, my motor controller and other parts arrived. I now have LED's, LCD displays, Piezo Speakers, wires, a servo motor, and 2 geared DC motors.

<img src="https://raw.githubusercontent.com/Kevin0u/ArduinoRobotics2020/master/static/images/6.22.2020.jpeg" width="400">

## 7.2.2020
#### Reflection:
Today, I learned to connect my uno to a breadboard with a potentiometer. Using the potentiometer, I was able to control the servo and have it spin. I also learned today that based on the spin from the potentiometer, the analog number (which ranges from 0-1023) updates to the servo each time a change was made. The goal for me is to learn how to incorporate hardware with software and hopefully build a mini robot in the near future. This part is important because I need to understand how potentiometer and servo motors work and how they tie in together with a robot.

<img src="https://raw.githubusercontent.com/Kevin0u/ArduinoRobotics2020/master/static/images/7.2.2020.jpeg" width="400">

## 7.11.2020
#### Reflection:
Today I was able to experiment with LED Lightbulbs with Flex sensors. I learned that Flex sensors are resistors. In this experiment, the output of the flex sensor is connected to an analog pin that send analog values to the uno board. The analog values that range from 0-1023 are then mapped to the PWM(Pulse width modulation) values that range from 0-225. After mapping out the analog values, the board then can utilize PWM waves to control the brightness that is given off by the LED light bulb. The brightness of the bulb depends on the duty cycle of PWM waves. By altering how long the power is on for and when the power is off during a cycle over many cycles, we are able to witness a change in the average voltage that a device is experiencing. For instance, a 50% duty cycle experiences a 50% power on as well as a 50% power off. As a result, the receiving device is receiving 50% less voltage on average compared to when the duty cycle sends for power to be on at all time. Knowing how PWM waves alter the voltage by deciding when to send the jolt of power, we are able to utilize the flex sensors analog values to control the brightness of the bulb.

<img src="https://raw.githubusercontent.com/Kevin0u/ArduinoRobotics2020/master/static/images/7.11.2020.jpeg" width="400">

## 7.18.2020
#### Reflection:
Today I experimented with a photo resistor because it came in the kit and I wanted to know its capabilities and behaviors. I wanted to know I could potentially use it on a robot in the future. Upon connecting the Arduino, photo resistor and the LED bulbs, the light would not turn on. At first, I did not understand why the bulb wasn’t turning on. However, I realized that my test code had set the sensor value to only turn on when the value is below 150. I turned on Serial.begin(9600) so I could see the analog output value coming from the photo resistor. I was able to debug that my surrounding environment gave an average value of about 300. After correcting the sensor value to turn on only when the light value is below 450, only one of the light bulbs was turning on. At first, I questioned whether the light bulb was burnt out and simply swapped it out. However, after swapping out the LED, the problem still remained. After looking through the circuit, I realized that I did not ground the LED and this was the reason why the LED wasn’t turning on. After grounding the LED, the circuit ran smoothly and I was able to test out how the LED turned on and off as a result of the photo resistor.

<img src="https://raw.githubusercontent.com/Kevin0u/ArduinoRobotics2020/master/static/images/7.18.2020.jpeg"
