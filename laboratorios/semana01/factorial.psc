Proceso factorial
	Definir n, fact, i Como Entero;
	Escribir "Ingrese el numero:";
	Leer n;
	
	fact<- 1;
	Para i <- 1 Hasta n Hacer
		fact<- fact* i;
	FinPara
	
	Escribir "El factorial de ", n, " es: ", fact; 
	
	
FinProceso
