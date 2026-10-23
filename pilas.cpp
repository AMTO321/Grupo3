
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
        Nodo* nuevo = new Nodo;     // 1. crear el nodo
        nuevo->dato = valor;        // 2. guardar el dato
        nuevo->siguiente = tope;    // 3. apuntar al tope actual
        tope = nuevo;               // 4. el nuevo pasa a ser el tope
    }
};