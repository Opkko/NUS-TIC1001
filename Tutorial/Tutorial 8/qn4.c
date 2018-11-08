#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void to_upper(FILE *in, FILE *out) {
    char c;
    while ((c = fgetc(in)) != EOF) //getting char by char
    {   
         if(c>='a' && c<='z'){
            c -= 'a'-'A';
         }
        fputc(c,out);
    }
    //E
    /*
        for (int c = fgetc(in); c != EOF; c = fgetc(in)){
        if (c >= 'a' && c <= 'z'){
            c = c-32;
        }
        fputc(c, out);
    }*/
}

int main (void){
    FILE *fp = fopen("pop.txt","r");
    FILE *f2 = fopen("copytext.txt","w+");
    if(fp != NULL && f2 != NULL){
        to_upper(fp,f2);
        fclose(fp);
        fclose(f2);
    }
    return 0;
}