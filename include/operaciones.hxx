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
#ifndef __ESTRUCTURA_COMANDO_HXX__
#include "estructura_comando.hxx"
#endif // !__ESTRUCTURA_COMANDO_HXX__
#ifndef __ENUMERADOR_COMANDOS_HXX__
#include "enumerador_comandos.hxx"
#endif // !__ENUMERADOR_COMANDOS_HXX__
#ifndef __MATEMATICAS_UTIL_HXX__
#include "matematicas_util.hxx"
#endif // !__MATEMATICAS_UTIL_HXX__

#ifndef __OPERACIONES_HXX__
#define __OPERACIONES_HXX__

class c_operaciones
{
private:
    s_comando comando;

public:
    c_operaciones(s_comando comando);
    int iniciar();
};

#endif // !__OPERACIONES_HXX__