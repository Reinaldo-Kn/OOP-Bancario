#include "base.h"
#include <iostream>
#include  <time.h> //gerar numero aleatorio
#include <cstdlib> //gerar numero aleatorio
#include <vector>
#include <locale>
#include <string>


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
    
    std::cout << Digito << std::endl;
    std::cout << contaID << std::endl;
    this->ContaID.push_back(contaID);
};
void Base::relatorio(){
    for(int i =0; i < ContaID.size(); i++){
        std::cout << ContaID[i] << std::endl;
    }

}