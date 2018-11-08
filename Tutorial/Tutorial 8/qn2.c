#include <stdio.h>

int count(FILE *fp) {
    char s[1000];
    int c;
    int count = 0;
    while( (c=fscanf(fp,"%s",s)) != EOF){
        //printf(%)
        count++;
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