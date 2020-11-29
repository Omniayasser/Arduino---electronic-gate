
#  Overview:
This project is a simulation of the electronic gate which open when someone gets close from it by using sensors.  



# Components:
1.	Servo motor (gate)
2. LDR sensor (on the left of the gate)
3. LDR sensor (on the right of the gate)
4.	Button 
5.	Buzzer 
6.	Resistances 
7.	Wires 



# Discussion:
After connecting every component in its right position, we start to write the code of the project. 
**Code**: 
First, we declared all the bins in the Arduino kit which are servo motor, button and buzzer ( digital bins ) and 2 LDR ( analog bins), then we start to define each component and which of them input or output.
 After that, our system works when the push button pressed and stop when it pressed again. **And how this done?** 
First of all we declared a variable called flag = false and we made it as an indictor when the button pressed its value will change to true and then we made while loop contains our code that works as the flag = true. 
Then, we made two functions on for entry system and the other for exist system. 



## **Entry System Function**:
The gate should not open if the number of people equal five and the buzzer will be turned on if people exceeds 5. So, firstly we made a variable called enter to store the input data from LDR in it and a counter of the people who enter or leave, then at the starting of the function we used if statement to test if the counter <5 and if it is true it will move to the next condition which is that if the enter <=55 and this value depends on the brightness of the place, however it will increase the counter by 1 and the motor will rotate until the counter = 5 it will get out from the if statement and go to else which contain that the buzzer will be turned on. 



## **Exist System Function**: 
it will start also by if condition ( counter <=1) and if it is true it will read the data from the right LDR sensor and if it <=55 it will decrease the counter by 1 and the motor will be turned on until the counter = 0 then, the condition will be false.



## Tasks:
1. **Connecting the components to the breadboard & arduino:** Fady Mohsen (Simulator "Tinkercad") - Omnia Yasser (Hardware Components "Kits")
2. **Code:** Fady Mohsen (Functions + Buzzer) - Omnia Yasser (Photoresistor + Push Button)


## Self Learning:
1. Connecting Buzzer.
2. The Code of Buzzer.
3. The ways of entry Gates.
