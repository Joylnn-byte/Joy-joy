//simple c program

/*
Name:Joy Stanley
Reg no:CT100/G/26267/25
*/

#include<stdio.h>//pre processor director 
#define PI 3.14159

int main(){
    float radius,height;
    float volume,surface_area;
    
    //prompt the user
    printf("Enter the radius of the cylinder ");
    scanf("%f",&radius);
    
    printf("Enter the height of the cylinder");
    scanf("%f",&height);
    
    //calculations
    volume =PI * radius * radius * height;
    surface_area=2 * PI * radius * radius * (radius+height);
    
    //display results 
    printf("Volume of the cylinder=%.2f\n",volume);
    printf("Surface_area of the cylinder= %.2f\n",surface_area);
    return 0;
}