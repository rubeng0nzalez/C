#include<stdio.h>

int main(){

    float a; //side of square
    float area = 0;   //area of square

    printf("****************************\n");
    printf("*           AREA           *\n");
    printf("****************************\n");

    printf("Add the number of one of the sides: ");
    scanf("%f", &a);

    area = a * a;
    printf("The area of the square is: %f\n", area);


    return 0;
}