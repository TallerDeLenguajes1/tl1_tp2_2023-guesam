#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main(){
    srand(time(NULL));
    int i, j;
    int mt[N][M];
    int * punt;
    punt = &mt[0][0];
    
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            *(punt + i * M + j) = 1 + rand() % 100;
            printf("matriz[%d][%d] = %d \n", i, j, mt[i][j]);
        }
        printf("\n");
    }

    return 0;
}