#include "stdio.h"

void main(void){
    FILE* fp;
    fp = fopen("input.txt", "r");
    
    char str[7];
    int top3[] = {0,0,0};
    int top3_total = 0;
    int str_to_int=0;
    int max = 0;
    int total = 0;
    char flag = 1;
    char wait[1];
    char i = 0;

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
            //scanf("%0c",wait);
            //printf("%d\n\n",total);

            if(i<3){
                top3[i] = total;    
            }

            else{
                if(total > top3[0] || total > top3[1] || total > top3[2]){
                    if (top3[0]<top3[1] && top3[0]<top3[2]){
                        top3[0] = total;
                    }
                    else if (top3[1]<top3[0] && top3[1]<top3[2]){
                        top3[1] = total;
                    }
                    else if (top3[2]<top3[0] && top3[2]<top3[1]){
                        top3[2] = total;
                    }
                }
            }
            //printf("%d\n%d\n%d\n\n",top3[0],top3[1],top3[2]);
            total=0;
            i++;
        }
    }

    printf("Top 3 elves:\n");
    for(int i = 0; i<3; i++){
        printf("%d\n",top3[i]);
        top3_total += top3[i];
    }

    printf("\nTop 3 total:\n%d\n",top3_total);

    fclose(fp);
    return;
}