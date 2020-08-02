import tkinter as tk
from playsound import playsound

class Application(tk.Frame):
    def __init__(self, master=None):
        super().__init__(master)
        self.master = master
        self.pack()
        self.create_widgets()

    def create_widgets(self):
        self.hi_there = tk.Button(self)
        self.hi_there["text"] = "Hello World\n(click me)"
        self.hi_there["command"] = self.say_hi
        self.hi_there.pack(side="top")

        self.snare = tk.Button(self)
        self.snare["text"] = "Play Snare"
        self.snare["command"] = self.play_snare
        self.snare.pack(side="top")

        self.hihat = tk.Button(self)
        self.hihat["text"] = "Play Hihat"
        self.hihat["command"] = self.play_hihat
        self.hihat.pack(side="top")

        self.kick = tk.Button(self)
        self.kick["text"] = "Play Kick"
        self.kick["command"] = self.play_kick
        self.kick.pack(side="top")


        self.quit = tk.Button(self, text="QUIT", fg="red",
                              command=self.master.destroy)
        self.quit.pack(side="bottom")

    def say_hi(self):
        print("hi there, everyone!")

    def play_kick(self):
        playsound('Metronome/Sounds/kicks/Drum Kit Kick.wav')

    def play_snare(self):
        playsound('Metronome/Sounds/Snares/Old Trap Snare.wav')

    def play_hihat(self):
        playsound('Metronome/Sounds/Hats n Cymbals/Closed/IceHat.wav')


root = tk.Tk()
app = Application(master=root)
app.mainloop()
