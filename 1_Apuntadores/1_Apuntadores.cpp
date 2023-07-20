// 1_Apuntadores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main(int argc, char** argv)
{
    //si el programa tiene argumentos
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++) 
        {
            std::cout << argv[i] << "\n";
            //toda cadena termina con un caracter /0
            int j = 0; 
            int value = 0;
            std::cout << " ";
            do
            {
                value = (int)argv[i][j];
                std::cout << argv[i][j] << " = " << value << " 0x" << std::hex << value << "\n ";
                j++;
            } while (argv[i][j] != 0);

            std::cout << "\n";
        }
    }
    else 
    {
        std::cout << "No se dieron argumentos. Cerrando" << "\n";
    }
    return 0;
}
