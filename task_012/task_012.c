#include <stdio.h>
/*ProjectEuler number 12*/
/*What is the value of the first triangle number to have over five hundred divisors?*/

static int main(){
    int num = 0;
    int div = 0;

    for(int i = 1;div <= 500;i++){
        div = 0;
        num += i;
        int k;

        for(k = 1;k * k < num;k++){
            if(num % k == 0){
                div++;
            }
        }
        div *= 2;

        if(k * k == num){
            div++;
        }
    }

    printf("Triangle number with more than 500 divions - %d /n",num);
    return 0;
}

