#include <stdio.h>
#include <stdbool.h>

void print_cells(bool cells[],int size){

    //int 

    for(int i = 0; i < size; i++){

        if(cells[i]==0)printf("_");

        if(cells[i]==1)printf("X");

    }printf("\n");

}

void next_gen(bool cells[],int size,int num_gen){

    bool buff_gen[size];

    for(int i=0;i<size;i++){

        buff_gen[i]=0;

    }

    

    //while (n < num_gen){

        for(int val=0; val < size ;val++){

            if(cells[val]==1){

                if((val-1) >= 0 && cells[val-2]==0 && cells[val-1]==0 ){

                    buff_gen[val-1]=1;

                }

                if((val+1)<=size && cells[val+1]==0 && cells[val+2]==0){

                    buff_gen[val+1]=1;

                }

            }

        }

    for(int blake = 0; blake<size; blake++){

        cells[blake]=buff_gen[blake];

    }

}

void game_of_life(bool cells[], int size, int num_gen) {

    

    for(int i = 0; i<num_gen;i++){

        print_cells(cells,size);

        next_gen(cells,size,num_gen);

    }

}

int main(){
    return 0;

}