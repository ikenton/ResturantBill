/*
Outline:
Resturant Bill:
1. create an void main function that takes in 2 doubles(tax and tip percentage)

2. create 4 meal costs as doubles
double salad = 9.95;
double soup = 4.55;
double sandwich = 12.25;
double pizza = 22.35;

3. create a random method to select a meal cost. Maybe associate each meal with a number value 0-3. create an if statement to calculate that.

4. calculate total bill cost. 
tip =/ 100;
tip=*mealcost;
tax =/ 100;
tax =* mealcost;
total = mealcost + tax + tip

5. print out meal, tax, tip and total bill
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(int argc, char *argv[]){
    double mealcost;
    double total;
    double taxed = atoi(argv[1]);
    double tipped= atoi(argv[2]);

    //random number 0-3
    int num;
    srand(time(0));
    num = rand() % 3;

    if(num == 0){
        mealcost = 9.95;
    } else if(num == 1){
        mealcost = 4.55;
    }else if(num == 2){
        mealcost = 12.25;
    }else if(num == 3){
        mealcost = 22.35;
    }

    tipped /= 100;
    tipped *= mealcost;
    taxed /= 100;
    taxed *= mealcost;
    total = mealcost + taxed + tipped;

    printf("\t TOTAL BILL\n");
    printf("Meal cost: $%.2f\n", mealcost);
    printf("Tip: $%.2f\n", tipped);
    printf("Tax: $%.2f\n", taxed);
    printf("************************\n");
    printf("TOTAL COST: $%.2f\n", total);
    
}