#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMA 5

struct compu {
    int velocidad; // entre 1 y 3
    int anio; // entre 2015 y 2023
    int cantidad; // entre 1 y 8
    char *tipo_cpu; // valores del arreglo tipos
} typedef compu;

void cargarArreglo (compu * pc, char tipos[6][10]);
void mostrarArreglo (compu * pc);
void compuVieja(compu * pc);
void compuVeloz(compu * pc);

int main(){
    srand(time(NULL));

    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    compu pc[TAMA];

    cargarArreglo (pc, tipos);
    mostrarArreglo(pc);
    compuVieja(pc);
    compuVeloz(pc);
    
    return 0;
}

void cargarArreglo (compu * pc, char tipos[6][10]){
    for (int i = 0; i < TAMA; i++){
        pc[i].velocidad = rand() % 3 + 1;
        pc[i].anio = rand() % 9 + 2015;
        pc[i].cantidad = rand() % 8 + 1;
        pc[i].tipo_cpu = tipos[rand() % 6];
    } 
}

void mostrarArreglo (compu * pc){
    for (int i = 0; i < TAMA; i++){
        printf("\nComputadora %d \n", (i+1));
        printf("Velocidad: %d GHz \n", pc[i].velocidad);
        printf("Anio de fabricacion: %d \n", pc[i].anio);
        printf("Cantidad: %d \n", pc[i].cantidad);
        printf("Tipo de procesador: %s \n", pc[i].tipo_cpu);
        printf("\n ------------- \n");
    }
}

void compuVieja(compu * pc){
    int aux = 2023;
    compu vieja[1];
    for (int i = 0; i < TAMA; i++){
        if(pc[i].anio < aux){
            aux = pc[i].anio;
            vieja[0] = pc[i];
        }
    }
    printf("\nComputadora vieja \n");
    printf("Velocidad: %d GHz \n", vieja[0].velocidad);
    printf("Anio de fabricacion: %d \n", vieja[0].anio);
    printf("Cantidad: %d \n", vieja[0].cantidad);
    printf("Tipo de procesador: %s \n", vieja[0].tipo_cpu);
}

void compuVeloz(compu * pc){
    int aux = 0;
    compu veloz[1];
    for (int i = 0; i < TAMA; i++){
        if(pc[i].velocidad > aux){
            aux = pc[i].velocidad;
            veloz[0] = pc[i];
        }
    }
    printf("\nComputadora veloz \n");
    printf("Velocidad: %d GHz \n", veloz[0].velocidad);
    printf("Anio de fabricacion: %d \n", veloz[0].anio);
    printf("Cantidad: %d \n", veloz[0].cantidad);
    printf("Tipo de procesador: %s \n", veloz[0].tipo_cpu);
}