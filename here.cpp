#include <iostream>
#include <algorithm> // for sorting

using namespace std;

int main() {
    double sales[5];
    
    // Enter sales amounts
    int count = 0;
    do {
        cout << "Enter sale amount " << (count + 1) << ": ";
        cin >> sales[count];
        count++;
    } while (count < 5);
    
    // Sort the array in descending order
    sort(sales, sales + 5, greater<double>());
    
    // Print the array in reverse order
    cout << "Sales amounts in descending order: " << endl;
    for (int i = 4; i >= 0; i--) {
        cout << sales[i] << endl;
    }
}