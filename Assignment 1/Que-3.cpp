#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& data, int start, int end) {

    int pv = data[end];

    int k = start - 1;
  
    for (int x = start; x <= end - 1; x++) {
        if (data[x] < pv) {
            k++;
            swap(data[k], data[x]);
        }
    }
    swap(data[k + 1], data[end]);  
    return k + 1;
}
void quickSort(vector<int>& data, int start, int end) {
  
    if (start < end) {
        int p = partition(data, start, end);
        quickSort(data, start, p - 1);
        quickSort(data, p + 1, end);
    }
}

int main() {
    vector<int> arr = {4,2,6,9,2};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
  
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
