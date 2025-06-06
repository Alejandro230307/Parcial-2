#include <iostream>
using namespace std;
int main (void){
    int cons;
    cout <<"Ingrese su tarifa de luz electrica en kWh porfavor: \n";
    cin >> cons;
    if (cons < 100)
    {
        cout <<"Su tarifa de " << cons <<"Se encuentra dentro del rango de tarifa baja \n";
    }
    else if (cons >= 100 && cons < 200)
    {
        cout <<"Su tarifa de " << cons <<"Se encuentra dentro del rango de tarifa media \n";
    }
    else 
    {
        cout <<"Su tarifa de " << cons <<"Se encuentra dentro del rango de tarifa alta \n";
    }

    return 0;
}