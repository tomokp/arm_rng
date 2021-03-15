#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "variables.h"
void randomlogic(){
   
   srand(time(0)*time(0)*1000);

   printf( "Manual range? y/n :");
   scanf("%c", &input);

   printf( "Amount of randomly generated numbers :");
   scanf("%d", &amount);

    if (input == 'y'){
        printf( "Enter a minimum value :");
        scanf("%d", &lower);

        printf( "Enter a maximum value :");
        scanf("%d", &upper);

        values = upper - lower;

        if (amount <= values){
            for (i = 0; i < amount; ++i){
                int num = (rand() % (upper - lower + 1)) + lower;
                printf("%d ", num);
            }
        }
    }
    else if (input == 'n'){
        lower = 1;
        upper = 1000;

        for (i = 0; i < amount; ++i){
            int num = (rand() % (upper - lower + 1)) + lower;
            printf("%d ", num);
        }
    }
    else {
        printf( "No valid input");
    }
}