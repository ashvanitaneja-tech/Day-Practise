#include <iostream>
using namespace std;

int main () {

    int Age = 18;                     // int = Numbers

    char Grade = 'B';                // char = Characters 

    float PI = 3.14f;                // float = Decimal value

    bool issafe = true;              // If value is true -> 1 & False -> 0

    double price = 101.98;

    cout<< Grade << endl;           // cout<< is for print 
    cout<< sizeof(Age) << endl;
 
 
    // Implicit
    char grade = 'A';
    int value = grade;
    cout<< value << endl;

    // Explicit
    int newprice = (int)100;
    cout<< newprice << endl;


    return 0;
}


