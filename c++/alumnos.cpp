#include <iostream>
#include <string>
using namespace std;

struct reg_estudiantes {
    string nombre, carrera, semestre;
    float promedio;
} estudiante[5];

int main() {
    int opcion;
    int registrados = 0;
    
    do {
        cout << "\n--- Menu Principal ---" << endl;
        cout << "1. Registrar un alumno" << endl;
        cout << "2. Buscar Alumno por Nombre" << endl;
        cout << "3. Buscar Alumnos por Carrera" << endl;
        cout << "4. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            if (registrados < 5) {
                cout << "\n--- Registro de Estudiante " << registrados + 1 << " ---" << endl;
                
                cout << "Ingresa el nombre del estudiante: ";
                getline(cin >> ws, estudiante[registrados].nombre);

                cout << "Ingresa la carrera del estudiante: ";
                getline(cin >> ws, estudiante[registrados].carrera);

                cout << "Ingresa el Semestre del estudiante: ";
                getline(cin >> ws, estudiante[registrados].semestre);

                cout << "Ingresa el promedio del estudiante: ";
                cin >> estudiante[registrados].promedio;
                
                registrados++;
                cout << "\nAlumno registrado con exito. Total registrados: " << registrados << "/5" << endl;
            } else {
                cout << "\nYa has registrado el limite maximo de 5 alumnos." << endl;
            }
        }
        else if (opcion == 2) {
            if (registrados == 0) {
                cout << "\nPrimero debes registrar al menos un alumno (Opcion 1)." << endl;
            } else {
                string nombreBusqueda;
                cout << "\nIngresa el nombre del alumno a buscar: ";
                getline(cin >> ws, nombreBusqueda);
                
                bool encontrado = false;
                for(int j = 0; j < registrados; j++) {
                    if(estudiante[j].nombre == nombreBusqueda) {
                        cout << "\nDatos del estudiante:" << endl;
                        cout << "Nombre:   " << estudiante[j].nombre << endl;
                        cout << "Carrera:  " << estudiante[j].carrera << endl;
                        cout << "Semestre: " << estudiante[j].semestre << endl;
                        cout << "Promedio: " << estudiante[j].promedio << endl;
                        encontrado = true;
                        break;
                    }
                }
                
                if(!encontrado) {
                    cout << "Alumno no registrado en sistema" << endl;
                }
            }
        } 
        else if (opcion == 3) {
            if (registrados == 0) {
                cout << "\nPrimero debes registrar al menos un alumno (Opcion 1)." << endl;
            } else {
                string carreraBusqueda;
                cout << "\nIngresa la carrera a buscar: ";
                getline(cin >> ws, carreraBusqueda);
                
                bool encontrado = false;
                cout << "\nListado de alumnos inscritos en " << carreraBusqueda << ":" << endl;
                for(int j = 0; j < registrados; j++) {
                    if(estudiante[j].carrera == carreraBusqueda) {
                        cout << "- " << estudiante[j].nombre << endl;
                        encontrado = true;
                    }
                }
                
                if(!encontrado) {
                    cout << "No hay alumnos registrados en esta carrera." << endl;
                }
            }
        }
    } while(opcion != 4);

    return 0;
}
