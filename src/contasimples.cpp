#include "contasimples.h"

using std::cout;
using std::endl;


double ContaSimples:: calcularSaldo(){
    Saldo = Saldo+ Deposito;
    return this->Saldo;
};
double ContaSimples:: calcularLimite(){
    Limite = Saldo;
    return this->Limite;
}
