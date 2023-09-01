#include <iostream>
#include <vector>

int linearSearch(const std:: vector<int>& arr , int target){
    int iterations =0;

    for (size_t i=0; i<arr.size(); i++){
        iterations++;

        if (arr[i] == target){
            std::cout << "Element found at index "<< i << "after" << iterations << "iterations." << std::endl;
            return i;
        }
    }

    std:: cout << "Element not found after "<< iterations << "iterations."<< std::endl;
    return -1;

}

int main() {
    std::vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 5;

    int result = linearSearch(arr, target);

    if (result!= -1){
        std::cout <<"Element found at index" << result << std::endl;

    }
    return 0;
    
}
