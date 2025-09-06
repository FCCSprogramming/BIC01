Proceso intercambio
	Definir a, b, temporal Como Entero;
	Escribir "Ingrese el valor de a: ";
	Leer a;
	
	Escribir "Ingrese el valor de b: ";
	Leer b;
	
	temporal <- a;
	a <- b;
	b <- temporal;
	
	Escribir "El valor de a es: ", a;
	Escribir "El valor de b es: ", b;
	
FinProceso
