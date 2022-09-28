#ifndef BASE_H
#define BASE_H

#include <string>
#include <iostream>
#include <vector>
#include "titular.h"



class Base {
    protected:
    std::vector<std::string> ContaID;
    int Digito,Opcao;
    double Deposito,Debito;
    double Saldo=0, Limite=0, Total =0;
    Titular Dono;
    public:
        Base(){};
        void Pix(Base* recebe, double valor);
        void setContaID();
        void setOpcao(int opcao);
        int getOpcao();
        void setDigito(int digito);
        int getDigito();
        void setDeposito(double deposito);
        double getDeposito();
         void setDebito(double debito);
        double getDebito();
        void setDonoNome(Titular nome);
        Titular getDonoNome();
        void setDonoCpf(Titular cpf);
        Titular getDonoCpf();
        void relatorio();
        virtual double calcularSaldo()=0;
        virtual double calcularLimite()=0;
	
};

#endif

