#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {900, 910, 920, 1100, 1120};
    int dep[] = {940, 1200, 950, 1130, 1140};

    int sz = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + sz);
    sort(dep, dep + sz);

    int curr = 1, mx = 1;
    int a = 1, b = 0;

    while (a < sz && b < sz) {
        if (arr[a] <= dep[b]) {
            curr++;
            mx = max(mx, curr);
            a++;
        } else {
            curr--;
            b++;
        }
    }

    cout << "Minimum number of platforms required: " << mx << endl;

    return 0;
}
