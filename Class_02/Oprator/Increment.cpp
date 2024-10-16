



/*
1. Pre - Increment (++a)
2. Pos - Increment(a++)
*/

#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 10;
    int inre = ++a;  // Pre - Increment (++a)
    cout << inre << endl;

    int news = a++; //Pos - Increment(a++)
    cout << news << endl;
    cout << news << endl;
    cout << b++ << endl;
    cout << ++b << endl;

    


    return 0;
}
