#include "sarrus.h"
#include<stdlib.h>

int main(int argc,char **argv){
    
    sarrus_t *mysarrus=(sarrus_t*)malloc(sizeof(sarrus_t));
    printf(" //NB:Enter the matrix following the X axis\n");
    for(mysarrus->axeX=0;mysarrus->axeX<3;mysarrus->axeX++){
        for(mysarrus->axeY=0;mysarrus->axeY<3;mysarrus->axeY++){
           
            printf("Enter the [%d][%d] Element for sarrus power: ",mysarrus->axeY,mysarrus->axeX);
            scanf("%d",&mysarrus->array[mysarrus->axeY][mysarrus->axeX]);
            printf("\n");
        }
    }
    printf("det=%lf\n",get_sarrus_determinant(mysarrus));
    free(mysarrus);

    return 0;
}