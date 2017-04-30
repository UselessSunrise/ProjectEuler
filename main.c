#include <stdio.h>
/*ProjectEuler number 10*/
/*Finding the sum of all the primes below two million.*/

#define MAXNUM 2000000

int primecheck(int num);

int main(){
    long sum = 0;  /* 2 is the lowest prime, so starting summarising from it*/

    for(int i = 2;i < MAXNUM;i++){
        int flag = primecheck(i);
        if(flag == 1){
            sum += i;
        }
    }

    printf("%li/n",sum);
    return 0;
}

int primecheck(int num){
    int counter = 1;
    /*if number is dividing only on 1 and itself, then it's a prime one*/
    for(int i = 2;i < num;i++){
        if(num % i == 0){
            counter++;
        }
    }

    return counter;
}