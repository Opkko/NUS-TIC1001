#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int count(FILE *fp) {
    int c;
    int count=0;
    bool bol = false;
    while ((c = fgetc(fp)) != EOF) //getting char by char as int.
    {   
        if(c=='.'){
            count++;
            bol = true;
        }
    }
    return count;
}


int main (void){
    FILE *fp = fopen("pop.txt","r");
    if(fp != NULL){
        int c = count(fp);
        fclose(fp);
        printf("%d\n",c);
    }
    return 0;
}