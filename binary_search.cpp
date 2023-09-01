#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int iterations = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        iterations++;

        if (arr[mid] == target) {
            std::cout << "Element found after " << iterations << " iterations." << std::endl;
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    std::cout << "Element not found." << std::endl;
    return -1;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 10;

    int result = binarySearch(arr, target);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    }

    return 0;
}

