#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>


void to_upper(FILE *in, FILE *out) {
    //step 5 fscanf( ,"%s");
    // Every time u read the file, read from behind.
    //for(strlen,i...;i=0){
        //fput
    //}
    char c=' '; // In case fgetc(in) gets error, c = space so code can still run
    bool bol = true; //First Char is bold (Buffer to know Start or non start character)= Binary buffer T/F.
    while ((c = fgetc(in)) != EOF) //getting char by char
    {   
        if(bol == true) {
            if(c>='a' && c<='z'){
                c -= 'a'-'A';
            }
            bol=false; // Dont allow uppercases anymore
        }
        if(isspace(c)){
                bol = true; // Next word need to be UPPERCASE
        }
        //fprintf(out,"%c",c);
        fputc(c,out);
    }
}

int main (void){
    FILE *fp = fopen("wind.txt","r");
    FILE *f2 = fopen("copytext.txt","w+");
    if(fp != NULL && f2 != NULL){
        to_upper(fp,f2);
        fclose(fp);
        fclose(f2);
    }
    return 0;
}