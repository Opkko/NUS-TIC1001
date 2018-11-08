#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void to_upper(FILE *in, FILE *out) {
    //Open the input file
    // Create the output file FILE * inputfile = fopen(".txt",r);
    // Call function lowertoupper(input,output)
    //fgetc (inputfile) != EOF
    //change to upper so use isalpha(a) = toupper(a)
    // isAlpha - toUpper(any char)
    // fput(toupper,outfile)
    // else if not alpha just trnasfer
    // int c;
    // int count = 0;
    // while( (c=fgetc(in)) != EOF){
    //     if(isalpha(c)){
    //         fputc(toupper(c),out);
    //     }else if(isalpha(c)==0){
    //         fputc(fgetc(in),out);
    //     }
    // }
    char c;
    while ((c = fgetc(in)) != EOF) //getting char by char
    {   
         if(c>='a' && c<='z'){
            c -= 'a'-'A';
         }
        //fprintf(out,"%c",c);
        fputc(c,out);
    }
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