#include <iostream>
#include "base.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Base teste;
    
    // cout<< teste.getDigito() << endl;
    teste.setOpcao(1);
    teste.setContaID();
    
     teste.setOpcao(2);
    teste.setContaID();
    
     teste.setOpcao(3);
    teste.setContaID();
    
    teste.relatorio();
    return 0;
}
