//calculating simple interest

#include <stdio.h>

int main(){
    int p = 100000;
    int y = 3;
    int roi = 8;
    float si = (p*y*roi)/100;
    printf("%f", si);
}