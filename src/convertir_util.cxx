/*
 * Created on Tue Sep 19 2023
 *
 * Copyright (c) 2023 UsuiSama
 */

#include "convertir_util.hxx"

std::string *ConvertirUtil::matrizCharAString(int argc, char **argv)
{
    std::string *cpyArgv = new std::string[argc];

    for (int i = 0; i < argc; i++)
        cpyArgv[i] = argv[i];
    return cpyArgv;
}