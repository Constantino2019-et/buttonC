import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
red =4;
GPIO.setup(red,GPIO.OUT)
GPIO.output(red,True)
time.sleep(1)
GPIO.output(red,False)
time.sleep(1)
GPIO.output(red,True)
time.sleep(1)
GPIO.output(red,False)
GPIO.cleanup()