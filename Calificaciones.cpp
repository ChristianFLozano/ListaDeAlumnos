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
    std::cout << "1.Anadir grupo" << std::endl; //Completed
    std::cout << "2.Anadir alumno" << std::endl; //Completed
    std::cout << "3.Eliminar grupo" << std::endl;
    std::cout << "4.Eliminar alumno" << std::endl;
    std::cout << "5.Mostrar grupos" << std::endl; //Completed
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
    int opc = 1, opcAddStudent = 0, contStudents = 0, ageStudent = 0, opcGroup = 0;
    bool isWrong = false;
    std::string nameGroup, nameStudent;
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
            std::cin.clear();
            std::cin.ignore();
            std::getline(std::cin, nameGroup);
            infoGroup.setNameGroup(nameGroup);
            infoGroup.setNumberStudent(0);
            listOperation.insertGroup(infoGroup);
            clear_screen();
            break;
        case 2:
            if (listOperation.isEmpty()) {
                std::cerr << "No existe ningún grupo al cual se pueda agregar el alumno" << std::endl;
                pause();
            }
            else {
                isWrong = true;
                while (isWrong) {
                    listOperation.showGroups();
                    std::cout << "Seleccione el número del grupo donde deseas agregar el alumno: ";
                    std::cin >> opcAddStudent;
                    if (std::cin.fail() and opcAddStudent < 0) {
                        error();
                    }
                    else {
                        std::cout << "Cuántos alumnos deseas añadir a este grupo: ";
                        std::cin >> contStudents;

                        if (std::cin.fail() || contStudents < 0) {
                            error();
                        }
                        else {
                            for (int i = 0; i < contStudents; i++) {
                                std::cin.clear();
                                std::cin.ignore();
                                std::cout << "Ingresa el nombre del estudiante: ";
                                std::getline(std::cin, nameStudent);
                                studentData.setStudentName(nameStudent);
                                std::cout << "Ingresa la edad del estudiante: ";
                                std::cin >> ageStudent;

                                if (std::cin.fail()) {
                                    error();
                                    i--; 
                                }
                                else {
                                    studentData.setAge(ageStudent);
                                    listOperation.addStudent(opcAddStudent, studentData);
                                }
                            }
                            isWrong = false;
                        }
                    }
                }
            }
            clear_screen();
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
                std::cout << "Si desea ver los estudiantes de un grupo ingrese en n° del grupo si no ingrese la N: ";
                std::cin >> opcGroup;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore();
                }
                else
                {
                    if (listOperation.showStudentsGroup(opcGroup) == false)
                    {
                        std::cerr << "No existen estudiantes en este grupo" << std::endl;
                    }
                }
                pause();
            }
            clear_screen();
            break;
        case 6:
            std::cout << "Usted esta saliendo de la aplicacion" << std::endl;
            pause();
            clear_screen();
            break;
        }
    } while (opc != 6);
}
