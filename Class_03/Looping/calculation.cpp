

// Sum of odd number 1 to N
#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        
    }
    cout << "Sum of even number 1 to " << n << " is: " << sum << endl;
    
    return 0;
}