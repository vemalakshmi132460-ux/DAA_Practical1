#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true; // Mark that a swap occurred
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    vector<int> arr(size);

    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
  
    bubbleSort(arr);

    cout << "Sorted array in ascending order:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
