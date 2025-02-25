// Write a C++ program to print right oriented right angled pyramid.
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;
int main() {
    int rows;
    int num = 1;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= rows; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << num << " ";
            num++; 
        }
        cout<< endl;
    }
      return 0;
}
