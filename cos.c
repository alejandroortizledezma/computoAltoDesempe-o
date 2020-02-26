/*cos.c
Copyright (C) 2020 Alejandro Ortiz Ledezma
alejandroortizledezma@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x){
    float y;
    y= cos(x);
    return y;
}

int main(int nargs, char **argv){
    float a= 0.0;
    float b= 0.0;
    float dx= 0.1;
    float x= 0.0;
    int n= 0;
    /*int i= 0;
    for(i= 0;i < nargs;i++){
        printf("%s\n", argv[i]);
    }*/
    if(nargs != 3){
        printf("Number of arguments wrong. You need 2\n");
        return 0;
    }
    
    sscanf(argv[1], "%f", &a);    
    sscanf(argv[2], "%f", &b);
    
    n= (b - a) / dx +1;
    printf("n= %i\n", n);
    x= a;
    for (int i =0;i<=n;i++){
        printf("%f\t %f\n", x,f(x));
        //x= x + dx;
        x= a + i*dx;
    }
    return 0;
}