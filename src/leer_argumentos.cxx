/*
 * Created on Tue Sep 19 2023
 *
 * Copyright (c) 2023 UsuiSama
 */

#include "../include/leer_argumentos.hxx"

c_leer_argumentos::c_leer_argumentos(int argc, char **argv)
{
    this->argc = argc;
    this->argv = c_convertir_util::matriz_char_a_string(argc, argv);
}

s_comando c_leer_argumentos::get_estructura()
{
    s_comando comando = {0};

    for (int i = 1; i < argc; i++)
    {
        if (comando.opcion == e_comandos::POTENCIA)
        {
            try
            {
                comando.parametro1 = std::stoi(argv[i]);
                if (argc > (i + 1))
                    comando.parametro2 = std::stoi(argv[i + 1]);
                return comando;
            }
            catch (const std::invalid_argument &e)
            {
                std::cerr << "La opcion \"potencia\" solo acepta valores enteros\n";
            }
        }
        if (argv[i].compare("--potencia") == 0)
            comando.opcion = e_comandos::POTENCIA;
    }
    return comando;
}

c_leer_argumentos::~c_leer_argumentos()
{
    delete[] argv;
}