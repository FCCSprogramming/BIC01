// Escribir un programa que pida los puntos centrales x1, y1 , x2, y2 y los radios r1, r2 de
// dos circunferencias y las clasifique en uno de los siguientes estados: exteriores, tangentes
//	exteriores, secantes, tangentes interiores, interiores o concéntricas.

Algoritmo clasificacionCircunferencias
	Definir x1, y1, x2,y2, r1, r2, distanciaCentros Como Real;
	Escribir "Ingrese el centro y el radio de la circunferencia 1: ";
	Leer x1, y1, r1; 
	Escribir "Ingrese el centro y el radio de la circunferencia 2 ";
	Leer x2, y2, r2;
	
	distanciaCentros <- raiz((x2 - x1)^2 + (y2 - y1)^2);
	
	// utilizar  estructuras condicionales
	Si distanciaCentros == 0  Entonces
		Escribir "Son concéntricas";
	SiNo
		Si distanciaCentros > r1 + r2 Entonces
			Escribir "Son exteriores";
		FinSi
		
		Si distanciaCentros == r1 + r2 Entonces  
			Escribir "Son tangentes exteriores";
		FinSi
		
		Si distanciaCentros == abs(r2 - r1) Entonces
			Escribir "Son tangentes interiores";
		FinSi
		
		Si distanciaCentros < abs(r2 - r1) Entonces
			Escribir "Son  interiores";
		FinSi
		
		Si  abs(r2 - r1) < distanciaCentros Y distanciaCentros < r1 + r2 Entonces
			Escribir "Son secantes";
		FinSi
		
	FinSi
	
	
	
FinAlgoritmo
	