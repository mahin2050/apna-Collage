

#include <iostream>
using namespace std;
int main() {


    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote. You are eligible to vote.";
    }
    else{
        cout << "You can't vote. You are not eligible to vote.";
    }
    
    
    return 0;
}