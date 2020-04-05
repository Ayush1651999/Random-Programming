import serial
import numpy as numpy
from drawnow import *
from matplotlib import pyplot as plt
fig, ax = plt.subplots()
frame1 = plt.gca()

arduinoData = serial.Serial('/dev/ttyACM0', 115200)

# print(arduinoData)

def makeFig():                                      #Create a function that makes our desired plot
    plt.grid(True)                                  #Turn the grid on
    plt.ylim([0, 1000])    
    frame1.axes.get_xaxis().set_ticks([])
    plt.plot(x_coor, y_coor)       


while True: # While loop that loops forever

    while (arduinoData.inWaiting()==0): #Wait here until there is data
        pass #do nothing

    while True :
        try :
            arduinoString = arduinoData.readline().decode("utf-8")
            break
        except UnicodeDecodeError:
            continue
    dataArray = arduinoString.split(',')
    
    print(dataArray)  

    x_coor = []
    y_coor = []
    for i in range(64):
        # print(i)
        x_coor.append(600*i)                   # amking a list of values on x-axis 
        x_coor[i] = '{0:.2f}'.format(float(x_coor[i]))     
        if x_coor[i] in dataArray:
            index = dataArray.index(x_coor[i])
            y_coor.append(dataArray[index+1])     # for the y-coordinates, we chose the value next to the x-coordinates (depends on the arduino output format)
        else:
            y_coor.append(0)
        # print(index)
        
        while True :
            try:
                y_coor[i] = float(y_coor[i])
                break
            except ValueError:
                y_coor[i] = y_coor[i-1]      # no need to use float function again, y_coor[i-1] is already a float-type

    drawnow(makeFig)                       #Call drawnow to update our live graph
    plt.pause(.00001)                     #Pause Briefly. Important to keep drawnow from crashing    