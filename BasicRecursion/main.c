/**
 * @author Ruben Gonzalez
 * @email rgonzalez.mywork@gmail.com
 * @create date 2023-03-17 02:02:55
 * @modify date 2023-03-17 02:05:49
 * @desc This is a quick program to demonstrate how a recursive function works
 */


#include<stdio.h>

int fibonacci(int); //prototype function

int main(){

    int value = 0;  //value to recursively calculate a fibonacci number
    
    printf("Add a number: ");
    scanf("%d", &value);

    printf("Value after recursion: %d\n", fibonacci(value));

    return 0;
}

int fibonacci(int recV){
    if(recV <= 1)
        return recV;
    else
        return recV * fibonacci(recV - 1);
}