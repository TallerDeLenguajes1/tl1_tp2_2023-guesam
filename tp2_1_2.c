#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){
    srand(time(NULL));
    int i;
    double vt[N];
    double * punt;
    punt = vt;
    for(i = 0; i < N; i++){
        *punt = 1 + rand() % 100;
        printf("%f \n", *punt);

        punt++;
    }

    return 0;
}
