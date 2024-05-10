# admin.py
from database import register_doctor

def register_doctor_manually():
    print("Doctor Registration")
    doctor_name = input("Enter doctor's name: ")
    specialty = input("Enter doctor's specialty: ")
    print(register_doctor(doctor_name, specialty))

if __name__ == "__main__":
    register_doctor_manually()
