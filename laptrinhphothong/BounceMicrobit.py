from tkinter import *
import random
import time
import serial
class Ball:
    def __init__(self, canvas, paddle, color):
        self.canvas = canvas
        self.paddle = paddle
        self.id = canvas.create_oval(10, 10, 25, 25, fill=color)
        self.canvas.move(self.id, 245, 100)
        starts = [-3, -2, -1, 1, 2, 3]
        random.shuffle(starts)
        self.x = starts[0]
        self.y = -3
        self.n = 0
        self.canvas_height = self.canvas.winfo_height()
        self.canvas_width = self.canvas.winfo_width()
        self.hit_bottom = False

    def hit_paddle(self, pos):
        paddle_pos = self.canvas.coords(self.paddle.id)
        if pos[2] >= paddle_pos[0] and pos[0] <= paddle_pos[2]:
            if pos[3] >= paddle_pos[1] and pos[3] <= paddle_pos[3]:
                if self.n == 0:
                    canvas.delete("trash")
                canvas.delete("score")
                self.n += 1
                canvas.create_text(485, 50, text=self.n, fill="blue", font=('Time 10 bold'), tags="score")
                return True
        return False

    def draw(self):
        self.canvas.move(self.id, self.x, self.y)
        pos = self.canvas.coords(self.id)
        if pos[1] <= 0:
            self.y = 3
        if pos[3] >= self.canvas_height:
            self.hit_bottom = True
        if self.hit_paddle(pos) == True:
            self.y = -3
        if pos[0] <= 0:
            self.x = 3
        if pos[2] >= self.canvas_width:
            self.x = -3


class Paddle:
    def __init__(self, canvas, color):
        self.canvas = canvas
        self.id = canvas.create_rectangle(0, 0, 130, 10, fill=color)
        self.canvas.move(self.id, 200, 300)
        self.x = 0
        self.canvas_width = self.canvas.winfo_width()
        self.canvas.bind_all('<KeyPress-a>', self.turn_left)
        self.canvas.bind_all('<KeyPress-d>', self.turn_right)
        self.canvas.bind_all('<KeyPress-s>', self.stop)

    def draw(self):
        self.canvas.move(self.id, self.x, 0)
        pos = self.canvas.coords(self.id)
        if pos[0] <= 0:
            self.x = 0
        elif pos[2] >= self.canvas_width:
            self.x = 0

    def turn_left(self, evt):
        self.x = -3

    def turn_right(self, evt):
        self.x = 3

    def stop(self, evt):
        self.x = 0


tk = Tk()
tk.title("GameBalls")
tk.resizable(0, 0)
tk.wm_attributes("-topmost", 1)
canvas = Canvas(tk, width=500, height=400, bd=0, highlightthickness=0)
canvas.pack()
tk.update()
paddle = Paddle(canvas, 'black')
ball = Ball(canvas, paddle, 'red')
canvas.create_text(450, 50, text="SCORE:", fill="blue", font=('Helvetica 10 bold'))
canvas.create_text(485, 50, text="0", fill="blue", font=('Time 10 normal'), tags="trash")
from pynput.keyboard import Key, Controller
ser = serial.Serial()
ser.baudrate = 115200
keyboard = Controller()
# ser.port = 'COM6'
ser.port = '/dev/cu.usbmodem14102'
ser.open()
last = 0
# print("debug log here")
while 1:
    serial_line = int(ser.read())
    if ball.hit_bottom == False:
        ball.draw()
        paddle.draw()
    tk.update_idletasks()
    tk.update()
    if ball.hit_bottom == True:
        canvas.create_text(260, 170, text="GAME OVER", fill="red", font=('Helvetica 25 bold'))
        break
    if serial_line != 0:
        last = 1
        if serial_line == 1:
            keyboard.press('a')
        elif serial_line == 2:
            keyboard.press('d')
    elif last != 0:
        keyboard.release('a')
        keyboard.release('d')
        last = 0