/* Universidad de las Fuerzas Armadas 
     Ciencias de la Computacion
        Estructura de Datos

Grupo: 3            Integrantes: Kevin Cabezas, Martin Paz 
Fecha: 23/10/2026                Erick Sabando, Adrian Toapanta
        Tema: Pilas
*/


#include<iostream>

using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

class Pila {
private:
    Nodo* tope;
public:
    Pila() {
        tope = nullptr;
    }

    void insertar(int valor) {
        Nodo* nuevo = new Nodo;   
        nuevo->dato = valor;       
        nuevo->siguiente = tope;   
        tope = nuevo;               
    }
        int eliminar() {
        if (tope == nullptr) {
            cout << "La pila esta vacia, no hay nada que eliminar." << endl;
            return -1;  // valor de error
        }

        Nodo* temp = tope;          // guardamos el nodo del tope
        int valor = temp->dato;     // guardamos su dato
        tope = tope->siguiente;     // el tope pasa al siguiente nodo
        delete temp;                // liberamos la memoria del nodo
        return valor;
    }

void imprimir() {
        if (tope == nullptr) {
            cout << "La pila esta vacia." << endl;
            return;
        }

        Nodo* actual = tope; 
        cout << "Elementos de la pila:" << endl;
        
        while (actual != nullptr) {
            cout << "Dato: " << actual->dato << endl;
            actual = actual->siguiente; 
        }
        cout << "" << endl;
    }
};


