from sense_hat import SenseHat
from time import sleep
from random import randint
sense=SenseHat()
sense.show_message("hello ntu", scroll_speed=0.01)

sense.clear()

def pixelDisplay():
    red = (255,0,0)
    yellow = (255,255,0)
    green = (0,255,0)
    blue = (0,0,255)

    sense.set_pixel(randint(0,7),randint(0,7),red)
    sleep(1)
    sense.set_pixel(randint(0,7),randint(0,7),blue)
    sleep(1)
    sense.set_pixel(randint(0,7),randint(0,7),yellow)
    sleep(1)
    sense.set_pixel(randint(0,7),randint(0,7),green)
    # randomNumber = randint(1,10)
    # print("loading...", randomNumber,"seconds left")
    # while randomNumber>0:
    #     sleep(1)
    #     randomNumber=randomNumber-1
    #     print("loading...", randomNumber,"seconds left")
    # else:
    #     print("loading complete")

def rotatingImage():
    n=10
    for x in range(1,n):
        if x%2==0:
            y = (255, 255, 0)
            b = (0, 0, 0)
            image_pixels =[b, b, b, b, b, b, b, b,
    b, b, b, y, y, y, b, b,
    b, b, y, y, b, b, b, b,
    b, b, y, y, y, y, b, b,
    b, b, y, y, y, y, b, b,
    b, b, b, y, y, y, b, b,
    b, b, b, y, b, y, b, b, 
    b, b, b, b, b, b, b, b]
            randomNumber = randint(0,3)
            sense.set_rotation(randomNumber*90)
            sense.set_pixels(image_pixels)
            sleep(1)
        else:
            b = (255, 255, 0)
            y = (0, 0, 0)
            image_pixels =[b, b, b, b, b, b, b, b,
    b, b, b, y, y, y, b, b,
    b, b, y, y, b, b, b, b,
    b, b, y, y, y, y, b, b,
    b, b, y, y, y, y, b, b,
    b, b, b, y, y, y, b, b,
    b, b, b, y, b, y, b, b, 
    b, b, b, b, b, b, b, b]
            randomNumber = randint(0,3)
            sense.set_rotation(randomNumber*90)
            sense.set_pixels(image_pixels)
            sleep(1)

def rotatingImageRandColour():
    n=10
    for x in range(1,n):
        if x%2==0:
            y = (randint(0,255), randint(0,255), randint(0,255))
            b = (randint(0,255), randint(0,255), randint(0,255))
            image_pixels =[b, b, b, b, b, b, b, b,
b, b, b, y, y, y, b, b,
b, b, y, y, b, b, b, b,
b, b, y, y, y, y, b, b,
b, b, y, y, y, y, b, b,
b, b, b, y, y, y, b, b,
b, b, b, y, b, y, b, b, 
b, b, b, b, b, b, b, b]
            randomNumber = randint(0,3)
            sense.set_rotation(randomNumber*90)
            sense.set_pixels(image_pixels)
            sleep(1)
        else:
            y = (randint(0,255), randint(0,255), randint(0,255))
            b = (randint(0,255), randint(0,255), randint(0,255))
            image_pixels =[b, b, b, b, b, b, b, b,
b, b, b, y, y, y, b, b,
b, b, y, y, b, b, b, b,
b, b, y, y, y, y, b, b,
b, b, y, y, y, y, b, b,
b, b, b, y, y, y, b, b,
b, b, b, y, b, y, b, b, 
b, b, b, b, b, b, b, b]
            sense.set_pixels(image_pixels)
            randomNumber = randint(0,3)
            sense.set_rotation(randomNumber*90)
            sleep(1)
            
def arrowGame():
#acceleration = sense.get_accelerometer_raw()
#x = acceleration['x'] 
#y = acceleration['y']
#z = acceleration['z']
#print(x,y,z)
#set rotation 0, 0.8<y<1.1
#set rotation 90, -1.1<x<-0.8
#set rotation 180, -1.1<y<-0.8
#set rotation 270, 0.8<x<1.1
    
    a = (0, 255, 0)
    b = (0, 0, 0)
    answer=1
    score=0
    randomNumber=0
    randomNumberRaw=0

    while answer==1:
        while randomNumber==randomNumberRaw:
            randomNumberRaw=randint(0,3)
        randomNumber=randomNumberRaw
        sense.set_rotation(randomNumber*90)
        image_pixels =[b, b, b, b, b, b, b, b,
b, b, b, a, b, b, b, b,
b, b, a, a, a, b, b, b,
b, a, b, a, b, a, b, b,
b, b, b, a, b, b, b, b,
b, b, b, a, b, b, b, b,
b, b, b, a, b, b, b, b, 
b, b, b, b, b, b, b, b]
        sense.set_pixels(image_pixels)
        sleep(1)
        acceleration = sense.get_accelerometer_raw()
        x = acceleration['x'] 
        y = acceleration['y']
        z = acceleration['z']
        if randomNumber==0 and 0.8<y<1.1:
            print("success")
        elif randomNumber==1 and -1.1<x<-0.8:
            print("success")
        elif randomNumber==2 and -1.1<y<-0.8:
            print("success")
        elif randomNumber==3 and 0.8<x<1.1:
            print("success")
        else:
            print("failure")
            print(x,y,z)
            print("Congratulations!! Your score is:", score)
            answer=0
            a = (255, 0, 0)
            image_pixels =[b, b, b, b, b, b, b, b,
b, b, b, a, b, b, b, b,
b, b, a, a, a, b, b, b,
b, a, b, a, b, a, b, b,
b, b, b, a, b, b, b, b,
b, b, b, a, b, b, b, b,
b, b, b, a, b, b, b, b, 
b, b, b, b, b, b, b, b]
            sense.set_pixels(image_pixels)
        score=score+1


#pixelDisplay()
#rotatingImage()
#rotatingImageRandColour()
#arrowGame()

stopDisplay=input("Clear Display?")
if stopDisplay=="y":
    sense.clear()


