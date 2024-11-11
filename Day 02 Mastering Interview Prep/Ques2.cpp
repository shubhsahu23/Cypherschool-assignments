#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int findMinDifference(int arr[], int n, int m) {
    if (m == 0 || n == 0) return 0;
    if (n < m) return -1;
    
    sort(arr, arr + n);
    
    int minDiff = INT_MAX;
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        minDiff = min(minDiff, diff);
    }
    
    return minDiff;
}

int main() {
    int n, m;
    cout << "Enter the number of packets: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter the number of chocolates in each packet: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the number of students: ";
    cin >> m;
    
    int result = findMinDifference(arr, n, m);
    if (result != -1) {
        cout << "The minimum difference is: " << result << endl;
    } else {
        cout << "Not enough packets for each student to get one." << endl;
    }
    
    return 0;
}
