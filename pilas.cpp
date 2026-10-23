#include<iostream>

using namespace std;
class Pila {
private:
    
    public:
        int dato;
        Nodo* siguiente;

        Nodo(int val) {
            dato = val;
            siguiente = nullptr;
        }
    };

public:

    Pila() {
        cima = nullptr;
    }

    ~Pila() {
        while (!estaVacia()) {
            eliminar();
        }
    }
