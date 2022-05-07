#include <stdio.h>
#include "cowdetail.h"
#include "userdetail.h"
#include "doctorvisit.h"
#include "expense.h"
#include "feeddetail.h"
#include "milkingdetail.h"

int main(){
    // Declare all six object
    struct CowDetail cow1; 
    struct userDetail user1; 
    struct CowDetail cow1; 
    struct CowDetail cow1; 
    struct CowDetail cow1; 
    struct CowDetail cow1; 

    cow1 = readCowDetail(); // passing main variable
    user1 = readUserDetail(); // passing main variable
    doctorVisit1 = readUserDetail(); // passing main variable
    displayCowDetail(cow1); // may not same data because or different
    return 0;
}