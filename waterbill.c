//simple c program

/*
Name:Joy Stanley
Reg no:CT100/G/26267/25
between 0-30 units,20 ksh per unit
between 31-60 units,25 ksh per unit
Above 60 units,30 ksh per unit 
*/

#include<stdio.h>//pre processor director 

int main(){
    float units,ksh_per_unit,total_water_bill;
    // user input 
    printf("Enter your units consumed");
    scanf("%f", & units);
    
    if (units >60){
        ksh_per_unit =30;
    }    
    else if(units <30 && units <60){
            ksh_per_unit=25;
    }        
    else {      
          ksh_per_unit=25;
    } 
    
    total_water_bill = units * ksh_per_unit;
    printf("units consumed is %2.f \n",units);
    printf("ksh_per_unit is %2.f \n",ksh_per_unit);        
    printf("total_water_bill is %2.f \n",total_water_bill);
    return 0;
}