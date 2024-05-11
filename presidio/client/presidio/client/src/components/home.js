import React, { useState, useEffect } from "react";
import axios from "axios";
import Card from "./Card"; // Assuming Card component is located in a file named Card.js

const Home = () => {
  const [teachers, setTeachers] = useState([]);
  const [newTeacher, setNewTeacher] = useState({
    fullName: "",
    age: "",
    dateOfBirth: "",
    numberOfClasses: "",
  });
  const [searchName, setSearchName] = useState(""); // State to store the search query
  const [filterCriteria, setFilterCriteria] = useState("none");
  const [showAverage, setShowAverage] = useState(false); // State to toggle the average display

  // Function to fetch all teachers
  const fetchTeachers = async () => {
    try {
      const response = await axios.get("http://127.0.0.1:5000/teachers");
      setTeachers(response.data);
    } catch (error) {
      console.error("Error fetching teachers:", error);
    }
  };

  // Function to create a new teacher
  const createTeacher = async () => {
    try {
      await axios.post("http://127.0.0.1:5000/teachers", newTeacher);
      setNewTeacher({
        fullName: "",
        age: "",
        dateOfBirth: "",
        numberOfClasses: "",
      });
      fetchTeachers(); // Fetch updated list of teachers after creation
    } catch (error) {
      console.error("Error creating teacher:", error);
    }
  };

  // Function to delete a teacher
  const deleteTeacher = async (id) => {
    try {
      await axios.delete(`http://127.0.0.1:5000/teachers/${id}`);
      fetchTeachers(); // Fetch updated list of teachers after deletion
    } catch (error) {
      console.error("Error deleting teacher:", error);
    }
  };

  const updateTeacher = async (id) => {
    // @ts-ignore
    window.location = `/update/${id}`;
  };

  useEffect(() => {
    fetchTeachers();
  }, []);

  // Filter teachers by name based on the search query
  const filteredTeachers = searchName
    ? teachers.filter((teacher) =>
        teacher.fullName.toLowerCase().includes(searchName.toLowerCase())
      )
    : teachers;

  // Sort teachers based on the selected filter criteria
  const sortedTeachers = [...filteredTeachers].sort((a, b) => {
    if (filterCriteria === "age") {
      return b.age - a.age;
    } else if (filterCriteria === "numberOfClasses") {
      return a.numberOfClasses - b.numberOfClasses;
    }
    return 0;
  });

  // Calculate the average number of classes for all teachers
  const averageNumberOfClasses =
    teachers.reduce((acc, curr) => acc + parseInt(curr.numberOfClasses), 0) /
    teachers.length;

  return (
    <div>
      <h1 style={{ margin: "10px" }}>Teacher Management Application</h1>
      <div>
        {/* Form to create a new teacher */}
        <input
          type="text"
          value={newTeacher.fullName}
          onChange={(e) =>
            setNewTeacher({ ...newTeacher, fullName: e.target.value })
          }
          placeholder="Enter teacher name"
        />
        <input
          type="text"
          value={newTeacher.age}
          onChange={(e) =>
            setNewTeacher({ ...newTeacher, age: e.target.value })
          }
          placeholder="Enter teacher age"
        />
        <input
          type="date"
          value={newTeacher.dateOfBirth}
          onChange={(e) =>
            setNewTeacher({ ...newTeacher, dateOfBirth: e.target.value })
          }
          placeholder="Enter teacher date of birth"
        />
        <input
          type="text"
          value={newTeacher.numberOfClasses}
          onChange={(e) =>
            setNewTeacher({ ...newTeacher, numberOfClasses: e.target.value })
          }
          placeholder="Enter number of classes"
        />
        <button onClick={createTeacher}>Add Teacher</button>
      </div>

      {/* Search input to filter teachers by name */}
      <div>
        <input
          type="text"
          value={searchName}
          onChange={(e) => setSearchName(e.target.value)}
          placeholder="Search by name"
        />
      </div>

      <div>
        Filter By:
        <select
          value={filterCriteria}
          onChange={(e) => setFilterCriteria(e.target.value)}
        >
          <option value="none">None</option>
          <option value="age">Age</option>
          <option value="numberOfClasses">Number of Classes</option>
        </select>
      </div>
      <div
        style={{ display: "flex", flexDirection: "column", flexWrap: "wrap" }}
      >
        <div style={{ width: "100%", textAlign: "center", margin: "10px" }}>
          <table style={{ border: "2px solid black", width: "98%" }}>
            <thead style={{ fontSize: "25px", fontWeight: "bold" }}>
              <tr
                style={{
                  outline: "2px solid",
                  height: "50px",
                }}
              >
                <td>Name</td>
                <td>Age</td>
                <td>Date of Birth</td>
                <td>Number of Classes</td>
                <td>Operation</td>
              </tr>
            </thead>
            <tbody>
              {sortedTeachers.map((teacher) => (
                <Card
                  key={teacher.id}
                  teacher={teacher}
                  updateTeacher={updateTeacher}
                  deleteTeacher={deleteTeacher}
                />
              ))}
            </tbody>
          </table>
        </div>
      </div>

      {/* Button to toggle the display of the average number of classes */}
      <div>
        <button onClick={() => setShowAverage(!showAverage)}>
          {showAverage ? "Hide Average Number of Classes" : "Show Average Number of Classes"}
        </button>
        {showAverage && <div>Average Number of Classes: {averageNumberOfClasses}</div>}
      </div>
    </div>
  );
};

export default Home;
