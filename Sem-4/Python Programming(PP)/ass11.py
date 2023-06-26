import tkinter as tk
from tkinter import *
from tkinter import ttk
from datetime import date
from tkinter import messagebox


today = date.today()


def exit():
    window.destroy()


def get_age():
    d = int(e1.get())
    m = int(e2.get())
    y = int(e3.get())
    age = today.year - y - ((today.month, today.day) < (m, d))
    t1.config(state="normal")
    t1.delete(1.0, tk.END)
    t1.insert(tk.END, age)
    t1.config(state="disabled")


window = tk.Tk()
window.geometry("400x300")
window.configure(bg="cyan")
window.resizable(width=False, height=False)
window.title("Age Calculator!")


l1 = Label(window, text="Age Calculator!", font=("Arial", 20), fg="black")
l2 = Label(window, text="Enter your birth date in DD-MM-YYYY format",
           font=("Arial", 10), fg="black")

l_d = Label(window, text="Date:", font=('Arial', 12, "bold"), fg="Red")
l_m = Label(window, text="Month:", font=('Arial', 12, "bold"), fg="Red")
l_y = Label(window, text="Year:", font=('Arial', 12, "bold"), fg="Red")
e1 = Entry(window, width=5, bd=3)
e2 = Entry(window, width=5, bd=3)
e3 = Entry(window, width=5, bd=3)
b1 = Button(window, text="Calculate Age", font=(
    "Arial", 10), fg="black", command=get_age)
l3 = Label(window, text="Your age is:", font=("Arial", 10), fg="black")
t1 = Text(window, height=1, width=5, state="disabled")
b2 = Button(window, text="Exit", font=("Arial", 10), fg="black", command=exit)

l1.place(x=140, y=5)
l2.place(x=100, y=40)
l_d.place(x=60, y=70)
l_m.place(x=170, y=70)
l_y.place(x=250, y=70)
e1.place(x=100, y=70)
e2.place(x=200, y=70)
e3.place(x=300, y=70)
b1.place(x=100, y=100)
l3.place(x=50, y=130)
t1.place(x=150, y=130)
b2.place(x=150, y=160)

window.mainloop()
