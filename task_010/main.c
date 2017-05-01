
/*ProjectEuler number 10*/
/*Finding the sum of all the primes below two million.*/
/*In this version i'm using Sieve of Eratosphen to find prime numbers*/

#define MAXNUM 2000000

int* sieve(int num[]);

int main(){
    /*It will be easier to deal with using massive*/
    int numbers[MAXNUM];
    int sum = 0;
    /*Now we need to fill the massive with ones*/
    for(int i = 0;i <= MAXNUM;i++){
        numbers[i] = 1;
    }
    /*We're ready to use sieve*/
    sieve(numbers);
    /*Now we can summarise our primes*/
    for(int i = 0;i <= MAXNUM;i++){
        if(numbers[i] == 1){
            sum+=(i+1);
            /*adding i+1 because indexes are 0,1,2,etc.*/
        }
    }
    return 0;
}

int* sieve(int num[]){
    num[0] = 0; /*1 isn't a prime*/

    for(int i = 1;i*i < MAXNUM;i++){
        if(num[i] == 1){
            for(int k = i * i;k <= MAXNUM;k += i){
                num[i] = 0;
            }
        }
    }

    return num;
}