$(function(){
    $form = $('form');
    $form.on('submit', function(e){
        e.preventDefault();
        var manufacturer = $('#manufacturer').val();
        var model = $('#model').val();
        var manYear = $('#mYear').val();
        manYear = Number(manYear);
        var fuelType = $('#fType').val();
        var color = $('#color').val();
        var seatingCapacity = $('#sCapacity').val();
        var cubicCapacity = $('#cCapacity').val();
        cubicCapacity = Number(cubicCapacity);

        const car = {
            cManufacturer: manufacturer,
            cModel: model,
            cManfYear: manYear,
            cfuelType: fuelType,
            cColor: color,
            cSeatingCapacity: seatingCapacity,
            cCubicCapacity: cubicCapacity
        };


        // Json object
        var jCar = JSON.stringify(car);
        console.log('JSON object is: ', jCar);

        // Javascript object
        var carJS = JSON.parse(jCar);
        console.log('Javascript object is: ', carJS);
    });
})