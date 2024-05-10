# conversation_flow.py
class AppointmentBot:
    def welcome_message(self):
        return "Welcome to the Appointment Booking System!"

    def patient_options(self):
        return "Patient Menu:\n1. Book an appointment\n2. Check existing appointments"

    def doctor_options(self):
        return "Doctor Menu:\n1. View upcoming appointments\n2. Mark appointments as completed\n3. Register as a doctor"

    def admin_options(self):  # New: Admin options
        return "Admin Menu:\n1. Register a doctor"

    def get_menu(self, user_type):
        if user_type == "patient":
            return self.patient_options()
        elif user_type == "doctor":
            return self.doctor_options()
        elif user_type == "admin":  # New: Admin menu
            return self.admin_options()
        else:
            return "Invalid user type. Please choose patient, doctor, or admin."
