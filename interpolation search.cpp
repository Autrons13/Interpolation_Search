#include <iostream>

int interpolationSearch(int arr[], int n, int x) {
    int lo = 0, hi = n - 1;

    while (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
        if (lo == hi) {
            if (arr[lo] == x) return lo;
            return -1;
        }

        int pos = lo + (((double)(h - lo) / (arr[hi] - arr[lo])) * (x - arr[lo]));

        if (arr[pos] == x) return pos;

        if (arr[pos] < x) lo = pos + 1;

        else hi = pos - 1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 14, 19, 26, 27, 31, 33, 35, 42, 44};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 19; // elemen yang dicari

    int index = interpolationSearch(arr, n, x);

    if (index != -1) {
        std::cout << "Elemen ditemukan pada indeks " << index << std::endl;
    } else {
        std::cout << "Elemen tidak ditemukan." << std::endl;
    }

    return 0;
}
