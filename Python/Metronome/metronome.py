# This is a metronome application build by Birendra Rokaha
# This is a pet project and is just a test case
# Please feel free to change the code a you want
# plays the desired sound in bpm of users choice


from tkinter import *

from playsound import playsound

import time



root = Tk()

for i in range(10):
    a = time.time()

myLabel = Label(root, text = a)

# for i in range(10):
    
#     playsound('Sounds/click1.wav')

myLabel.pack()



root.mainloop()


