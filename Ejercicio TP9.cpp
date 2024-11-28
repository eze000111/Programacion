#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    string apellido;
    string curso;
    string materia;
    float calificaciones[3];
    float promedio;
    string condicion;
};

int Inicializar(Alumno &alumno) {
    cout << "Ingrese el nombre del alumno: ";
    getline(cin, alumno.nombre);
    cout << "Ingrese el apellido del alumno: ";
    getline(cin, alumno.apellido);
    cout << "Ingrese el curso: ";
    getline(cin, alumno.curso);
    cout << "Ingrese la materia: ";
    getline(cin, alumno.materia);

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese la calificación del trimestre " << (i + 1) << ": ";
        cin >> alumno.calificaciones[i];
    }
}

float calcularPromedio(Alumno &alumno) {
    float suma = 0;
    for (int i = 0; i < 3; i++) {
        suma += alumno.calificaciones[i];
    }
    alumno.promedio = suma / 3;
    return alumno.promedio;
}

int calcularCondicion(Alumno &alumno) {
    bool aprobado = true;
    bool recuperacion = false;

    for (int i = 0; i < 3; i++) {
        if (alumno.calificaciones[i] < 5) {
            aprobado = false;
            alumno.condicion = "Reprobó y deberá recursar la materia.";
         
        }
        else if (alumno.calificaciones[i] < 7) {
            recuperacion = true;
        }
    }

    if (aprobado) {
        alumno.condicion = "Promocionó.";
    }
    else if (recuperacion) {
        alumno.condicion = "Puede recuperar el trimestre.";
    }
}

int Imprimir(const Alumno &alumno) {
    cout << "\n--- Resultados ---" << endl;
    cout << "Nombre: " << alumno.nombre << " " << alumno.apellido << endl;
    cout << "Curso: " << alumno.curso << endl;
    cout << "Materia: " << alumno.materia << endl;
    cout << "Calificaciones: ";
    for (int i = 0; i < 3; i++) {
        cout << alumno.calificaciones[i] << " ";
    }
    cout << endl;
    cout << "Promedio: " << alumno.promedio << endl;
    cout << "Condición: " << alumno.condicion << endl;
}

int main() {
    Alumno alumno;

    Inicializar(alumno);
    calcularPromedio(alumno);
    calcularCondicion(alumno);
    Imprimir(alumno);

    return 0;
}
