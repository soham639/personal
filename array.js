let arr=[];
even=[];
odd=[];
console.log(typeof(arr));
let button=document.getElementById("newbtn")

button.addEventListener("click",()=>{

m=prompt("enter the size" )

for(i=1;i<=m;i++){
    n=prompt("enter the element");
    
    arr.push(n);
    if(n%2==0)
    {
        even.push(n);
    }
    else{
        odd.push(n);
    }
        

}

position=arr.indexOf("2");


console.log(arr+"\n");
console.log(position);
console.log(even,"even nos");
console.log(odd,"odd nos");
arr.pop();
console.log(arr)})