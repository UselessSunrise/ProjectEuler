#include <stdio.h>
/*ProjectEuler number 10*/
/*Finding the sum of all the primes below two million.*/
/*In this version i'm using Sieve of Eratosphen to find prime numbers*/

#define MAXNUM 2000000

int main(){
    long sum = 0;
    int numbers[MAXNUM]; /*It will be easier to deal with using massive*/
    /*Now we need to fill the massive with ones*/
    for(int i = 0;i <= MAXNUM;i++) {
        numbers[i] = 1;
    }
    numbers[0] = 0; /*1 isn't a prime*/

    for(int i = 1;i*i < MAXNUM;i++){
        if(numbers[i] == 1){
            for(int k = (i+1) *(i+1);k <= MAXNUM;k += i+1 ){/*Adding one because indexes are 1,2,3... but numbers are 2,3,4...*/
                numbers[k-1] = 0;
            }
        }
    }

    /*Now we can summarise our primes*/
    for(int i = 0;i <= MAXNUM;i++){
        if(numbers[i] == 1){
            sum+=(i+1);
            /*adding i+1 because indexes are 0,1,2,etc.*/
        }
    }

    printf("%li",sum);
    return 0;
}

