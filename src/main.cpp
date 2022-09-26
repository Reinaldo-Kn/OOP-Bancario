#include <iostream>
#include "base.h"
#include "contasimples.h" 
#include "contaespecial.h"
#include "contapoupanca.h"

using namespace std;

int main(int argc, char const *argv[])
{

    Titular pessoa1;
    Titular pessoa2;
    Titular pessoa3;
    pessoa1.setNome("ronaldo");
    pessoa1.setCpf(1231114);
    
    pessoa2.setNome("laura");
    pessoa2.setCpf(98765);

    pessoa3.setNome("jones");
    pessoa3.setCpf(666);
    ContaSimples conta1;
    conta1.setDonoNome(pessoa1);
    conta1.setDonoCpf(pessoa1);
    ContaEspecial conta2;
    conta2.setDonoNome(pessoa2);
    conta2.setDonoCpf(pessoa2);

    ContaPoupanca conta3;
    conta3.setDonoNome(pessoa3);
    conta3.setDonoCpf(pessoa3);

    conta1.setDeposito(2000);
    conta1.setDeposito(300);
    conta1.setOpcao(1);
    conta1.setContaID();
    
    conta2.setDeposito(6000);
    conta2.setDeposito(100);
    conta2.setOpcao(2);
    conta2.setContaID();
    conta2.setPorcentoLimite(0.5);

    conta3.setDeposito(1000);
    conta3.setOpcao(3);
    conta3.setContaID();

   cout << "Nome: " << conta1.getDonoNome().getNome() << endl;
   cout << "Cpf: " << conta1.getDonoCpf().getCpf() << endl;
   conta1.relatorio();
   cout<< "Saldo: " << conta1.calcularSaldo() <<endl;
   cout <<"Limite: " <<conta1.calcularLimite() <<endl;
   cout<<"-------------------------------------------------------------"<<endl; 

   cout << "Nome: " << conta2.getDonoNome().getNome() << endl;
   cout << "Cpf: " << conta2.getDonoCpf().getCpf() << endl;
   conta2.relatorio();
   cout<< "Saldo: " << conta2.calcularSaldo() <<endl;
   cout <<"Limite: " <<conta2.calcularLimite() <<endl;
   cout<<"-------------------------------------------------------------"<<endl; 

   cout << "Nome: " << conta3.getDonoNome().getNome() << endl;
   cout << "Cpf: " << conta3.getDonoCpf().getCpf() << endl;
   conta3.relatorio();
   cout<< "Saldo: " << conta3.calcularSaldo() <<endl;
   cout <<"Limite: " <<conta3.calcularLimite() <<endl;
   cout<<"Rendimento Mensal: "<< conta3.calcularRendimentoMensal() <<endl;
   cout<<"Rendimento Anual: "<< conta3.calcularRendimentoAnual() <<endl;
    return 0;
}
