from app import app
from flask import render_template, request
from app.database import book_appointment, check_availability

@app.route('/')
@app.route('/index')
def index():
    return render_template('index.html')

@app.route('/book_appointment', methods=['POST'])
def book():
    if request.method == 'POST':
        patient_name = request.form['patient_name']
        doctor_name = request.form['doctor_name']
        date_time = request.form['date_time']
        
        if check_availability(doctor_name, date_time):
            message = book_appointment(patient_name, doctor_name, date_time)
        else:
            message = f"Sorry, {doctor_name} is not available at {date_time}. Please choose another date and time."
        
        return message
