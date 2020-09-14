import cv2
from playsound import playsound
test=cv2.imread("car.jpeg")
image=cv2.cvtColor(test,cv2.COLOR_BGR2GRAY)
playsound("audio.mp3")
cv2.imshow('result',image)
#playsound("audio.mp3")
cv2.waitKey(0)