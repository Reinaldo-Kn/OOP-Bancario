#include <iostream>
#include "contapoupanca.h"

using std::cout;
using std::endl;

double ContaPoupanca:: calcularSaldo(){
    Saldo = Saldo+ Deposito;
    return this->Saldo;
};
double ContaPoupanca:: calcularLimite(){
    Limite = Saldo;
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
  return this->SaldoComJuros = (TaxaJuros*Saldo)/12 + Saldo;
};
double ContaPoupanca:: calcularRendimentoAnual(){
      return this->SaldoComJuros = (TaxaJuros*Saldo) + Saldo;
};