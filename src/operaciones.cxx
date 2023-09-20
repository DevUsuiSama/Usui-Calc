/*
 * Created on Tue Sep 19 2023
 *
 * Copyright (c) 2023 UsuiSama
 */

#include "../include/operaciones.hxx"

c_operaciones::c_operaciones(s_comando comando)
{
    this->comando = comando;
}

int c_operaciones::iniciar()
{
    switch (comando.opcion)
    {
    case POTENCIA:
        if (comando.parametro1 == 0 && comando.parametro2 == 0)
        {
            std::cout << "[ 🗡 ] Para la proxima agregue 2 parametros al comando, crack.\n";
            return EXIT_FAILURE;
        }
        else if (comando.parametro2 == 0)
        {
            std::cout << "[ 🗡 ] Te falto un parametro mastodonte.\n";
            return EXIT_FAILURE;
        }
        {
            const long int resultado = c_matematicas_util::m_potencia(comando.parametro1, comando.parametro2);
            std::cout << "Resultado: [" << resultado << "]\n";
        }
        return EXIT_SUCCESS;
    default:
        std::cout << "[ 🗡 ] Para la proxima agregue alguna argumento valido, crack.\n";
        return EXIT_FAILURE;
    }
}