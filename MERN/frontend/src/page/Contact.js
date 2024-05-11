import React, { useRef } from "react";
import emailjs from "@emailjs/browser";
import { toast } from "react-hot-toast";
const ContactUs = () => {
  const form = useRef();

  const sendEmail = (e) => {
    e.preventDefault();

    emailjs
      .sendForm("service_de9e7ac", "template_sq8he6g", form.current, {
        publicKey: "vg0YvQIml_XsiQGQX",
      })
      .then(
        () => {
          toast("Sucess!");
          console.log("SUCCESS!");
        },
        (error) => {
          toast("Failed", error.text);
          console.log("FAILED...", error.text);
        }
      );
    e.target.reset();
  };

  return (
    <section>
      <div className="max-w-md mx-auto p-6 bg-white rounded-md shadow-md">
  <h2 className="text-2xl font-semibold text-center mb-6">Contact Us</h2>
  <form ref={form} onSubmit={sendEmail} className="space-y-4">
    <div>
      <label htmlFor="user_name" className="block mb-1">Name</label>
      <input type="text" id="user_name" name="user_name" className="w-full px-4 py-2 border rounded-md focus:outline-none focus:border-blue-500" />
    </div>
    <div>
      <label htmlFor="user_email" className="block mb-1">Email</label>
      <input type="email" id="user_email" name="user_email" className="w-full px-4 py-2 border rounded-md focus:outline-none focus:border-blue-500" />
    </div>
    <div>
      <label htmlFor="message" className="block mb-1">Message</label>
      <textarea id="message" name="message" className="w-full px-4 py-2 border rounded-md focus:outline-none focus:border-blue-500"></textarea>
    </div>
    <button type="submit" className="w-full bg-blue-500 text-white py-2 px-4 rounded-md transition duration-300 ease-in-out hover:bg-blue-600">Send</button>
  </form>
</div>

    </section>
  );
};
export default ContactUs;
