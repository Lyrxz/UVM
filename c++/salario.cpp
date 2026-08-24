#include <iostream>

using namespace std;

int main() {
    float salario;
    float descuento = 0;
    
    cout << "Ingresa tu salario: ";
    cin >> salario;

    if (salario >= 8000 && salario <= 10000) {
        descuento = salario * 0.03; 
    } 
    else if (salario > 10000 && salario <= 18000) {
        descuento = salario * 0.08;  
    } 
    else if (salario > 18000 && salario <= 20000) {
        descuento = salario * 0.10;  
     } 
    else if (salario > 20000) {
        descuento = salario * 0.15;  
    }
   

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Salario original: $" << salario << endl;
    cout << "Descuento aplicado: $" << descuento << endl;
    cout << "Salario final a recibir: $" << (salario - descuento) << endl;

    return 0;
}