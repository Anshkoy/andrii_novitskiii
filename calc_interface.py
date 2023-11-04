from tkinter import *
from tkinter import messagebox




root = Tk()
def calculator():
    first_input = int(firstInput.get())
    second_input = secondinput.get()
    third_input = int(thirdInput.get())
    if second_input == "+":
        answer = first_input + third_input
    if second_input == "-":
        answer = first_input - third_input
    if second_input == "*":
        answer = first_input * third_input
    if second_input == "/":
        answer = first_input / third_input
        if third_input == 0:
            answer = "error, you can't divine on zero"
    info = answer

    messagebox.showinfo(title='calculated', message = info)
    messagebox.showerror('Puthon error', 'error, maybe you want to divise on zero')

root['bg'] = '#86A789'
root.title('calculator')
root.wm_attributes('-alpha', 1)
root.geometry('600x550')

root.resizable(width=False, height=False)

canvas = Canvas(root, height=600, width=550)
canvas.pack()

#img = PhotoImage(file = 'images/2250a676-6be1-b961-fad0-598d17166d80.jpg')
#Label(
#    root,
#    image=img
#).pack()

frame = Frame(root, bg='#B2C8BA')
frame.place(relwidth=0.7, relheight=0.7,
            relx=0.15, rely=0.15)
title = Label(frame, text='count', bg='#D2E3C8', font=40)
title.pack()

btn = Button(frame, text='run', bg='#C2D9FF', font=30, command=calculator)
btn.pack()

firstInput = Entry(frame, bg='#EBF3E8' )
firstInput.pack()

secondinput = Entry(frame, bg='#EBF3E8')
secondinput.pack()

thirdInput = Entry(frame, bg='#EBF3E8')
thirdInput.pack()
root.mainloop()