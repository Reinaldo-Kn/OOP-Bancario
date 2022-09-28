#include "contasimples.h"

using std::cout;
using std::endl;


double ContaSimples:: calcularSaldo(){
    Total = Saldo+ Deposito - Debito;
    return this->Total;
};
double ContaSimples:: calcularLimite(){
    Limite = Total;
    return this->Limite;
}
