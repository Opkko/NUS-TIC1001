#include <stdio.h>
#include <ctype.h>
#include <string.h>

void copy(FILE *in, FILE *out) {
    for (int c = fgetc(in); c!= EOF; c = fgetc(in)){
        fputc(c, out);
    }
}

int main (void){
    FILE *fp = fopen("wind.txt","r");
    FILE *f2 = fopen("copytext.txt","w+");
    if(fp != NULL && f2 != NULL){
        copy(fp,f2);
        fclose(fp);
        fclose(f2);
    }
    return 0;
}