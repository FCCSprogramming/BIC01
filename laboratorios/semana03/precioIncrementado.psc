// 4. Escribir un programa que, al recibir como dato el precio de un producto importado,
//	incremente 11 % el mismo si es inferior a 1500 soles y en 8 % si fuera mayor o igual
//		a dicho precio; además, debe escribir el nuevo precio del producto. Escribir el nuevo
//		precio del producto.
Algoritmo incrementoPrecio
	// Ingreso de datos
	Definir precio, precioIncrementado Como Real;
	Escribir "Ingrese el precio del producto: ";
	Leer precio;
	
	// Procesar datos
	Si precio < 1500 Entonces
		precioIncrementado <- precio + 0.11*precio;  // 1.11*precio;
	SiNo
		precioIncrementado <- precio + 0.8*precio; 
	FinSi
	
	Escribir "El nuevo precio del producto es: ", precioIncrementado;
	
FinAlgoritmo
