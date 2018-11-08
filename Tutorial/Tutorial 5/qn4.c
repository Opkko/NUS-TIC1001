#include <stdio.h>

void print_song(int n) {

    char ordinal[12][34] = {"On the first day of Christmas,","On the second day of Christmas,","On the third day of Christmas,","On the fourth day of Christmas,","On the fifth day of Christmas,","On the sixth day of Christmas,",

    "On the seventh day of Christmas,","On the eighth day of Christmas,","On the ninth day of Christmas,","On the tenth day of Christmas,","On the eleventh day of Christmas,","On the twelfth day of Christmas,"};

    char true_love[]= {"my true love sent to me,"};

 

    char lyrics[12][28]={

        "a partridge in a pear tree.",

        "two turtle doves,",

        "three French hens,",

        "four calling birds,",

        "five golden rings,",

        "six geese a laying,",

        "seven swans a swimming,",

        "eight maids a milking,",

        "nine ladies dancing,",

        "ten lords a leaping,",

        "eleven pipers piping,",

        "twelve drummers drumming,"

    };

    int store = 0;

    for(int i=0; i<n;i++){

        printf("%s\n",ordinal[i]);

        printf("%s\n",true_love);

        for(int k=store;k>=0;k--){ //Needs to be staying at Range of n) E.g. At 1, i=0, k= store = 0, thus k = -1 after one loop. breaks.

            if(k==0 && store>0)printf("and ");

            printf("%s\n",lyrics[k]);

            //if(k>0 && store >0)printf("\n");

            //k++;

        }

        printf("\n");

        store++;

    }

}

int main(void)(
    return 0;
)