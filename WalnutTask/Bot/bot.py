# bot.py
from conversation_flow import AppointmentBot
from database import book_appointment, check_availability, register_doctor, create_table

class AppointmentBotController:
    def __init__(self):
        self.bot = AppointmentBot()

    def handle_user_input(self, user_input, user_type):
        response = ""
        if user_type == "patient":
            response = self.handle_patient_input(user_input)
        elif user_type == "doctor":
            response = self.handle_doctor_input(user_input)
        elif user_type == "admin":  # New: Admin user type
            response = self.handle_admin_input(user_input)
        return response

    def handle_patient_input(self, user_input):
        if user_input == "1":
            patient_name = input("Please provide your name: ")
            doctor_name = input("Please provide the doctor's name: ")
            date_time = input("Please provide the preferred date and time (YYYY-MM-DD HH:MM): ")
            if check_availability(doctor_name, date_time):
                return book_appointment(patient_name, doctor_name, date_time)
            else:
                return f"Sorry, {doctor_name} is not available at {date_time}. Please choose another date and time."
        elif user_input == "2":
            return "Checking existing appointments..."  # Implement logic to check existing appointments
        else:
            return "Invalid input. Please choose a valid option."

    def handle_doctor_input(self, user_input):
        if user_input == "1":
            return "Viewing upcoming appointments..."  # Implement logic to view upcoming appointments
        elif user_input == "2":
            return "Marking appointments as completed..."  # Implement logic to mark appointments as completed
        elif user_input == "3":
            return "Register as a doctor"
        else:
            return "Invalid input. Please choose a valid option."

    def handle_admin_input(self, user_input):
        if user_input == "1":
            return self.register_doctor()
        else:
            return "Invalid input. Please choose a valid option."

    def register_doctor(self):
        doctor_name = input("Please provide the doctor's name: ")
        specialty = input("Please provide the doctor's specialty: ")
        return register_doctor(doctor_name, specialty)

# Testing the bot
if __name__ == "__main__":
    bot_controller = AppointmentBotController()
    create_table()
    user_type = input("Are you a patient, doctor, or admin? ")  # New: Admin user type
    print(bot_controller.bot.welcome_message())
    print(bot_controller.bot.patient_options() if user_type == "patient" else bot_controller.bot.doctor_options() if user_type == "doctor" else bot_controller.bot.admin_options())  # New: Admin options
    user_input = input("Your choice: ")
    print(bot_controller.handle_user_input(user_input, user_type))
