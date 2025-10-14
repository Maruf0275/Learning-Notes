//functions in javascript

function names(n){
    console.log("Hello "+n);
};
names("Maruf");
names("Nibir");

function add(a,b){
    console.log(a+b);
};

let diff = (a,b) => a-b; //arrow function

add(5,10);
add(20,30);
console.log(diff(10,5));
console.log(diff(50,30));

//nested function

function outer(){
    function inner(){
        console.log('Hello from inner function');
    };
    return inner();
};
outer();