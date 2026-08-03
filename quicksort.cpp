#include <iostream>
#include <vector>
#include <algorithm>
int partition(std::vector<int>& arr, int low, int high) {
  
    int pivot = arr[high]; 
    int i = low - 1; 

    for (int j = low; j < high; j++) {
      
        if (arr[j] <= pivot) {
            i++; 
            std::swap(arr[i], arr[j]);
        }
    }
   
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int size;
    std::cout << "Enter the number of elements: ";
    if (!(std::cin >> size) || size <= 0) {
        std::cerr << "Invalid array size." << std::endl;
        return 1;
    }

    std::vector<int> arr(size);
    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    quickSort(arr, 0, size - 1);
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
