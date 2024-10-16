









// Nasted Looping Used For Peramid Making
#include <iostream>
using namespace std;
int main() {

    int row;
    int col;
    cout << "Inter The Row Number: ";
    cin >> row;
    cout << "Inter The col Number: ";
    cin >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i  == j)
            {
                cout << "*";
            }
            
        }
        cout << endl;
    }
    
    
    return 0;
}