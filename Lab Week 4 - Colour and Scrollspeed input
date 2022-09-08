from sense_hat import SenseHat
sense = SenseHat()
sense.show_message("hello there", text_colour=(255,255,0), back_colour=(0,0,255),scroll_speed = 0.01)
sense.clear()
a=0
b=0
c=0
redvalid = 0
greenvalid = 0
bluevalid = 0

while redvalid ==0:
    red = input("red value:")
    if red.isdigit():
        red = int(red)
        if not -1<red<256:
            a = a+1
            print("invalid - value has to be between 0 and 255 (",a , ")")
            if a==3:
                print("You have exceeded the number of trials allowed. Sayonara!")
                quit()
        else:
            redvalid = 1
    else:
        a = a+1
        print("invalid - use number only (",a , ")")
        if a==3:
            print("You have exceeded the number of trials allowed. Sayonara!")
            quit()
            

while greenvalid ==0:
    green = input("green value:")
    if green.isdigit():
        green = int(green)
        if not -1<green<256:
            b = b+1
            print("invalid - value has to be between 0 and 255 (",b , ")")
            if b==3:
                print("You have exceeded the number of trials allowed. Sayonara!")
                quit()
        else:
            greenvalid = 1
    else:
        b = b+1
        print("invalid - use number only (",b , ")")
        if b==3:
            print("You have exceeded the number of trials allowed. Sayonara!")
            quit()


while bluevalid ==0:
    blue = input("blue value:")
    if blue.isdigit():
        blue = int(blue)
        if not -1<blue<256:
            c = c+1
            print("invalid - value has to be between 0 and 255 (",c , ")")
            if c==3:
                print("You have exceeded the number of trials allowed. Sayonara!")
                quit()
        else:
            bluevalid = 1
    else:
        c = c+1
        print("invalid - use number only (",c , ")")
        if c==3:
            print("You have exceeded the number of trials allowed. Sayonara!")
            quit()

colour_msg = (red,green,blue)
print("Message Colour = (",red,",",green,",",blue,")")
colour_bg = (0,0,0)


d=0
speedvalid=0
while speedvalid ==0:
    speed = input("scrollspeed:")
    try:
        speed = float(speed)
        if 0.05>speed or speed>1:
            d = d+1
            print("invalid - value has to be between 0.05 and 1 (",d , ")")
            if d==3:
                print("You have exceeded the number of trials allowed. Sayonara!")
                quit()
        else:
            speedvalid = 1
    except:
        d = d+1
        print("invalid - use number only (",d , ")")
        if d==3:
            print("You have exceeded the number of trials allowed. Sayonara!")
            quit()
            
print("Speed =",speed)

sense.show_message("general kenobi", text_colour=colour_msg, back_colour=colour_bg,scroll_speed = speed)
sense.clear()
print("ryan you are a goddamn genius")
