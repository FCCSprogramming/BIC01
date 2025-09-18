// Solicite al usuario las longitudes de los lados de un tri�ngulo
// Implenete un algoritmo que permita clasificar los tri�ngulos como
// EQUIL�TERO
// ESOSCELES
// ESCALENO
// previamente debe validar que las longitudes definan un tri�ngulo
// Adem�s diga si el tri�ngulo es Rect�ngulo, obtusangulo o acutangulo

// TAREA: VAlidar las  dimensiones : deben ser positivas

Proceso clasificacionTriangulos
	Definir a, b, c Como Real;
	Escribir "Ingrese las longitudes del tri�ngulo: ";
	Leer a, b, c;
	
	Si (a < b + c) Y (b < a + c) Y (c < a + b) Entonces
		Si (a = b) Y (b = c) Entonces
			Escribir "El tri�ngulo es equil�tero";
		SiNo
			Si (a = b) O (a = c) O (b = c) Entonces
				Escribir "El tri�ngulo es esosceles";
			SiNo
				Escribir "Es tri�ngulo es escaleno";
			FinSi
		FinSi
		
		// Clasificando por �ngulos
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
			Escribir "El tri�ngulo es rect�ngulo";
		SIno
			Si (hip^2 > cat^2 + cat2^2) Entonces
				Escribir "El tri�ngulo es obtus�ngulo";
			SiNo
				Escribir "El tri�ngulo es acut�ngulo";
			FinSi
		FinSi
		
		
	SiNo
		Escribir "Las longitudes no definen un tri�ngulo";
	FinSi
	
	
	
	
	
	
	

	
FinProceso
