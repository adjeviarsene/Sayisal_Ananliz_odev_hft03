#include "sarrus.h"
#include<stdlib.h>

double get_sarrus_determinant(sarrus_t* sarrus){
    int X=0,Y=0;
    sarrus->axeX=3;
    for(int i=0;i<sarrus->axeX;i++){
        X=X + sarrus->array[i][0]*sarrus->array[(i+1)%3][1]*sarrus->array[(i+2)%3][2];
        Y= Y+sarrus->array[(i+3)%3][2]*sarrus->array[(i+1)%3][1]*sarrus->array[(i+2)%3][0];
    }
    sarrus->determinant=X-Y;
    return sarrus->determinant;
}
