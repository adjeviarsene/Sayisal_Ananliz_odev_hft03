#pragma once
#include<stdint.h>
#include<stdio.h>
typedef struct{
    uint8_t axeY:   3;
    uint8_t axeX:   3;
    double determinant;
    int array[3][3];

}sarrus_t;

double get_sarrus_determinant(sarrus_t* );