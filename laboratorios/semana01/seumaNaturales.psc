Proceso suma_naturales
	Definir n, i, acumularSuma Como Entero;
	Escribir "Ingrese un número natural: ";
	Leer n;
	
	acumularSuma <- 0;
	Para i <- 1 Hasta n Hacer
		acumularSuma <- acumularSuma + i;
	FinPara
	
	Escribir "La suma es: ", acumularSuma;
	//Escribir, n*(n+1)/2; // USAR ESTRUCTURAS REPETITVAS
	// n = 4   ----> salida 10
	
	Definir j, suma2 Como Entero;
	j <- 1;
	
	suma2 <- 0;
	Mientras j <= n Hacer
		suma2 <- suma2 + j;
		j <- j + 1;
	FinMientras
	
	Escribir "Suma con la estructura Mientras: ", suma2;
	
	Definir suma3, k Como Entero;
	
	k <- 1;
	suma3 <- 0;
	
	Repetir
		suma3 <- suma3 + k;
		k <- k + 1;
	Hasta Que k > n;	
	
	Escribir "Suma con la estructura Repetir: ", suma3;

	
FinProceso
