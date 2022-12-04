#include "stdio.h"

void main(void){
    FILE* fp;
    fp = fopen("input.txt", "r");
    
    char str[7];
    int str_to_int=0;
    int max = 0;
    int total = 0;
    char flag = 1;

    if(fp == NULL){
        printf("Error opening .txt file");
    }

    printf("List of calories:\n\r");

    while(fgets(str, sizeof(str),fp)!=NULL){
        str_to_int = atoi(str);
        if(str_to_int != 0){
            total  += str_to_int;
        }
        else{
            if(max<total){
                max = total;
            }
            total=0;
        }
    }

    printf("%d",max);

    fclose(fp);
    return;
}