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
    
b = (0, 0, 0)
w = (255,255,255)
r = (255,0,0)
g = (0,255,0)
board = [[r,r,r,b,b,b,b,r], 
         [r,b,b,b,b,b,b,r],
         [b,b,b,b,g,r,b,r],
         [b,r,r,b,r,r,b,r],
         [b,b,b,b,b,b,b,b],
         [b,r,b,r,r,b,b,b],
         [b,b,b,r,b,b,b,r], 
         [r,r,b,b,b,r,r,r] ]

def check_wall(x,y,new_x,new_y): 
    if board[new_y][new_x] != r: 
        return new_x, new_y 
    elif board[new_y][x] != r: 
        return x, new_y 
    elif board[y][new_x] != r:
        return new_x, y 
    else:
        return x,y

def move_marble2(pitch,roll,x,y): 
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
    new_x,new_y = check_wall(x,y,new_x,new_y) 
    x = new_x
    y = new_y
    return x,y

def rollMarbleBorder():
    y=3
    x=3
    game_over = 0
    while game_over == 0:
        pitch = sense.get_orientation()['pitch'] 
        roll = sense.get_orientation()['roll'] 
        board[y][x] = b
        x,y = move_marble2(pitch,roll,x,y)
        if board[y][x] == g:
            game_over = 1
        else:
            board[y][x] = w
        sense.set_pixels(sum(board,[]))
        sleep(0.05)
    sense.show_message("congrats", text_colour=(255,0,0), back_colour=(0,0,0),scroll_speed = 0.05)    
            
rollMarbleBorder()
