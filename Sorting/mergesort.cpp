#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    vector<int> v;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            v.push_back(arr[left]);
            left++;
        }
        else {
            v.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        v.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        v.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = v[i - low];
    }
}

void mergesort(int arr[], int low, int high) {
    if (low < high) { // Corrected condition
        int mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void printarr(int arr[], int n) { // Corrected return type
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printarr(arr, n);
    int low = 0;
    int high = n - 1;
    mergesort(arr, low, high);
    cout << endl;
    printarr(arr, n);
    return 0; // Added return statement to main
}

