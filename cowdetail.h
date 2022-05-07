#include<stdio.h>

struct DOB { // Date object
    int date; // dd 
    char month[10]; // mm -> month noumber, mon -> month name
    int year; // yy -> two digit year number, yyyy -> four digit 

};

struct CowDetail{
    int cowid;
    struct DOB dob1; // char dob[10] -> dd/mm/yyyy -> day of brith
    char colour[10];
    char breed[20];
    char gender[10];
};
  // main variable
struct CowDetail readCowDetail(){  // this cow1 is local to read
    struct CowDetail cow1;
    printf("enter cow id:");
    scanf("%d",&cow1.cowid);
    printf("enter cow DOB:");
    scanf("%d%s%d",&cow1.dob1.date,cow1.dob1.month,&cow1.dob1.year);
    printf("enter cow colour:");
    scanf("%s",cow1.colour);
    printf("enter cow breed:");
    scanf("%s",cow1.breed);
    printf("enter cow gender:");
    scanf("%s",cow1.gender);
    return cow1;
}
int displayCowDetail(struct CowDetail cow1){
    printf("\ncow id:     %d",cow1.cowid);
    printf("\ncow dob:    %d %s %d",cow1.dob1.date,cow1.dob1.month,cow1.dob1.year); // differen
    printf("\ncow colour: %s",cow1.colour);
    printf("\ncow breed:  %s",cow1.breed);
    printf("\ncow gender: %s",cow1.gender);
    return 0;
}