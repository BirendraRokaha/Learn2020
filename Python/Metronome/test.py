import time
from playsound import playsound


# Function that plays certain sounds
def play_sound(sound):
    playsound(sound)

# Sounds used for the drum machine
sound_kick = 'Sounds/kicks/Drum Kit Kick.wav'
sound_snare = 'Sounds/Snares/OldSnare.wav'
sound_hihat = 'Sounds/Hats n Cymbals/Closed/IceHat.wav'



# Basic loop pattern
sound_repeat = 'y'
while sound_repeat != 'n':
    play_sound(sound_kick)
    time.sleep(0)
    play_sound(sound_hihat)
    time.sleep(0.01)
    play_sound(sound_snare)
    time.sleep(0)
    play_sound(sound_hihat)
    time.sleep(0.01)
    play_sound(sound_kick)
    time.sleep(0)
    play_sound(sound_hihat)
    time.sleep(0.01)
    play_sound(sound_snare)
    time.sleep(0)
    play_sound(sound_hihat)
    time.sleep(0.01)
    sound_repeat = input("Repeat: y or n")
    sound_repeat.lower()