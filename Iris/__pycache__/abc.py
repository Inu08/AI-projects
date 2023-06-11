import pyttsx3




engine = pyttsx3.init('sapi5')
engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')       #getting details of current voice
#engine.setProperty('voice', voices[0].id)  #changing index, changes voices. o for male
engine.setProperty('voice', voices[5].id)   #changing index, changes voices. 1 for female

def Speak(audio):
    print(" ")
    print(f": {audio}")
    engine.say(audio)
    engine.runAndWait()
    print(" ")
    
Speak("Hello Sir")