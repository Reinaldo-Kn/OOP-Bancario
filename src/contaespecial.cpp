#include <iostream>
#include "contaespecial.h"

using std::cout;
using std::endl;

void ContaEspecial:: setPorcentoLimite(double porcentoLimite){
    if(porcentoLimite > 0){
        this->PorcentoLimite = porcentoLimite;
    }else{
        cout << "Porcentagem de limite precisa ser um numero maior que zero, voce digitou: " << porcentoLimite << endl;
    }
};
double ContaEspecial:: calcularSaldo(){
    Saldo = Saldo + Deposito;
    return this->Saldo;
};
double ContaEspecial:: calcularLimite(){
    Limite = Saldo + (Saldo* PorcentoLimite);
    return this->Limite;
};