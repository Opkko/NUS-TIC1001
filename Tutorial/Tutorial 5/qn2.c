#include <stdio.h>
#include <stdbool.h>

void init_primes(bool primes[], int n) {
    /*int i = 0;
    while(i<n){
        if(i==0){
            primes[i]= false;
        }else primes[i]=true;
        i++;
    }*/
    // primes[0] = false;
    // for (int i=1;i<n;i++){
    //     primes[i] = true;
    // }
    int i;
     for (i = 0; i <=n; i++){
         primes[i] = true;
        // printf("%d [%d] ", i, primes[i]);
    }
}
void sieve_primes(bool primes[], int size, int n) {
    
    // for(int o=1; o<size; o++){
    //     if((o+1)%n==0 && (o+1)!=n){
    //         primes[o]=false;
    //     }
    // }
    
    int b = n + n;
    for (int i = b; i <= size; i+=n){
        // if(i==n){
        //     continue;
        // }
        if(i>n)primes[i] = false;
        // printf("%d [%d] ", i, primes[i]);
    }
    //primes[size] = false;
    
}
void print_primes(int n) {
    // bool primes[n];
    // int i = 2;
    // init_primes(primes,n);
    // for(;i<n;i++){
        
    //     if(primes[i-1] == 1){
    //         //primes[init_primes(primes,i)];
    //         sieve_primes(primes,n,i);
    //         printf("%d ",i);
    //     }
    // }
    int i;
    bool pArray[n+1];
    
    init_primes(pArray, n);
    for (i = 2; i < n; i++){
        sieve_primes(pArray, n+1, i);
    }
    for (i = 2; i < n; i++){
        if (pArray[i] == true){
            printf("%d ", i);
        }
    }
    printf("\n");
    
}


int main(){
    return 0;
}