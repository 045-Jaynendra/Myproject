const express = require("express");
const errorHandler = require("./middleware/errorHandler");
const connectDb = require("./config/dbConnection");
const dotenv = require("dotenv").config();

const contactRoutes = require("./routes/contactRoutes");
const userRoutes = require("./routes/userRoutes");

connectDb();
const app = express();

const PORT = process.env.PORT || 5000;

app.use(express.json());

app.use("/api/contacts", contactRoutes);
app.use("/api/users", userRoutes);

app.use(errorHandler);

app.listen(PORT, () => {
  console.log(`listening on ${PORT}`);
});
