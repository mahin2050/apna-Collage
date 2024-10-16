

// Chack a number the number is Prime or Not prime


#include <iostream>
using namespace std;
int main() {

    int number;
    cout << "Inter a Number: ";
    cin >> number;
    for (int i = 2; i <= number-1; i++)
    {
        if(number % i != 0){
            cout << number << " is Prime Number " << endl;
            break;
        }
        else{
            cout << number << " is Not Prime Number " << endl;
            break;
        }
    }
    
    
    return 0;
}