/*ProjectEuler number 11*/
/*What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the 20×20 grid?*/
#include <stdlib.h>
#include <stdio.h>
#define SIZE 19

/* Calculate up,down,left,right and diagonally products to compare them later*/
int leftprod(int grid[][SIZE]);
int rightprod(int grid[][SIZE]);
int upprod(int grid[][SIZE]);
int downprod(int grid[][SIZE]);
int ldiagprod(int grid[][SIZE]);
int rdiagprod(int grid[][SIZE]);

int main(){
    /* Two-dimensional array is going to be the grid*/
    int grid[SIZE][SIZE];

    /*The grid is filled with numbers from 0 to 99(randomly)*/
    for(int i = 0;i <= SIZE;i++){
        for(int j = 0;j <= SIZE;j++){
            grid[i][j] = rand()%100;
        }
    }

    int max =0;
    int products[6];/*now we need to compare all the products, so I decided to use array for that*/
    for(int i = 0;i <= 5;i++){
        switch ( i ){
            case 0: products[i] = leftprod(grid);
            case 1: products[i] = rightprod(grid);
            case 2: products[i] = upprod(grid);
            case 3: products[i] = downprod(grid);
            case 4: products[i] = ldiagprod(grid);
            case 5: products[i] = rdiagprod(grid);
            default:break;
        }
        if(products[i]>max){
            max = products[i];
        }
    }

    printf("%d - Max Product",max); /*printing the result*/

    return 0;
}


int leftprod(int grid[][SIZE]) {
    int max = 0;
    for(int i = 3;i <= SIZE;i++){
        for(int j = 0;j <= SIZE;j++){
            if((grid[i][j] * grid[i-1][j] * grid[i-2][j] * grid[i-3][j]) > max){
                max = grid[i][j]*grid[i-1][j]*grid[i-2][j]*grid[i-3][j];
            }
        }
    }
    return max;
}

int rightprod(int grid[][SIZE]) {
    int max = 0;
    for (int i = 0; i <= SIZE - 3; i++) {
        for (int j = 0; j <= SIZE; j++) {
            if ((grid[i][j] * grid[i + 1][j] * grid[i + 2][j] * grid[i + 3][j]) > max) {
                max = grid[i][j] * grid[i + 1][j] * grid[i + 2][j] * grid[i + 3][j];
            }
        }
    }
    return max;
}

int upprod(int grid[][SIZE]) {
    int max = 0;
    for (int i = 0; i <= SIZE; i++) {
        for (int j = 3; j <= SIZE; j++) {
            if ((grid[i][j-3] * grid[i][j-2] * grid[i][j-1] * grid[i][j]) > max) {
                max = grid[i][j-3] * grid[i][j-2] * grid[i][j-1] * grid[i][j];
            }
        }
    }
    return max;
}

int downprod(int grid[][SIZE]) {
    int max = 0;
    for (int i = 0; i <= SIZE; i++) {
        for (int j = 0; j <= SIZE-3; j++) {
            if ((grid[i][j+3] * grid[i][j+2] * grid[i][j+1] * grid[i][j]) > max) {
                max = grid[i][j+3] * grid[i][j+2] * grid[i][j+1] * grid[i][j];
            }
        }
    }
    return max;
}

int ldiagprod(int grid[][SIZE]) {
    int max = 0;
    for (int i = 3; i <= SIZE; i++) {
        for (int j = 0; j <= SIZE-3; j++) {
            if ((grid[i-1][j+1] * grid[i-2][j+2] * grid[i-3][j+3] * grid[i][j]) > max) {
                max = grid[i-1][j+1] * grid[i-2][j+2] * grid[i-3][j+3] * grid[i][j];
            }
        }
    }
    return max;
}

int rdiagprod(int grid[][SIZE]) {
    int max = 0;
    for (int i = 0; i <= SIZE-3; i++) {
        for (int j = 0; j <= SIZE-3; j++) {
            if ((grid[i+1][j+1] * grid[i+2][j+2] * grid[i+3][j+3] * grid[i][j]) > max) {
                max = grid[i+1][j+1] * grid[i+2][j+2] * grid[i+3][j+3] * grid[i][j];
            }
        }
    }
    return max;
}
