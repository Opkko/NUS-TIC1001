#include <stdio.h>

#include <string.h>

using namespace std;

void reverse(FILE *in, FILE *out) {
    char line[501];
    while (fgets(line, 500, in) != NULL){
        string s(line);
        for (int i = s.size()-1; i >= 0; i--){
            if (s[i] == '\n'){
                continue;
            }
            fputc(s[i], out);
        }
        fputc('\n', out);
    }
}
int main (void){
    FILE *fp = fopen("wind.txt","r");
    FILE *f2 = fopen("copytext.txt","w+");
    if(fp != NULL && f2 != NULL){
        reverse(fp,f2);
        fclose(fp);
        fclose(f2);
    }
    return 0;
}