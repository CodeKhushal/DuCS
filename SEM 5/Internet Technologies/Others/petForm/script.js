// const finished  = require('stream');

document.getElementById('petForm').addEventListener('submit', (e) => {
    e.preventDefault();

    const type = document.getElementById('type').value;
    const name = document.getElementById('name').value;
    const age = parseInt(document.getElementById('age').value);
    const weight = parseInt(document.getElementById('weight').value);
    const like = document.getElementById('like').value;

    const pet = {
        name,
        age,
        weight,
        type,
        like
    };
    
    console.log(pet);
    console.log(JSON.stringify(pet, null, 2));
    
    // Saving data to pets.json
    // const fs = require('fs');
    // const jsonData = JSON.stringify(pet, null, 2);
    // fs.writeFile('pets.json', jsonData, finished);
})
