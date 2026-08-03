#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in the remaining unsorted array
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]);
        }
    }
}

// Helper function to print the array
void printArray(const std::vector<int>& arr) {
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> data = {64, 25, 12, 22, 11};
    
    std::cout << "Original array: ";
    printArray(data);

    selectionSort(data);

    std::cout << "Sorted array:   ";
    printArray(data);

    return 0;
}
