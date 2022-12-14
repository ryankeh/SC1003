from sense_hat import SenseHat
sense = SenseHat()
sense.show_message("hello there", text_colour=(255,255,0), back_colour=(0,0,255),scroll_speed = 0.01)
sense.clear()

#exercise 5a
def get_colour(colour):
        keep_looping = True
        no_of_try = 1
        while keep_looping:
            colour_str=input("enter the value of the " + colour + "colour for message (0 to 255):")
            if colour_str.isdigit():
                colour_str=int(colour_str)
                if 0<=colour_str<=255:
                    return(colour_str)
                    break
                elif no_of_try<3:
                    print("invalid value, please input a value between 0 and 255")
                    print("you have",3-no_of_try,"tries left")
                    no_of_try+=1
                else:
                    colour_str=0
                    return(colour_str)
                    break
            elif no_of_try<3:
                print("invalid value, please input a value between 0 and 255")
                print("you have",3-no_of_try,"tries left")
                no_of_try+=1
            else:
                colour_str=0
                return(colour_str)
                break

sense.set_rotation(180)
r_int = get_colour("red")
g_int = get_colour("green")
b_int = get_colour("blue")
msg_color = (r_int, g_int, b_int)
sense.show_message("I got it!", text_colour=msg_color,scroll_speed=0.05)

#exercise 5b
#from filename import get_colour
#to prevent code from running twice in 5b, remove the last paragraph in original code
