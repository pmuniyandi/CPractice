#include <iostream>
using namespace std;
  
// Node class to represent
// a node of the linked list.
class Customer {
    private:
        int sno;
        char name[20];
        float salary;
    public:
        Customer(int sno, char name[], float salary) {
            this->sno = sno;
            strcpy(this->name,name);
            this->salary = salary;
        }

        void display() {
             cout<<sno<<name<<salary;
         }
};

int main() {
    Customer cc(10, "Ravi",10.00);
    cc.display();

}