let x = 5;
let y = 6;
let sum = x + y;
let content = document.getElementById("heading");
let button_1 = document.getElementById("btn-1");
let para = document.getElementById("para")
function changeName(){
    alert("Nanni Unde");
    content.innerHTML = "Abhijith Ser CET yute aishwaryam";
    para.innerHTML = sum;
    button_1.hidden = true;

}
console.log(content);