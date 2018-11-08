#include <stdio.h>
#include <ctype.h>

int count(FILE *fp) {
    int z;
    int count = 0;
    
    while ((z = fgetc(fp)) != EOF){
        if(isalpha(z)){
            count++;
        }
    }
    return count;
}

int main (void){
    FILE *fp = fopen("wind.txt","r");
    if(fp != NULL){
        int c = count(fp);
        fclose(fp);
        printf("%d\n",c);
    }
    return 0;
}