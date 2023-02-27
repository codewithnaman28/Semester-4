# import speech_recognition as sr
# import subprocess
# import os


# r = sr.Recognizer()
# mic = sr.Microphone()
# with mic as source:
#     r.adjust_for_ambient_noise(source)
#     audio = r.listen(source)
#     transcript = r.recognize_google(audio)
#     print(transcript)


# def say(text):
#     subprocess.call(['say', text])


# say(transcript)

import pyttsx3

engine = pyttsx3.init('espeak')

engine.say('Hello World')
engine.runAndWait()
