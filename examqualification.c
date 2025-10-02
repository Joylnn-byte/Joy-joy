//simple c program

/*
Name:Joy Stanley
Reg no:CT100/G/26267/25
*/

#include<stdio.h>//pre processor director 

int main(){
    // Variable declaration
    int marks;
    int attendance;
    // Prompt the user to enter marks
    printf("Enter your marks\n");
    scanf("%d",& marks); //take user input
    printf("Enter your attendance");
    scanf("%d", & attendance); //take user input 
    if (marks>=40){
        printf("You're eligibile for final exams\n");
    }    
    else{
         printf("You're not eligible for final exams\n");
    }    
    if (attendance>=75){
        printf("You're eligible for final exams\n");
    }    
    else{
         printf("You're not eligible for final exams\n");
    }     
    return 0;
}