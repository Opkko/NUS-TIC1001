#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void interleave(FILE *in1, FILE *in2, FILE *out) {
    char *s1;
    char *s2;
    char compile[500];
    do{
        if(( s1= fgets(compile,500,in1))){
            fputs(compile,out);
        }
        if(( s2= fgets(compile,500,in2))){
            fputs(compile,out);
        }
    }while(s1 || s2);
}

int main (void){
    FILE *fp = fopen("wind.txt","r");
    FILE *fq =fopen("pop.txt","r");
    FILE *f2 = fopen("copytext.txt","w+");
    if(fp != NULL && fq != NULL){
        interleave(fp,fq,f2);
        fclose(fp);
        fclose(fq);
        fclose(f2);
    }
    return 0;
}
