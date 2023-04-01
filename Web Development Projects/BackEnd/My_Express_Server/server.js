//jshint esversion:6

const express = require("express");
const app = express();

app.get("/", function(request,  responce){
  responce.send("<h1>Hello</h1>");
})

app.get("/contact", function(request,  responce){
  responce.send("Contact me at shreyam2014@gmail.com");
})

app.get("/about", function(request,  responce){
  responce.send("Myself Shreyam Hemanta, 2nd Year, KIIt University");
})

app.get("/hobbies", function(request,  responce){
  responce.send("<ul><li>Guitar</li><li>Singing</li><li>Coding</li>");
})

app.listen(3000, function(){
  console.log("Server started on port 3000");
});
