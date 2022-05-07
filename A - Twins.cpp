#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (arr[j] > key && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n; cin >> n;
    int arr[100];
    int arrSum = 0;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        arr[i] = num;
        arrSum += num;
    }
    insertionSort(arr, n);
    int totalCoins = 0;
    int sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum += arr[i];
        totalCoins++;
        if (sum > (arrSum / 2) )
            break;
    }
    cout << totalCoins;
    return 0;
}
