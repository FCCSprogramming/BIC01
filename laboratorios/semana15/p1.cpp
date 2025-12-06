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
