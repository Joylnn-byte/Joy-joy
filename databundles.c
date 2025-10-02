//simple c program

/*
Name:Joy Stanley
Reg no:CT100/G/26267/25
*/

#include<stdio.h>//pre processor director 

int main(){
    int choice;
    
    //Display input 
    printf("Available data bundles \n");
    printf("100 mb -ksh 50\n");
    printf("500 mb - ksh 200\n");
    printf("1Gb - ksh 350\n");
    printf("2Gb - ksh 600\n");
    
    //prompt user
    printf("Enter your choice 1-4");
    scanf("%d", & choice);
    
    //use switch statement
    switch (choice){
    
    case 1 :
    printf("You selected 100mb of ksh 50\n");
    break;
    case 2:
    printf("You selected 500mb of ksh 200\n");
    break;
    case 3:
    printf("You selected 1Gb at ksh 350\n");
    break;
    
    // default
    printf("Invalid choice.Please select between 1 and 4\n");
    ("Please select between 1 and 4 \n");
    }  
       
    return 0;
}