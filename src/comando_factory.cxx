/*
 * Created on Tue Sep 19 2023
 *
 * Copyright (c) 2023 UsuiSama
 */

#include "comando_factory.hxx"

ComandoFactory::ComandoFactory(int argc, char **argv)
{
    this->argc = argc;
    this->argv = ConvertirUtil::matrizCharAString(argc, argv);
}

EstructuraComando ComandoFactory::procesar()
{
    EstructuraComando comando{-1, 0.0};

    for (int i = 1; i < argc; i++)
    {
        if (argv[i].compare("--potencia") == 0)
        {
            comando.opcion = EnumeradorComandos::POTENCIA;
            if (argc > (i + 1))
            {
                try
                {
                    comando.parametro1 = std::stod(argv[i + 1]);
                    if (argc > (i + 2))
                        comando.parametro2 = std::stod(argv[i + 2]);
                    else
                        throw "[error] Para realizar la operacion es necesario dos valores numericos.\n";
                    return comando;
                }
                catch (const std::invalid_argument &e)
                {
                    throw "[error] La opcion \"--potencia\" solo acepta valores numericos.\n";
                }
            } else
                throw "[error] Debes agregar dos valores numericos.\n";
        }
    }
    return comando;
}

ComandoFactory::~ComandoFactory()
{
    delete[] argv;
}