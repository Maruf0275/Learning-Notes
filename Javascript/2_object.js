//object in javascript

let course = {
    title:"javascript",
    description:"projects",
    rating:5,
};

console.log(course);
console.log(typeof(course)); //object
console.log(course.title); //access object property
console.log(course["description"]); //another way to access object property

let x = "Love";
let y = x;

x = "Hate";
console.log(x); //hate //value type
console.log(y); //remember primitive data type is immutable
