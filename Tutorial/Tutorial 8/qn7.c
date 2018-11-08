#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>


void to_upper(FILE *in, FILE *out) {
    bool flag = true;
    char c;
     for (int c = fgetc(in); c != EOF; c = fgetc(in)){
         if (flag == true && !isspace(c)){
             if (c >= 'a' && c <= 'z'){
                 c = c-32;
             }
             flag = false;
         }
         if (c == '.'){
             flag = true;
         }
         fputc(c, out);
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

