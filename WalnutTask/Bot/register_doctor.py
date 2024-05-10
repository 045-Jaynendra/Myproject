# database.py
import sqlite3
from sqlite3 import Error

DB_FILE = 'appointments.db'

def create_connection():
    """Create a database connection to a SQLite database."""
    conn = None
    try:
        conn = sqlite3.connect(DB_FILE)
        return conn
    except Error as e:
        print(e)
    return conn

def create_table():
    """Create a table for appointments."""
    conn = create_connection()
    if conn is not None:
        try:
            cursor = conn.cursor()
            cursor.execute("""
                CREATE TABLE IF NOT EXISTS appointments (
                    id INTEGER PRIMARY KEY AUTOINCREMENT,
                    patient_name TEXT NOT NULL,
                    doctor_name TEXT NOT NULL,
                    date_time TEXT NOT NULL
                )
            """)
        except Error as e:
            print(e)
        finally:
            conn.close()
    else:
        print("Error: Unable to connect to the database.")

def book_appointment(patient_name, doctor_name, date_time):
    """Book an appointment and store it in the database."""
    conn = create_connection()
    if conn is not None:
        try:
            cursor = conn.cursor()
            cursor.execute("""
                INSERT INTO appointments (patient_name, doctor_name, date_time)
                VALUES (?, ?, ?)
            """, (patient_name, doctor_name, date_time))
            conn.commit()
            return f"Appointment booked for {patient_name} with {doctor_name} on {date_time}."
        except Error as e:
            print(e)
        finally:
            conn.close()
    else:
        return "Error: Unable to connect to the database."

def check_availability(doctor_name, date_time):
    """Check if the doctor is available at the specified date and time."""
    conn = create_connection()
    if conn is not None:
        try:
            cursor = conn.cursor()
            cursor.execute("""
                SELECT * FROM appointments
                WHERE doctor_name = ? AND date_time = ?
            """, (doctor_name, date_time))
            appointment = cursor.fetchone()
            if appointment:
                return False  # Doctor is not available
            else:
                return True   # Doctor is available
        except Error as e:
            print(e)
        finally:
            conn.close()
    else:
        return False

def register_doctor(doctor_name, specialty):
    """Register a new doctor in the database."""
    conn = create_connection()
    if conn is not None:
        try:
            cursor = conn.cursor()
            cursor.execute("""
                INSERT INTO doctors (doctor_name, specialty)
                VALUES (?, ?)
            """, (doctor_name, specialty))
            conn.commit()
            return f"Doctor {doctor_name} registered with specialty {specialty}."
        except Error as e:
            print(e)
        finally:
            conn.close()
    else:
        return "Error: Unable to connect to the database."
