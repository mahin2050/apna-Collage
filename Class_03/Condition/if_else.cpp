


// Contition if,else if,else
// Chack Number

#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a Number: ";
    cin >> number;

    if(number == 0){
        cout << "Inter A Valid Number: ";
    }
    else if(number > 0){
        cout << "Number is Positive: ";
    }
    else{
        cout << "Number is Negative: ";
    }
    
    return 0;
}

