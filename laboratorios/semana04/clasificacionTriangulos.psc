// Solicite al usuario las longitudes de los lados de un triángulo
// Implenete un algoritmo que permita clasificar los triángulos como
// EQUILÁTERO
// ESOSCELES
// ESCALENO
// previamente debe validar que las longitudes definan un triángulo
// Además diga si el triángulo es Rectángulo, obtusangulo o acutangulo

// TAREA: VAlidar las  dimensiones : deben ser positivas

Proceso clasificacionTriangulos
	Definir a, b, c Como Real;
	Escribir "Ingrese las longitudes del triángulo: ";
	Leer a, b, c;
	
	Si (a < b + c) Y (b < a + c) Y (c < a + b) Entonces
		Si (a = b) Y (b = c) Entonces
			Escribir "El triángulo es equilátero";
		SiNo
			Si (a = b) O (a = c) O (b = c) Entonces
				Escribir "El triángulo es esosceles";
			SiNo
				Escribir "Es triángulo es escaleno";
			FinSi
		FinSi
		
		// Clasificando por ángulos
		Definir hip, cat1, cat2 Como Real;
		Si (a>= b) Y(a >= c) Entonces
			hip <- a;
			cat1 <- b;
			cat2 <- c;
		SiNo
			Si (b >= a) Y ( b>= c) Entonces
				hip <- b;
				cat1 <- a;
				cat2 <- c;
			SiNo
				hip <- c;
				cat1 <- a;
				cat2 <- b;
			FinSi
		FinSi
		
		Si (hip^2 = cat^2 + cat2^2) Entonces
			Escribir "El triángulo es rectángulo";
		SIno
			Si (hip^2 > cat^2 + cat2^2) Entonces
				Escribir "El triángulo es obtusángulo";
			SiNo
				Escribir "El triángulo es acutángulo";
			FinSi
		FinSi
		
		
	SiNo
		Escribir "Las longitudes no definen un triángulo";
	FinSi
	
	
	
	
	
	
	

	
FinProceso
