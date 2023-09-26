/*
 * Created on Mon Sep 25 2023
 *
 * Copyright (c) 2023 UsuiSama
 */

#include "orquestar.hxx"

void Orquestar::realizarOperacion(OperacionesMatematicasBasicas *oMBasicas)
{
    std::cout << "[resultado] -> [<" << oMBasicas->proceso() << ">]\n";
}

int Orquestar::determinarOperacion(EstructuraComando comando)
{
    switch (comando.opcion)
    {
    case EnumeradorComandos::POTENCIA:
    {
        Potencia potencia(comando.parametro1, comando.parametro2);
        realizarOperacion(&potencia);
    }
        return EXIT_SUCCESS;
    default:
        std::cerr << "[error] Es necesario agregar alguna opcion.\n";
        break;
    }
    return EXIT_FAILURE;
}

int Orquestar::iniciar(int argc, char **argv)
{
    EstructuraComando comando;
    ComandoFactory *comandoFactory = new ComandoFactory(argc, argv);
    try
    {
        comando = comandoFactory->procesar();
    }
    catch (const char *e)
    {
        std::cerr << e;
        delete comandoFactory;
        return EXIT_FAILURE;
    }
    delete comandoFactory;
    return determinarOperacion(comando);
}