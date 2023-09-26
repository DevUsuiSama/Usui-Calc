/*
 * Created on Mon Sep 25 2023
 *
 * Copyright (c) 2023 UsuiSama
 */

#ifndef _GLIBCXX_STRING
#include <string>
#endif // !_GLIBCXX_STRING
#ifndef __OPERACIONES_MATEMATICAS_BASICAS_HXX__
#include "operaciones_matematicas_basicas.hxx"
#endif // !__OPERACIONES_MATEMATICAS_BASICAS_HXX__
#ifndef __CONVERTIR_UTIL_HXX__
#include "convertir_util.hxx"
#endif // !__CONVERTIR_UTIL_HXX__
#ifndef __COMANDO_FACTORY_HXX__
#include "comando_factory.hxx"
#endif // !__COMANDO_FACTORY_HXX__
#ifndef __POTENCIA_HXX__
#include "potencia.hxx"
#endif // !__POTENCIA_HXX__

#ifndef __ORQUESTAR_HXX__
#define __ORQUESTAR_HXX__

class Orquestar
{
private:
    void realizarOperacion(OperacionesMatematicasBasicas *);
    int determinarOperacion(EstructuraComando);

public:
    int iniciar(int, char **);
};

#endif // !__ORQUESTAR_HXX__