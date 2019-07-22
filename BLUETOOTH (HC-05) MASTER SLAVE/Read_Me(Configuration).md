# **Bluetooth HC-05 Configuration For Master and Slave Configuration**
**By Bhanu Aggarwal**
## What do we need?
1. Two HC-05 Bluetooth module
2. Jumper Wires
3. Arduino Uno


## Steps:
1. Label your module Master(M) & Slave.
2. Upload a blank sketch to Arduino.
3. First We will connect the slave HC-05 module in following manner :-
    HC-05	Arduino

    RX	RX (pin-0)
    
    TX	TX (pin-1)
    
    5V	5V
    
    GND	GND
    
    STATE	Open
    
    EN	Open
    

4. The HC-05(Slave) will start short-rapid blinks indicating standard pairing mode.
5. To configure the bluettoth, we need to set it in AT command mode in which the HC-05 will blink in long slow blinks.
6. To enter into AT command mode, discoonect the 5V(power) from the HC-05 module and then while pressing(holding down) the rest button on HC-05,connect the 5V(power) back to the HC-05 module, release the reset button. It will start to blink in long slow blinks indicating it has entered AT command mode.
7. Enter the serial monitor and open Serial monitor. Check that the baud rate is set to 38400 and “Both NL and CR” are selcted.
8. Now, we can begin to enter AT commands.
9. Type AT in the top bar and press enter. You will get an error. Type AT again and press enter,you will get a message: “OK”.
10. Type AT+ROLE? and press enter. 
	ROLE: 0 -> Slave;
	ROLE :1 -> Master.
For slave module, AT+ROLE? hould return ROLE: 0, if not, set ROLE = 0 of the salve module by entering AT+ROLE=0.
11. Get the adress of the slave module by entering AT+ADDR? 
12.  Copy the adress and replace colons (:) by commas(,) in the adress.
13. To check the baud rate of the enter AT+UART?
14. Similarly enter the AT command mode the master HC-05 module.
15. Open the Serial monitor. Enter AT. Enter AT again.
16. Set role to master by entering AT+ROLE=1
17. Check the connection mode by entering AT+CMODE?
	if CMODE : 0 -> Connect to one.
	    CMODE : 1 -> Connect to any.
18. Enter AT+CMODE = 0 
19. To bind the master to the slave, enter,
	AT+BIND = adress with comma( the one we copied earlier).
20. Check the Baud rate using AT+UART? and make sure it’s the same as salve module.
21. Unplug both master and slave and connect them to their individual arduino board in the folloing manner:
    HC-05	Arduino
    
    RX	TX (pin-1)
    
    TX	RX (pin-0)
    
    5V	5V
    
    GND	GND
    
    STATE	Open
    
    EN	Open
    
 22. Both module when powered ON will enter into paired mode which is indicated by the synchronous blink on both the module.



