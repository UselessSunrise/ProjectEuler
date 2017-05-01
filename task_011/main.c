/*ProjectEuler number 11*/
/*What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the 20×20 grid?*/
#include <stdlib.h>


int main(){
    /* Two-dimensional massive is going to be the grid*/
    int grid[20, 20];

    /*The grid is filled with numbers from 0 to 99(randomly)*/
    for(int i = 0;i <= 20;i++){
        for(int j = 0;j <= 20;j++){
            grid[i,j] = rand()%100;
        }
    }
    
}