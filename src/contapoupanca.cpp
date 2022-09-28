#include <iostream>
#include "contapoupanca.h"

using std::cout;
using std::endl;

double ContaPoupanca:: calcularSaldo(){
   Total = Saldo+ Deposito - Debito;
    return this->Total;
};
double ContaPoupanca:: calcularLimite(){
    Limite = Total;
    return this->Limite;
};
void ContaPoupanca:: setTaxaJuros(double taxaJuros){
    if(taxaJuros <= 0){
        cout<< "Taxa de juros negativa nao funciona para poupanca!" <<endl;
    }else{
        this->TaxaJuros = taxaJuros;
    };
};
const double ContaPoupanca:: getTaxaJuros(){
    return this->TaxaJuros;
};
double ContaPoupanca:: calcularRendimentoMensal(){
  return this->SaldoComJuros = (TaxaJuros*Total)/12 + Total;
};
double ContaPoupanca:: calcularRendimentoAnual(){
      return this->SaldoComJuros = (TaxaJuros*Total) + Total;
};