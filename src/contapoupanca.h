#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "base.h"

class ContaPoupanca: public Base{
    private:
        double TaxaJuros = 0.08;
        double SaldoComJuros;
    public:
        double calcularSaldo();
        double calcularLimite();
        void setTaxaJuros(double taxaJuros);
        const double getTaxaJuros();
        double calcularRendimentoMensal(); 
        double calcularRendimentoAnual();         
};


#endif