#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "base.h"

class ContaEspecial : public Base{
    private:
        double PorcentoLimite = 0.02;
    public:
        double calcularSaldo();
        double calcularLimite();
        void setPorcentoLimite(double porcentoLimite);
};

#endif