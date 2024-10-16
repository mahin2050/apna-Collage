



// For Loop Using --- Sum of Number
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Inter The Number Do you want Count Range: ";
    cin >> number;
    int sum = 0;
    for (int i = 0; i <= number; i++)
    {
        sum = sum + i;
    }
    cout << "Your Total Sum is: " << sum << endl;





    return 0;
}