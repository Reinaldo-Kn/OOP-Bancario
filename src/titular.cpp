#include "titular.h"
#include <iostream>
#include <string>

using std::string;

void Titular::setNome(string nome){
    this->Nome = nome;
};
string Titular::getNome(){
    return this->Nome;
};
void Titular::setCpf(int cpf){
    this->Cpf = cpf;
};
int Titular::getCpf(){
    return this->Cpf;
}