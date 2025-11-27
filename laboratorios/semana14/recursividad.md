# Introducción a las Funciones Recursivas en C++

## 1. ¿Qué es la Recursividad?

La **recursividad** es una técnica de programación en la que una función **se llama a sí misma** para resolver un problema más grande dividiéndolo en problemas más pequeños del mismo tipo, hasta llegar a un caso que pueda resolverse directamente (**caso base**)

---

## 2. Estructura de una Función Recursiva

Toda función recursiva **siempre** debe tener dos partes fundamentales:

1. **Caso base** → evita que la recursión sea infinita.
2. **Caso recursivo** → donde la función se llama a sí misma.

### Ejemplo 1: Contando hacia atrás

```cpp
#include <iostream>
using namespace std;

void cuentaRegresiva(int n) {
    if (n == 0) {               // Caso base
        cout << "¡Despegue!" << endl;
        return;
    }

    cout << n << endl;          // Trabajo antes de la llamada
    cuentaRegresiva(n - 1);     // Caso recursivo
}

int main() {
    cuentaRegresiva(5);
}
```

**Idea clave:** Cada llamada imprime un número y delega el resto del trabajo a una versión más simple del problema: contar desde un número menor.

---

## 3. Fundamento Matemático

Muchas funciones matemáticas se definen naturalmente de manera recursiva. Por ejemplo, el factorial:

[ n! = n \cdot (n-1)! ]
con el caso base:
[ 0! = 1 ]

### Ejemplo 2: Factorial

```cpp
long long factorial(int n) {
    if (n == 0) return 1;       // Caso base
    return n * factorial(n - 1); // Caso recursivo
}
```

Este ejemplo muestra cómo la recursividad imita a la definición matemática.

---

## 4. Recursividad y Descomposición de Problemas

Un punto crucial para entender la recursividad es aprender a **descomponer el problema** en subproblemas equivalentes.

### Ejemplo 3: Suma de los dígitos de un número

```cpp
int sumaDigitos(int n) {
    if (n < 10) return n;                 // Caso base: un solo dígito
    return (n % 10) + sumaDigitos(n / 10); // Dividir el problema
}
```

El número se divide en:

* Último dígito
* Número restante

---

## 5. Recursividad como Exploración

La recursividad también es útil para explorar estructuras complejas como árboles, laberintos o subdivisiones.

### Ejemplo 4: Contar cuántas veces aparece un número en un arreglo

```cpp
int contar(const int A[], int n, int valor) {
    if (n == 0) return 0;

    int coincide = (A[n-1] == valor) ? 1 : 0;
    return coincide + contar(A, n - 1, valor);
}
```
---

## 6. Recursividad de Tipo Árbol

Algunos problemas generan **dos o más llamadas recursivas**, formando un árbol de decisiones.

### Ejemplo 5: Fibonacci

```cpp
int fibonacci(int n) {
    if (n <= 1) return n;            // Casos base
    return fibonacci(n-1) + fibonacci(n-2); // Árbol recursivo
}
```

Aquí cada llamada genera dos más. No es eficiente para grandes valores.

---

## 7. ¿Cuándo Usar Recursividad?

La recursividad es ideal cuando:

* El problema se define naturalmente de forma recursiva.
* Las soluciones pequeñas se parecen a la solución grande.
* Existen estructuras jerárquicas (árboles, directorios).
* La solución iterativa es más complicada o menos intuitiva.

No es ideal cuando:

* Se requieren miles de llamadas (riesgo de desbordamiento de pila).
* El problema es más eficiente usando ciclos.

---

## 8. Llamadas y Retornos: Visualización

Una clave para entender la recursividad es visualizar la "pila" de llamadas.

### Ejemplo 6: Recursión con impresión antes y después

```cpp
void demo(int n) {
    if (n == 0) {
        cout << "Base" << endl;
        return;
    }
    cout << "Antes: " << n << endl;
    demo(n - 1);
    cout << "Después: " << n << endl;
}
```

Esto muestra claramente la entrada y salida de cada llamada.

---

<!--
## 9. Ejemplo: Dibujar un Árbol Fractal (conceptual)

Aunque no podremos graficar aquí, un árbol fractal es una representación visual perfecta de recursividad:

* Un tronco se divide en dos ramas
* Cada rama se divide en otras dos
* Hasta que la rama sea muy pequeña

El algoritmo:

```
dibujar(rama):
    si la rama es demasiado pequeña → retornar
    dibujar(rama izquierda)
    dibujar(rama derecha)
```

Este ejemplo muestra cómo la recursividad es una herramienta para crear patrones infinitos.

---


Implemente una función recursiva en C++ que determine si una palabra es un palíndromo. No use `string`, sólo arreglos de caracteres.

---
-->

