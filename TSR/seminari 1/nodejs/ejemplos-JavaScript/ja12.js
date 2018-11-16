//Funciones con propiedades y variables internas. Creacion de objetos mediante constructores.


function f(x1,x2){
	var y = x1;
	this.z = x2;
	this.fun = function(){return f.op(f.a,y,this.z);}
	this.getY = function(){return y;}
}

f.a = 100;

f.op = function(u,v,w){return u+v+w;}

var obj = new f(10,20); // En obj y puede contemplarse como una propiedad privada.

console.log(obj);
console.log(obj.z);
console.log(obj.fun());

f.op = function(u,v,w){return u-v/w}
console.log(obj.fun());

console.log(obj.getY());