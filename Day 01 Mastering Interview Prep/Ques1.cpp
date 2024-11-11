#include <iostream>
#include <climits>
using namespace std;

void findMinMax(int arr[], int n) {
    int minElem = INT_MAX;
    int maxElem = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] < minElem) {
            minElem = arr[i];
        }
        if (arr[i] > maxElem) {
            maxElem = arr[i];
        }
    }

    cout << "Minimum element is: " << minElem << endl;
    cout << "Maximum element is: " << maxElem << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findMinMax(arr, n);
    return 0;
}