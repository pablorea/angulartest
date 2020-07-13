/*
    Curso: K1045
    Grupo: No se...
    Integrantes: Pablo Rea, ...
    Descripción: ...
*/

#include <iostream>
#include <fstream>
#include <windows>
#include <iomanip>
using namespace std;

main()
{
    setlocale(LC_CTYPE, "spanish"); SetConsoleOutputCP(1252);

    char cad[100];
    ifstream archivo("Paises.txt");
    short clineas = 0;

    archivo.getline(cad,100);

    while (archivo.good()) {
        cout << cad << endl;
        ++clineas;
        archivo.getline(cad,100);
    }
    cout << "Cant.Lineas: " << clineas;



    system("pause>D");
    return 0;
}
