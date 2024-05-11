import { useState, useEffect } from 'react';
import { useParams } from 'react-router-dom';
import axios from 'axios';
import React from 'react';

const UpdateTeacherPage = () => {
  const { id } = useParams();
  const [teacher, setTeacher] = useState({
    fullName: '',
    age: '',
    dateOfBirth: '',
    numberOfClasses: '',
  });

  useEffect(() => {
    fetchTeacherDetails();
  }, []);

  const fetchTeacherDetails = async () => {
    try {
      const response = await axios.get(`http://127.0.0.1:5000/teachers/${id}`);
      setTeacher(response.data);
    } catch (error) {
      console.error('Error fetching teacher details:', error);
    }
  };

  const handleInputChange = (e) => {
    const { name, value } = e.target;
    setTeacher({ ...teacher, [name]: value });
  };

  const handleSubmit = async (e) => {
    e.preventDefault();
    try {
      await axios.put(`http://127.0.0.1:5000/teachers/${id}`, teacher);
      // Redirect to home page after update
      // @ts-ignore
      window.location = '/';
    } catch (error) {
      console.error('Error updating teacher:', error);
    }
  };

  return (
    <div>
      <h1>Update Teacher</h1>
      <form onSubmit={handleSubmit}>
        <div>
          <label>Name:</label>
          <input
            type="text"
            name="fullName"
            value={teacher.fullName}
            onChange={handleInputChange}
          />
        </div>
        <div>
          <label>Age:</label>
          <input
            type="text"
            name="age"
            value={teacher.age}
            onChange={handleInputChange}
          />
        </div>
        <div>
          <label>Date of Birth:</label>
          <input
            type="date"
            name="dateOfBirth"
            value={teacher.dateOfBirth}
            onChange={handleInputChange}
          />
        </div>
        <div>
          <label>Number of Classes:</label>
          <input
            type="text"
            name="numberOfClasses"
            value={teacher.numberOfClasses}
            onChange={handleInputChange}
          />
        </div>
        <button type="submit">Update</button>
      </form>
    </div>
  );
};

export default UpdateTeacherPage;
