const express = require("express");
const bodyParser = require("body-parser");
const fs = require("fs");
const cors = require("cors");

const app = express();
const PORT = process.env.PORT || 5000;
// const dataFilePath = '/teachers.json';
app.use(cors());
app.use(bodyParser.json());

app.use(express.json());
const teacherRoutes = require("./routes/teacherRoutes");
app.use("/teachers", teacherRoutes);

app.listen(PORT, () => {
  console.log(`Server is running on port ${PORT}`);
});
