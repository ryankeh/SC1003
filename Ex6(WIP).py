from time import sleep
from sense_hat import SenseHat
sense = SenseHat()
sense.show_message("hello there", text_colour=(255,255,0), back_colour=(0,0,255),scroll_speed = 0.01)
sense.clear()

def orientation():
    while True:
        pitch = sense.get_orientation()['pitch']
        roll = sense.get_orientation()['roll']
        print("pitch {0} roll {1}".format(round(pitch,0), round(roll,0)))
        sleep(0.5)
    return pitch, roll

# with Tag 19 facing you,
# tilting forward pitch increases from 0
# tilting backward pitch decreases from 360
# turning left roll increases from 0
# turning right roll decreases from 360

def showMarble():
    b = (0, 0, 0)
    w = (255,255,255)
    board = [[b,b,b,b,b,b,b,b], 
             [b,b,b,b,b,b,b,b],
             [b,b,b,b,b,b,b,b],
             [b,b,b,b,b,b,b,b],
             [b,b,b,b,b,b,b,b],
             [b,b,b,b,b,b,b,b],
             [b,b,b,b,b,b,b,b], 
             [b,b,b,b,b,b,b,b] ]
    y=3				# y coordinate of marble
    x=3				# x coordinate of marble
    board[y][x]=w		# a white marble
    
    board_1D=sum(board,[])        # convert to 1-dimension list
    print(board_1D)               # for code debugging
    sense.set_pixels(board_1D)    # display it
    return x, y
    
# This function checks the pitch value and the x coordinate  
# to determine whether to move the marble in the x-direction.
# Similarly, it checks the roll value and y coordinate to
# determine whether to move the marble in the y-direction.
def move_marble(pitch,roll,x,y): 
    new_x = x    #assume no change to start with
    new_y = y    #assume no change to start with
    if 1 < pitch < 179 and x != 0:
        new_x -= 1    # move left
    elif 359 > pitch > 179 and x != 7:
        new_x += 1    # move right
    if 1 < roll < 179 and y != 7:
        new_y += 1    # move up
    elif 359 > roll > 179 and y != 0:
        new_y -= 1    # move down

    return new_x, new_y

def showMarble2(new_x,new_y):
    b = (0, 0, 0)
    w = (255,255,255)
    board = [[b,b,b,b,b,b,b,b], 
             [b,b,b,b,b,b,b,b],
             [b,b,b,b,b,b,b,b],
             [b,b,b,b,b,b,b,b],
             [b,b,b,b,b,b,b,b],
             [b,b,b,b,b,b,b,b],
             [b,b,b,b,b,b,b,b], 
             [b,b,b,b,b,b,b,b] ]
    y=new_y				# y coordinate of marble
    x=new_x				# x coordinate of marble
    board[y][x]=w		# a white marble
    
    board_1D=sum(board,[])        # convert to 1-dimension list
    print(board_1D)               # for code debugging
    sense.set_pixels(board_1D)    # display it
    return x,y

# orientation()
# ex6a

# showMarble()
# ex6b()

# live = 1
# showMarble()
# while live>0:
#     orientation()
#     move_marble(pitch,roll,x,y)
#     showMarble2(new_x,new_y)
    
while True:
    pitch = sense.get_orientation()['pitch'] 
    roll = sense.get_orientation()['roll'] 
    x,y = move_marble(pitch,roll,x,y)
    board[y][x] = w
    sense.set_pixels(sum(board,[]))
    sleep(0.05)
