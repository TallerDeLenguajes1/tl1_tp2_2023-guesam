#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu {
    int velocidad; // entre 1 y 3
    int anio; // entre 2015 y 2023
    int cantidad; // entre 1 y 8
    char *tipo_cpu; // valores del arreglo tipos
};


int main(){
    srand(time(NULL));

    return 0;
}