struct item {
    char name[20];
    float price;
};

struct customer {
    char name[40];
    char phone[10]; // "(044) 1234 567 789"  
};

struct bill {
    struct customer cust;
    struct item it;
    int qty;
};

// Business function
float billAmount(struct bill bill1) {
    float billamount;
    billamount = bill1.it.price * bill1.qty;
    return billamount;
}
//nested user defined data type.