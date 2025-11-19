// // Ensure the DOM is ready before we try to update anything
// document.addEventListener('DOMContentLoaded', () => {
// 	// Try to find an element to update; create one if it doesn't exist
// 	let element = document.getElementById('app');
// 	if (!element) {
// 		element = document.createElement('div');
// 		element.id = 'app';
// 		document.body.appendChild(element);
// 	}

// 	// Requested line: set bold "Hello" inside the element
// 	element.innerHTML = "<b>Hello</b>";
//     element.innerText = "<b>Hello</b>";
//     element.textContent = "<b>Hello</b>";
//     element.style.color = 'red';
//     element.style.backgroundColor = 'yellow';
//     element.style.fontSize = "20px";

// });

// const arr = ['apple', 'banana', 'cherry'];
// const p = document.createElement('p');
// p.innerText = arr.join(', ');
// document.body.appendChild(p);

//Create an array of product objects with name, price, and quantity, and compute the total cost using a loop


// const products = [
//     { name: 'Laptop', price: 1000, quantity: 2 },
//     { name: 'Phone', price: 500, quantity: 3 },
//     { name: 'Tablet', price: 300, quantity: 4 }
// ]
// let total = 0;

// for (let i = 0; i < products.length; i++) {
//     total += products[i].price * products[i].quantity;
// }
// const p = document.createElement('p');
// p.innerText = "Total cost: " + total;
// document.body.appendChild(p);

//Write a function that converts an array of Celsius temperatures to Fahrenheit using the formula F = (C * 9/5) + 32.

function cof(celsiusArray) {
    const fahrenheitArray = [];
    for (let i = 0; i < celsiusArray.length; i++) {
        const fahrenheit = (celsiusArray[i] * 9/5) + 32;
        fahrenheitArray.push(fahrenheit);
    }

    return fahrenheitArray;
}
const celsiusTemps = [0, 20, 37, 100];
const fahrenheitTemps = cof(celsiusTemps);
console.log(fahrenheitTemps); // Output: [32, 68, 98.6, 212]