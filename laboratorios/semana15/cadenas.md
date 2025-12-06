# Arreglos de Caracteres y `std::string` en C++

# I) Cadenas al estilo C
---

# 1. Código ASCII vs Unicode

## 1.1 ASCII

* ASCII original es un estándar de **7 bits** (128 caracteres).
* Representa letras inglesas, dígitos, signos básicos.

### ASCII extendido (ISO/IEC 8859, Code Page 437)

* En la práctica moderna, cada **carácter ocupa 1 byte = 8 bits**.
* Los primeros **128 valores (0–127)** corresponden al ASCII clásico.
* Los valores **128–255** forman el **ASCII extendido**, cuyo contenido varía según la "code page".
* Incluye caracteres adicionales: letras acentuadas (á, é, í…), símbolos gráficos, caracteres de dibujo de líneas, etc.

### Ejemplo en C++ mostrando valores de 0 a 255

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 0; i < 256; ++i) {
        cout << setw(3) << i << " -> " << (char)i << "
";
    }
}
```

> Nota: la interpretación de los valores 128–255 depende de la configuración regional y tabla de códigos utilizada en el sistema.

**Ejemplo en C++:**

```cpp
#include <iostream>
using namespace std;

int main() {
    char c = 'A';
    cout << "Caracter: " << c << " Cod ASCII: " << (int)c << "\n";
}
```

## 1.2 Unicode

* Supera las limitaciones de ASCII.
* Incluye caracteres acentuados, símbolos científicos, emojis, alfabetos no latinos.
* En C++ moderno se usa con `char16_t`, `char32_t`, y literales `u8`, `u`, `U`.

**Ejemplo:**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Ejemplo UTF-8
    string texto = u8"Caracteres Unicode:\n"
                   u8"Latinos: á é í ó ú ñ ü ¿ ¡\n"
                   u8"Griego: α β γ δ ε\n"
                   u8"Matemáticos: ∑ ∞ √ π ≤ ≥ ≠\n"
                   u8"Monedas: € ¥ £ ₿\n"
                   u8"Flechas: ← ↑ → ↓ ↔\n"
                   u8"Emoji: 🎲🎲😱😀 😎\n"
                   u8"Chino: 你好\n"
                   u8"Japonés: ありがとうございます\n";

    cout << texto << endl;

    return 0;
}
```

---

# 2. Arreglos de Caracteres

Un **arreglo de caracteres** es la forma clásica de manejar cadenas antes del estándar moderno.

```cpp
char nombre[20] = "Andre"; // en memoria "Andre\0"
```

### 2.1 Lectura de múltiples palabras

`cin` se detiene en espacios. Para leer frases usamos:

```cpp
char frase[50];
cout << "Ingrese una frase: ";
cin.getline(frase, 50);
```

---

# 3. Arreglos de Cadenas

Se pueden representar como un arreglo bidimensional:

```cpp
char lista[3][20] = {
    "Peru",
    "Argentina",
    "Mexico"
};
// máximo 19 caracteres por fila
```

---

# 4. Funciones para Manipular Cadenas (`<cstring>`)

| Función       | Descripción                   |
| ------------- | ----------------------------- |
| `strlen(c)`   | Longitud de la cadena         |
| `strcpy(a,b)` | Copia `b` en `a`              |
| `strcat(a,b)` | Concatena `b` al final de `a` |
| `strcmp(a,b)` | Compara cadenas               |

### Ejemplo:

```cpp
#include <iostream>
#include <cstring> // strlen, strcpy, strcat, strcmp

using namespace std;

int main() {

    // --- 1. strlen ---
    char nombre[] = "Andre";
    cout << "1. strlen(nombre) = " << strlen(nombre) << "\n"; 
    // Longitud = 5 (no cuenta el carácter nulo)

    // --- 2. strcpy ---
    char a[50];
    char b[] = "Hola";

    strcpy(a, b);  // copia "Hola" a a[]
    cout << "2. strcpy(a, b) -> a = " << a << "\n";

    // --- 3. strcat ---
    char saludo[50] = "Hola";
    char extra[] = " Mundo";

    strcat(saludo, extra); // concatena
    cout << "3. strcat(saludo, extra) -> " << saludo << "\n";

    // --- 4. strcmp ---
    char s1[] = "Casa";
    char s2[] = "Casa";
    char s3[] = "Perro";

    cout << "4. strcmp(s1, s2) = " << strcmp(s1, s2) << " (son iguales)\n";
    cout << "   strcmp(s1, s3) = " << strcmp(s1, s3) << " (s1 < s3)\n";
    cout << "   strcmp(s3, s1) = " << strcmp(s3, s1) << " (s3 > s1)\n";

    return 0;
}
```

---

# II) Cadenas al estilo C++: manejo de cadenas con `std::string`

# 1. ¿Qué es `std::string`?

Una **clase** que maneja memoria automáticamente y permite trabajar de forma segura y flexible.

```cpp
string s = "Hola";
```

---

# 2. Declaración de Cadenas

### Forma clásica

```cpp
char mensaje[30] = "Hola Mundo";
```

### Forma moderna

```cpp
string mensaje = "Hola Mundo";
```

---

# 3. Múltiples Cadenas y Lectura Correcta

## 3.1 Lectura de múltiples palabras

```cpp
string linea;
getline(cin, linea);
```

## 3.2 Arreglos de `string`

```cpp
string paises[3] = {"Peru", "Colombia", "Brasil"};
```
---

# 4. Funciones de `std::string`

| Método          | Descripción |
| --------------- | ----------- |
| `s.size()`      | Longitud    |
| `s.substr(i,n)` | Subcadena   |
| `s.find(x)`     | Buscar      |
| `s.append(x)`   | Agregar     |
| `s + x`         | Concatenar  |
| `s.compare(t)`  | Comparar    |

### Ejemplo moderno

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {

    // --- 1. size() ---
    string nombre = "Andre";
    cout << "1. nombre.size() = " << nombre.size() << "\n";
    // Longitud = 5

    // --- 2. substr(i, n) ---
    string palabra = "Programacion";
    string sub = palabra.substr(0, 7); // "Programa"
    cout << "2. palabra.substr(0,7) -> " << sub << "\n";

    // --- 3. find(x) ---
    string texto = "Hola Mundo";
    size_t pos = texto.find("Mundo");

    if (pos != string::npos)
        cout << "3. 'Mundo' encontrado en posicion: " << pos << "\n";
    else
        cout << "3. No encontrado\n";

    // --- 4. append(x) ---
    string saludo = "Hola";
    saludo.append(" a todos");
    cout << "4. saludo.append(...) -> " << saludo << "\n";

    // --- 5. Operador + ---
    string a = "C++ ";
    string b = "moderno";
    string c = a + b;
    cout << "5. a + b -> " << c << "\n";

    // --- 6. compare(t) ---
    string s1 = "Casa";
    string s2 = "Casa";
    string s3 = "Perro";

    cout << "6. s1.compare(s2) = " << s1.compare(s2) << " (iguales)\n";
    cout << "   s1.compare(s3) = " << s1.compare(s3) << " (s1 < s3)\n";
    cout << "   s3.compare(s1) = " << s3.compare(s1) << " (s3 > s1)\n";

    return 0;
}
```

---

# Comparación General

| Tema      | Arreglo de caracteres | `std::string`         |
| --------- | --------------------- | --------------------- |
| Memoria   | Fija                  | Dinámica              |
| Seguridad | Riesgo de overflow    | Mucho más seguro      |
| Lectura   | Compleja              | Natural con `getline` |
| Funciones | En `<cstring>`        | Métodos propios       |
| Unicode   | Limitado              | Mucho más flexible    |

---

# Conclusión

El uso moderno con `std::string` es más seguro, flexible y potente que los métodos tradicionales con arreglos de caracteres, aunque conocer ambos es esencial para entender el lenguaje y trabajar con código legado.


## III) Ejemplos ilustrativos

### 3.1 Verificar si una palabra es un palíndromo

``` cpp
string s;
cin >> s;

bool ok = true;
for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
    if (s[i] != s[j]) ok = false;
}

cout << (ok ? "Es palindromo" : "No es palindromo");
```

------------------------------------------------------------------------

### 3.2 Contar la frecuencia de cada carácter

``` cpp
string s;
getline(cin, s);

int freq[256] = {0};

for (unsigned char c : s)
    freq[c]++;

for(int i=0; i<256; i++){
    if(freq[i] > 0)
        cout << "'" << char(i) << "' : " << freq[i] << endl;
}
```

------------------------------------------------------------------------

### 3.3 Convertir a mayúsculas

``` cpp
string s;
getline(cin, s);

for(char &c : s)
    c = toupper(c);

cout << s;
```

------------------------------------------------------------------------

### 3.4 Contar palabras en una frase

``` cpp
string frase;
getline(cin, frase);

int palabras = 0;
bool dentro = false;

for(char c : frase){
    if (!isspace(c) && !dentro){
        dentro = true;
        palabras++;
    }
    if (isspace(c)) dentro = false;
}

cout << "Palabras: " << palabras;
```

------------------------------------------------------------------------

### 3.5 Reemplazar todas las ocurrencias de una palabra

``` cpp
string texto = "la casa es grande y la casa es blanca";
string buscar = "casa";
string reemplazar = "CASA";

size_t pos = 0;
while((pos = texto.find(buscar, pos)) != string::npos){
    texto.replace(pos, buscar.size(), reemplazar);
    pos += reemplazar.size();
}

cout << texto;
```

------------------------------------------------------------------------

## 4. Ejercicios Propuestos

### Ejercicio 1

Leer un nombre completo y mostrar: - número de caracteres, - número de
vocales, - cantidad de palabras.

------------------------------------------------------------------------

### Ejercicio 2

Invertir una cadena sin usar la función `reverse`.

------------------------------------------------------------------------

### Ejercicio 3

Transformar una frase eliminando: - espacios, - mayúsculas, - signos de
puntuación.

Ejemplo:\
Entrada: Hola, ¿cómo estás?\
Salida: holacomoestas

------------------------------------------------------------------------

### Ejercicio 4

Dado un texto, mostrar: - palabra más larga, - palabra más corta, -
total de palabras.

------------------------------------------------------------------------

### Ejercicio 5

Implementar:

``` cpp
bool esCorreoValido(string s);
```

Criterios: - Debe contener exactamente un símbolo '@'. - Debe terminar
en `.com`, `.edu`, `.pe` o `.org`.

------------------------------------------------------------------------

### Ejercicio 6

Contar la cantidad de letras del alfabeto  en una cadena.


