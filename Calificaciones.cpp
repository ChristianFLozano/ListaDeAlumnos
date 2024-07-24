// Calificaciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
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
    std::cout << "0. Salir" << std::endl;
    std::cout << "Ingresar opcion:  ";
}

int main()
{
    int opc = 1;
    do
    {
        menu();
        std::cin >> opc;
        switch (opc)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 0:
            std::cout << "Usted esta saliendo de la aplicacion" << std::endl;
            pause();
            clear_screen();
            break;
        default:
            break;
        }
    } while (opc != 0);
}
