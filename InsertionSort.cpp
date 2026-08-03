#include <iostream>
#include <vector>
void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(const std::vector<int>& arr) {
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;

    std::cout << "Enter the number of elements: ";
    if (!(std::cin >> size) || size <= 0) {
        std::cout << "Invalid array size." << std::endl;
        return 1;
    }

    std::vector<int> arr(size);

    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "\nOriginal array: ";
    printArray(arr);

    // Sort the array
    insertionSort(arr);

    std::cout << "Sorted array:   ";
    printArray(arr);

    return 0;
}
