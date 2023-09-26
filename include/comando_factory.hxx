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

#ifndef __COMANDO_FACTORY_HXX__
#define __COMANDO_FACTORY_HXX__

class ComandoFactory
{
private:
    int argc;
    std::string *argv;

public:
    ComandoFactory(int argc, char **argv);
    EstructuraComando procesar();
    ~ComandoFactory();
};

#endif // !__COMANDO_FACTORY_HXX__