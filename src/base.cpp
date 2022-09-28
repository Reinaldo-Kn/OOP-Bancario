#include "base.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <random>

using std::cout;
using std::endl;
using std::cin;

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
    std::random_device rd;
    std::mt19937 mt(rd()); 
    std::uniform_int_distribution<> dist(1000, 9999); 
    std::string digitoString = std::to_string(Digito);
    std::string aleatorioString = std::to_string(dist(mt));
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
void Base::setDebito(double debito){
    if(debito > 0){
        this->Debito = Debito+debito;
    }else{
        cout << "Valor invalido, debito precisa ser maior que 0 reais, voce digitou: " << debito << endl;
    }
    
};
double Base::getDebito(){
    return this->Debito;
};
void Base::Pix(Base* recebe, double valor){
    if(valor > Limite){
        std::cout << " Voce nao pode enviar "<< valor <<" !! Seu limite de saldo eh de: "<< Limite << std::endl; 
    }
    else{
        Debito = Debito + valor;
        recebe->setDeposito(valor);
        std::cout << " O Pix de " << valor << " foi enviado! " << std::endl;
    }
};
// void Base::setPix(double pix){
//     if(pix > 0){
//         this->Pix = pix;
//     }else{
//         cout << "Valor invalido, pix precisa ser maior que 0 reais, voce digitou: " << pix << endl;
//     }
// };
// double Base::getPix(){
//     string conta;
//     cout<< "Qual conta vai fazer a traferencia: " <<endl;
//     cin >> conta;
//     if(std::find(ContaID.begin(), ContaID.end(), conta) != ContaID.end()) {
//         cout << "Tenhooo" <<endl;
// } else {
//     cout << "nn" <<endl;
// }
// };
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
 