// 3. Realizar un programa que pida al usuario dos pares de números x1, y1, x2, y2, que
// representen dos puntos en el plano. Calcula y muestre la distancia entre ellos.

Algoritmo distanciaPuntos
	// Ingreso de datos
	Definir x1, y1, x2, y2, distancia Como Real;
	Escribir "Ingrese las coordenas del primer punto: ";
	Leer x1, y1;
	
	Escribir "Ingrese las coordenas del segundo punto: ";
	Leer x2, y2;
	
	// Procesamiento
	
	distancia <- raiz((x2 - x1)^2 + (y2 - y1)^2);
	
	// Salida de datos
	
	Escribir "La distancia entre los puntos es: ", distancia;
	
	
	
FinAlgoritmo
	