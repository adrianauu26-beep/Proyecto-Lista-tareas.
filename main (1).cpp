//Proyecto 4
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Estructura que representa una tarea
struct Tarea {
    string descripcion;
    bool completada;
};

// Protoripos
void agregarTarea(vector<Tarea>& tareas);
void mostrarTareas(const vector<Tarea>& tareas);
// void completarTarea(vector<Tarea>& tareas);

int main() {
    vector<Tarea> tareas;
    int opcion;

    while (opcion != 5) {
        cout << "\nLISTA DE TAREAS\n\n";
        cout << "1. Agregar tarea\n";
        cout << "2. Mostrar tareas\n";
        cout << "3. Marcar tarea como completada\n";
        cout << "4. Salir\n\n";
        cout << "Seleccione una opción: ";

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
                 completarTarea(tareas);
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no válida.\n";
                break;
        }
    }

    return 0;
}

// Agrega una nueva tarea al vector
void agregarTarea(vector<Tarea>& tareas) {
    Tarea nueva;

    cout << "Ingrese la tarea";
    getline(cin, nueva.descripcion);
    
    if (nueva.descripcion == ""){
        cout <<"La tarea no puede estar vacía";
        return;
    }
    
    nueva.completada = false;
    
    tareas.push_back(nueva);
    cout << "Nueva tarea añadida correctamente";
    
    
}

// Muestra todas las tareas
 void mostrarTareas(const vector<Tarea>& tareas){
     cout << "\nTAREAS\n\n";
     
     for(int i = 0; i <tareas.size(); i++);{
        // Número. [Estado] Descripción
        cout << i + 1 ". ";
        
        if (tarea.completada == true){
            cout << "[Completada]"
        } else {
            cout << "[Pendiente]"
        
     cout << tareas[i].descripcion << endl;
         
     }
   }

// Marca una tarea como completada
 void completarTarea(vector<Tarea>& tareas) {
     //Imprimir tareas
     mostrarTareas(tarea);
     
     //Cambiar tarea.completada a true
     
     //¿Número de tarea a completar?
     int numeroTarea;
     cout << "Selecciones la tarea completada: ";
     cin >> numeroTarea;
     
     if (numeroTarea < 1 or numeroTarea > tarea.size()){
         cout << "Tarea inválida";
         return;
     }
     
     tareas[numeroTarea -1].completada = true;
     cout << "Tarea completada correctamente" << endl;
   
}
