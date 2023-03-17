/**
 * @author Ruben Gonzalez
 * @email rgonzalez.mywork@gmail.com
 * @create date 2023-03-17 02:02:55
 * @modify date 2023-03-17 02:05:49
 * @desc This is a quick program to demonstrate how a recursive function works
 */


#include<stdio.h>

int fibonacci(int); //prototype function

int main(){ //main function: required

    int value = 0;  //value to recursively calculate a fibonacci number
    
    printf("Add a number: "); //program requests a number
    scanf("%d", &value);    //value is saved in "value" variable

    printf("Your fibonacci number is: %d\n", fibonacci(value));  //calculates the fibonacci number

    return 0;
}

int fibonacci(int recV){
    if(recV <= 2)   //when the number to calculate is 1 or less than 1 it should return the same number i.e. fibonacci 1  = 1
        return recV;
    else
        return recV * fibonacci(recV - 1); //Otherwise, multiply the current value with a the fibonacci number of (recV-1) 
}