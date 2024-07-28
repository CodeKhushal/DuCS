// import {greetPerson} from './greet.js';

function call(){
    let name = document.getElementById("name").value;
    // let displayName = greetPerson(name);
    console.log(name);
    document.getElementById("write").innerHTML = `Hello ${name}`;
}