struct person {  // new data type name is "struct person. it simmilar int"
    char name[20];
    char phone[10];
    float height;
    float weight;
};

float calculateBMI(struct person person1) {
    float hm, bmi;
    hm = person1.height / 100; //
    bmi  = person1.weight / (hm * hm);
    return bmi;
}

int healthStatus(struct person person1) {
    float bmi;
    int healthStatus = 0;
    bmi  = calculateBMI(person1);
    if(bmi < 18.5) {
        healthStatus = -1;
    }
    if(bmi >=18.5 && bmi <=24.9) {
       healthStatus = 0; 
    }
    if(bmi > 24.9) {
        healthStatus = 1;
    }
    return healthStatus;
}


// 18.5 < underweight
// 18.5 and 24.9 = normail weight
// >24.9 overweight
