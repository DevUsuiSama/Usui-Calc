/*
 * Created on Mon Sep 25 2023
 *
 * Copyright (c) 2023 UsuiSama
 */

#ifndef _GLIBCXX_IOSTREAM
#include <iostream>
#endif // !_GLIBCXX_IOSTREAM
#ifndef __OPERACIONES_MATEMATICAS_BASICAS_HXX__
#include "operaciones_matematicas_basicas.hxx"
#endif // !__OPERACIONES_MATEMATICAS_BASICAS_HXX__

#ifndef __POTENCIA_HXX__
#define __POTENCIA_HXX__

class Potencia : public OperacionesMatematicasBasicas
{
private:
    double v1, v2;
    double procesoRecursivo(double, double);

public:
    Potencia(double, double);
    double proceso();
};

#endif // !__POTENCIA_HXX__