#include<iostream>
using namespace std;

int main() {
    int cnt;
    cout << "Enter number of activities to be performed: ";
    cin >> cnt;

    int s[] = {1,3,0,5,8,5}, e[] = {2,4,6,7,9,9};

    int p, q;

    cout << "Following activities are selected: " << endl;
    p = 0;
    cout << "(" << s[p] << ", " << e[p] << "), ";
    
    for (q = 1; q < cnt; q++) {
        if (s[q] >= e[p]) {
            cout << "(" << s[q] << ", " << e[q] << "), ";
            p = q;
        }
    }
    return 0;
}
