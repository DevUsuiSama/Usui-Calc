/*
 * Created on Tue Sep 19 2023
 *
 * Copyright (c) 2023 UsuiSama
 */
#ifndef __MATEMATICAS_UTIL_HXX__
#define __MATEMATICAS_UTIL_HXX__

class c_matematicas_util
{
public:
    static long int potencia(int acumulador, int n1, int n2, int cont);

#define m_potencia(n1, n2) potencia(n1, n1, n2, 1)
};

#endif // !__MATEMATICAS_UTIL_HXX__