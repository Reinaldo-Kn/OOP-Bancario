#ifndef BASE_H
#define BASE_H

#include <string>
#include <iostream>
#include <vector>
#include <string>

class Base {
    protected:
    std::vector<std::string> ContaID;
    int Digito,Opcao;
    double Saldo;
    public:
        void setContaID();
        void setOpcao(int opcao);
        int getOpcao();
        void setDigito(int digito);
        int getDigito();
        void relatorio();
};

#endif

