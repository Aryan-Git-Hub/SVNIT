#include<iostream>
using namespace std;

void merge(int *arr, int start, int mid, int end) {
    int left = start, right = mid+1, index = 0;
    vector<int> temp(end-start+1);

    while (left<= mid && right<=end) {
        if (arr[left]<=arr[right]) {
            temp[index] = arr[left];
            index++; left++;
        } else {
            temp[index] = arr[right];
            index++; right++;
        }
    }

    // if left is not exhausted
    while (left<=mid) {
        temp[index] = arr[left];
        index++; left++;
    }

    // if right is not exhausted
    while (right<=end) {
        temp[index] = arr[right];
        index++; right++;
    }

    index = 0;
    for (int i = start; i <= end; i++) {
        arr[start] = temp[index];
        index++, start++;
    }
}

void mergeSort(int *arr, int start, int end) {
    if (start>=end) return;

    int mid = (start+end)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

int main() {
    int n = 8;
    int arr[8] = {3, 7, 6, -10, 15, 23, 55, -13};
    mergeSort(arr, 0, n-1);
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";

    return 0;
}