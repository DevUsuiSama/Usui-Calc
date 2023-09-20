/*
 * Created on Tue Sep 19 2023
 *
 * Copyright (c) 2023 UsuiSama
 */

#ifndef _GLIBCXX_IOSTREAM
#include <iostream>
#endif // !_GLIBCXX_IOSTREAM
#ifndef _GLIBCXX_STRING
#include <string>
#endif // !_GLIBCXX_STRING
#ifndef __CONVERTIR_UTIL_HXX__
#include "convertir_util.hxx"
#endif // !__CONVERTIR_UTIL_HXX__
#ifndef __ESTRUCTURA_COMANDO_HXX__
#include "estructura_comando.hxx"
#endif // !__ESTRUCTURA_COMANDO_HXX__
#ifndef __ENUMERADOR_COMANDOS_HXX__
#include "enumerador_comandos.hxx"
#endif // !__ENUMERADOR_COMANDOS_HXX__

#ifndef __LEER_ARGUMENTOS_HXX__
#define __LEER_ARGUMENTOS_HXX__

class c_leer_argumentos
{
private:
    int argc;
    std::string *argv;

public:
    c_leer_argumentos(int argc, char **argv);
    s_comando get_estructura();
    ~c_leer_argumentos();
};

#endif // !__LEER_ARGUMENTOS_HXX__