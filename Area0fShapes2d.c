//
// Created by amrith on 12/10/2022.
//
#include<stdio.h>
#include<conio.h>

int main(){

    float s=0,r=0,l=0,b=0;
    const float pi=3.1415;
    printf("Area of Square , circle , rectangle");

    printf("\nEnter l of square:");
    scanf("%f",&s);
    printf("Area of Square: %0.2f",s*s);

    printf("\nradius of circle:");
    scanf("%f",&r);
    double area = r*r*pi;
    printf("Area of circle: %f",area);

    printf("\nL & R of rectangle:\n");
    scanf("%f %f",&l,&b);
    printf("Area of circle: %0.2f",l*b);


    return 0;
}