#ifndef TITULAR_H
#define TITULAR_H

#include <string>
#include <iostream>
#include <vector>
using std::string;
using std::vector;

class Titular{
    protected:
        string Nome;
        int Cpf;
        vector<int> MinhasContas;

    public:    
        void setNome(string nome);
        string getNome();
        void setCpf(int cpf);
        int getCpf();
};




#endif