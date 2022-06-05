#include<stdio.h>
#include "person.h"
#include "bill.h"

int main() {
    struct bill bill1; // creating variable for user defined data
    float billamount;
    printf("Customer Name ? ");
    scanf("%s", bill1.cust.name); // access member variable of user defined data type
    printf("Phone ? ");
    scanf("%s", bill1.cust.phone);
    printf("Item name ? ");
    scanf("%s",bill1.it.name);
    printf("Price ? ");
    scanf("%f",&bill1.it.price);
    printf("Quantity ? ");
    scanf("%d",&bill1.qty);
    printf("\nName : %s\n", bill1.cust.name);
    printf("Phone : %s\n", bill1.cust.phone);
    printf("Item Name : %s\n", bill1.it.name);
    printf("Item Price : %.2f\n", bill1.it.price);
    printf("Quantity : %d\n", bill1.qty);
    //billamount = bill1.it.price * bill1.qty;
    billamount = billAmount(bill1);
    printf("Bill Amount : %.2f\n", billamount);
}

/*int main() {
    float hm, bmi;
    int hs;
    struct person person1; // creating variable for user defined data
    printf("Name ? ");
    scanf("%s", person1.name); // access member variable of user defined data type
    printf("Phone ? ");
    scanf("%s", person1.phone);
    printf("Height ? ");
    scanf("%f",&person1.height);
    printf("Weight ? ");
    scanf("%f",&person1.weight);
    bmi = calculateBMI(person1); 
    hs = healthStatus(person1); 
    printf("Name : %s\n", person1.name);
    printf("Phone : %s\n", person1.phone);
    printf("Height : %.2f\n", person1.height);
    printf("Weight : %.2f\n", person1.weight);
    printf("BMI : %.2f\n", bmi);
    printf("Health Status : %s Weight \n", (hs==0?"Normal":(hs==1?"Over":"Under")));
}*/