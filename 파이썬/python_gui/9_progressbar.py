import tkinter.ttk as ttk
from tkinter import *

root = Tk()
root.title("Nado GUI")
root.geometry("640x480") #가로, 세로

progressbar = ttk.Progressbar(root, maximum=100, mode="determinate")
progressbar.start(10) #10ms마다 움직임
progressbar.pack()

def btncmd():
    progressbar.stop() #작동중지

btn = Button(root, text="중지", command=btncmd)
btn.pack()

def btncmd2():
    progressbar.start(10) #작동시작

btn2 = Button(root, text="시작", command=btncmd2)
btn2.pack()

root.mainloop()