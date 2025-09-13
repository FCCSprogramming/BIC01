// Dado un entero de 3 cifras, descomponer
// unidades, decenas , centenas
// y sumar sus digitos
// Ejemplo 123  ---> 1  + 2  +   3 -> 6



Algoritmo descomposicion
	Definir num, unidades, decenas, centenas, sumaCifras Como Entero;
	Escribir  "ingrese un número de tres cifras: ";
	Leer num,
	
	unidades <- num % 10;
	decenas <-  ((num % 100) - unidades) / 10;
	centenas <- trunc(num /100);
	
	
	sumaCifras <- unidades + decenas + centenas;
	
	Escribir "La suma de cifras es: ", sumaCifras;
	Escribir "El número,"  // completar...
	
FinAlgoritmo

