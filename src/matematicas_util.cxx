/*
 * Created on Tue Sep 19 2023
 *
 * Copyright (c) 2023 UsuiSama
 */
#include "../include/matematicas_util.hxx"

long int c_matematicas_util::potencia(int acumulador, int n1, int n2, int cont)
{
    if (cont < n2)
    {
        cont++;
        acumulador *= n1;
        return potencia(acumulador, n1, n2, cont);
    }
    else
        return acumulador;
}