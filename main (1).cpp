// Proyecto 4
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Tarea {
    string descripcion;
    bool completada;
};

// Prototipos
void agregarTarea(vector<Tarea>& tareas);
void mostrarTareas(const vector<Tarea>& tareas);

int main() {
    vector<Tarea> tareas;
    int opcion = 0;

    while (opcion != 5) {
        cout << "\nLISTA DE TAREAS\n\n";
        cout << "1. Agregar tarea\n";
        cout << "2. Mostrar tareas\n";
        cout << "3. Eliminar tarea\n";
        cout << "4. Marcar tarea como completada\n";
        cout << "5. Salir\n\n";
        cout << "Seleccione una opcion: ";

        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                agregarTarea(tareas);
                break;

            case 2:
                mostrarTareas(tareas);
                break;

            case 3:
            case 4:
                cout << "Opcion en desarrollo.\n";
                break;

            case 5:
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opcion no valida.\n";
                break;
        }
    }

    return 0;
}

// Agrega una tarea pendiente
void agregarTarea(vector<Tarea>& tareas) {
    Tarea nueva;

    cout << "Ingrese la tarea: ";
    getline(cin, nueva.descripcion);

    if (nueva.descripcion == "") {
        cout << "La tarea no puede estar vacia.\n";
        return;
    }

    nueva.completada = false;
    tareas.push_back(nueva);

    cout << "Tarea agregada correctamente.\n";
}

// Muestra todas las tareas
void mostrarTareas(const vector<Tarea>& tareas) {
    cout << "\nTAREAS\n\n";

    if (tareas.empty()) {
        cout << "No hay tareas registradas.\n";
        return;
    }

    for (size_t i = 0; i < tareas.size(); i++) {
        cout << i + 1 << ". ";

        if (tareas[i].completada) {
            cout << "[Completada] ";
        } else {
            cout << "[Pendiente] ";
        }

        cout << tareas[i].descripcion << endl;
    }
}
