// Calificaciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "group.h"
#include "student.h"
#include "list.h"
#include "string"

#ifdef _WIN32
#include<windows.h>
#endif  

void clear_screen(){
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pause() {
    std::cout << "Presione Enter para continuar...";
    std::cin.ignore();
    std::cin.get();
    return;
}

void menu() {
    std::cout << "1.Anadir grupo" << std::endl;
    std::cout << "2.Anadir alumno" << std::endl;
    std::cout << "3.Eliminar grupo" << std::endl;
    std::cout << "4.Eliminar alumno" << std::endl;
    std::cout << "5.Mostrar grupos" << std::endl;
    std::cout << "6. Salir" << std::endl;
    std::cout << "Ingresar opcion:  ";
}

void error() {
    std::cin.clear();
    std::cin.ignore();
    std::cerr << "Cadena de caracteres incorrectos" << std::endl;
    pause();
    clear_screen();
}

int main()
{
    group infoGroup;
    student studentData;
    list listOperation;
    int opc = 1;
    std::string nameGroup;
    do
    {
        menu();
        std::cin >> opc;
        if (std::cin.fail())
        {
            error();
        }
        switch (opc)
        {
        case 1:
            clear_screen();
            std::cout << "Ingresa el nombre del grupo" << std::endl;
            std::cin >> nameGroup;
            infoGroup.setNameGroup(nameGroup);
            infoGroup.setNumberStudent(0);
            listOperation.insertGroup(infoGroup);
            clear_screen();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            if (! listOperation.showGroups())
            {
                std::cerr << "No existen grupos para mostrar" << std::endl;
                pause();
            }
            else
            {
                pause();
            }
            clear_screen();
            break;
        case 6:
            std::cout << "Usted esta saliendo de la aplicacion" << std::endl;
            pause();
            clear_screen();
            break;
        default:
            break;
        }
    } while (opc != 6);
}
