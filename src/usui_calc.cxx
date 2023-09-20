/*
 * Created on Tue Sep 19 2023
 *
 * Copyright (c) 2023 UsuiSama
 */
#include "../include/stdafx.hxx"

int main(int argc, char **argv)
{
    c_leer_argumentos *lcomando = new c_leer_argumentos(argc, argv);
    c_operaciones operaciones(lcomando->get_estructura());
    delete lcomando;
    return operaciones.iniciar();
}