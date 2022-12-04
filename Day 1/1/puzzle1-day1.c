#include "stdint.h"
#include "stdio.h"

void main(void){
    FILE* fp;
    fp = fopen("input.txt", "r");
    
    char str[7];

    if(fp == NULL){
        printf("Error opening .txt file");
    }

    printf("List of calories:\n\r");

    while(fgets(str, sizeof(str),fp)){
        puts(str);
        printf("%s",str);
    }
}