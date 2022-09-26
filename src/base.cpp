#include "base.h"
#include <iostream>
#include  <time.h> //gerar numero aleatorio
#include <cstdlib> //gerar numero aleatorio
#include <vector>
#include <string>

using std::cout;
using std::endl;

void Base::setOpcao(int opcao){
    this->Opcao = opcao;
}
int Base::getOpcao(){
    return this->Opcao;
}
void Base::setDigito(int digito){
    this->Digito = digito;
};
int Base::getDigito(){
    switch (Opcao){
    case 1:
        return Digito = 11;
        break;
    case 2:
        return Digito = 12;
        break;
    case 3:
        return Digito = 13;
        break;    
    default:
        break;
    }
};
void Base::setContaID(){
    Base::getDigito();
    std::srand( time(NULL) );
    std::string digitoString = std::to_string(Digito);
    std::string aleatorioString = std::to_string(rand() % 10000);
    std::string contaID = digitoString.append(aleatorioString);
    
    this->ContaID.push_back(contaID);
};
void Base::relatorio(){
    for(int i =0; i < ContaID.size(); i++){
        std::cout << ContaID[i] << std::endl;
    }

};
void Base::setDeposito(double deposito){
    if(deposito > 0){
        this->Deposito = Deposito+ deposito;
    }else{
        cout << "Valor invalido, deposito precisa ser maior que 0 reais, voce digitou: " << deposito << endl;
    }
    
};
double Base::getDeposito(){
    return this->Deposito;
};
void Base::setPix(double pix){
    if(pix > 0){
        this->Pix = pix;
    }else{
        cout << "Valor invalido, pix precisa ser maior que 0 reais, voce digitou: " << pix << endl;
    }
};
double Base::getPix(){
    return this->Pix;
};
void Base::setDonoNome(Titular nome){
    this->Dono = nome;
};
Titular Base::getDonoNome(){
    return this->Dono;
};
void Base::setDonoCpf(Titular cpf){
    this->Dono = cpf;
};
Titular Base::getDonoCpf(){
    return this->Dono;
}
 