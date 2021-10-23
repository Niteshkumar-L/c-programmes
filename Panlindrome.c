#include <stdio.h>

int main() {
    int num, num1, rev = 0, rem;
    
    printf("Enter any number: ");
    scanf("%d", &num);    
    num1 = num;
    
    //logic
    while (num > 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    
    if (num1 == rev){
        printf("Given number is a palindromic number"); 
    }
    else{
        printf("Given number is not a palindromic number"); 
    }    
    return 0; 
} 
