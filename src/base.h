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
    double Deposito, Pix;
    double Saldo=0, Limite=0;
    Titular Dono;
    public:
        Base(int digito, int opcao, double deposito, double pix): Digito(digito), Opcao(opcao), Deposito(deposito), Pix(pix){};
        Base(){};
        void setContaID();
        void setOpcao(int opcao);
        int getOpcao();
        void setDigito(int digito);
        int getDigito();
        void setDeposito(double deposito);
        double getDeposito();
        void setPix(double pix);
        double getPix();
        void setDonoNome(Titular nome);
        Titular getDonoNome();
        void setDonoCpf(Titular cpf);
        Titular getDonoCpf();
        void relatorio();
        virtual double calcularSaldo()=0;
        virtual double calcularLimite()=0;
	
};

#endif

