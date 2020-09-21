#include <stdio.h>


void printsize(char data_type[], int size_type){
    printf("\t %s size is: %d bytes\v\n", data_type, size_type);
}

void dataprint(){
    puts("<< List of size data types >>\n");
    printsize("char", sizeof(char));
    printsize("int", sizeof(int));
    printsize("__int8_t", sizeof(__int8_t));
    printsize("__int16_t", sizeof(__int16_t));
    printsize("__int32_t", sizeof(__int32_t));
    printsize("__int64_t", sizeof(__int64_t));
    printsize("__int128_t", sizeof(__int128_t));
    printsize("long int", sizeof(long));
    printsize("float", sizeof(float));
    printsize("double", sizeof(double));
}

void main(void){

    dataprint();
}