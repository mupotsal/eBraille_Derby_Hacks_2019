from flask import Flask
import serial
import time



time.sleep(1)
app = Flask(__name__)
@app.route('/')
def index():
    arduino = serial.Serial('COM5', 9600,timeout= .3)
    time.sleep(5)  # give the connection a second to settle

    arduino.write("wmnjh yutyu tyuio".encode())

    return 'Server Works!'

if __name__ == "__main__":
    app.run(debug=True)

@app.route("/sample/", methods=['GET', 'POST'])
def sample():


