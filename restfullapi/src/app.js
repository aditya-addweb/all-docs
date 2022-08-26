const express = require("express");
require("./db/conn");
const Student = require("./models/student");
const app = express();
const port = process.env.PORT || 7800;

app.use(express.json());
// create a new user
// app.get("/student", (req, res) => {
// //    res.send("hello aditya");
// })


//  app.post("/student" ,(req,res) => {
//     console.log(req.body);
//     const user = new Student(req.body)
//     res.send("hello from aditya")
//  })
app.post("/student", async (res, req) => {
   try {
      const user = new Student(req.body);
      const createuser = await user.save();
   } catch (e) {
      res.status(400).send(e)
   }
})
//read the data registertion 
app.get("/student", async (res, req) => {
   try {
      const studentsData = await student.find()
      res.send(studentsData)
   } catch (e) {
      res.send(e);
   }
})

app.listen(port, () => {
   console.log(`connection is setup at  ${port}`);
})