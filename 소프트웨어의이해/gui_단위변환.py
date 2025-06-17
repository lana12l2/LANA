def km():
    k=float(en1.get())
    m=k//1.6
    lb4=Label(window,text=str(m))
    lb4.grid(row=3,column=1)
        

def mk():
    m=float(en1.get())
    k=1.6*m
    lb5=Label(window,text=str(k))
    lb5.grid(row=3,column=1)

def fc():
    f=float(en2.get())
    c=(f-32)*5/9
    lb6=Label(window,text=str(c))
    lb6.grid(row=4,column=1)

def cf():
    c=float(en2.get())
    f=c*9/5+32
    lb7=Label(window,text=str(f))
    lb7.grid(row=4,column=1)


from tkinter import * 
window=Tk()
lb1=Label(window,text="dist")
lb2=Label(window,text="temp")
lb3=Label(window,text="결과")

en1=Entry(window)
en2=Entry(window)
lb1.grid(row=0,column=0)
lb2.grid(row=1,column=0)
lb3.grid(row=3,column=0)
en1.grid(row=0,column=1)
en2.grid(row=1,column=1)
b1=Button(window,text="km->mile",command=km)
b2=Button(window,text="mile->km",command=mk)
b3=Button(window,text="C->F",command=cf)
b4=Button(window,text="F->C",command=fc)
b1.grid(row=5,column=0)
b2.grid(row=5,column=1)
b3.grid(row=6,column=0)
b4.grid(row=6,column=1)
window.mainloop()

