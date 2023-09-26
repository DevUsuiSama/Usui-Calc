/*
 * Created on Mon Sep 25 2023
 *
 * Copyright (c) 2023 UsuiSama
 */

#include "potencia.hxx"

double Potencia::procesoRecursivo(double v1, double v2)
{
    if (v2 <= 0)
        return 1;
    return v1 * procesoRecursivo(v1, v2 - 1);
}

Potencia::Potencia(double v1, double v2)
{
    this->v1 = v1;
    this->v2 = v2;
}

double Potencia::proceso()
{
    return procesoRecursivo(v1, v2);
}