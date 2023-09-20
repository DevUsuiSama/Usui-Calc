/*
 * Created on Tue Sep 19 2023
 *
 * Copyright (c) 2023 UsuiSama
 */

#include "../include/convertir_util.hxx"

std::string *c_convertir_util::matriz_char_a_string(int argc, char **argv)
{
    std::string *cpy_argv = new std::string[argc];

    for (int i = 0; i < argc; i++)
        cpy_argv[i] = argv[i];
    return cpy_argv;
}