


#include <iostream>
using namespace std;
int main() {
    int mark;
    cout << "Inter The Mark: ";
    cin >> mark;
    if (mark >= 80) {
        cout << "You Got: A+ ";
    }
    else if (mark >= 70 && mark < 80) {
        cout << "You Got: A";
    }
    else if (mark >= 60 && mark < 70) {
        cout << "You Got A-";
    }
    else{
        cout << "You Got: F";
    }



    
    return 0;
}
