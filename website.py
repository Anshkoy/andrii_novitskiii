from tkinter import *
from PIL import Image, ImageTk
import time
from tkinter import messagebox



root = Tk()
root.title("Basic Website Using Tkinter")
root.geometry('600x600')

root.resizable(width=False, height=False)


img2_path = r"C:\Users\iAsus\Desktop\andrii\screamer.jpg"
#def callback(e):
#    img2 = ImageTk.PhotoImage(Image.open(img2_path))
 #   img_frame.configure(image=img2)
  #  img_frame.image = img2

def entering():
    correct_login = "shakalak"
    correct_password = "12345678"
    login = login_frame.get()
    password = password_frame.get()
    if login == correct_login and correct_password == password:
        output_frame.config(state='normal')
        output_frame.insert(END, "CORRECT!!!")
        output_frame.config(background="#1BEC31")
        output_frame.config(state="disabled")

        messagebox.showinfo(title='result', message='correcct!!!')
        
    else:
        output_frame.config(state='normal')
        output_frame.insert(END, "TRY AGAIN!!!!")
        output_frame.config(background="#EC1B1B")
        output_frame.config(state="disabled")
        #time.sleep(3)
        #callback()

        messagebox.showinfo(title='result', message='Try again!!!')


first_bg = Frame(root, width= 600 , height = 200, bg='#87CEEB')
first_bg.pack()

second_bg = Frame(root, width=600, height=200, bg='#7B68EE')
second_bg.pack()

third_bg = Frame(root, width=600, height=200, bg='#1E90FF')
third_bg.pack()

img_frame = Frame(root, width=100, height=150, background='#4D62DB')
img_frame.pack()
img_frame.place(anchor='e', relx=0.3 , rely=0.3)

text_frame = Frame(root, width=160, height=230, background='#4B0082')
text_frame.pack()
text_frame.place(anchor='e', relx=0.35, rely=0.7)

img_path = r"C:\Users\iAsus\Desktop\andrii\photo.jpg"
img = ImageTk.PhotoImage(Image.open(img_path))


login_frame = Entry(root, bg='#4B0082', width=35, foreground='white')
login_frame.pack()
login_frame.place(anchor='e', relx=0.8, rely =0.2)

password_frame = Entry(root, bg='#4B0082', width=35, foreground='white')
password_frame.pack()
password_frame.place(anchor='e', relx=0.8, rely =0.25)

start_button = Button(root, width=5, height=2, bg='#4B0082',text="START", command=entering, foreground='white')
start_button.pack()
start_button.place(anchor='center', relx= 0.6 , rely=0.35)
start_button.bind('<Return>', entering)


output_frame = Text(root,  bg='#4B0082', height=10, width=15)
output_frame.pack()
output_frame.place(anchor='center', relx= 0.6, rely=0.6)
output_frame.config(state='disabled')

label = Label(img_frame, image= img)
label.pack()

text = Label(text_frame, text="i ma andrii this \nis my site shakala\n takaka tiki kiki \nrikik maki ferege \njukuk umu8jij j8ujiki \nj8j8j8 j8j8 j8j8\n j8j8j8 8j8 j8 ", font=('Helvetica' , 18) , bg='#4B0082' , foreground='#FFFAF0')
text.pack()

heading_label = Label(first_bg, text="My website",font=("Helvetica", 24), bg='#87CEEB')
heading_label.place(anchor='e', relx=0.73 , rely=0.1)

content_label = Label(first_bg, text="take a look!", bg='#87CEEB')
content_label.place(anchor='e', relx=0.65, rely=0.2)


#root.bind("<Return>", callback)
root.mainloop()

