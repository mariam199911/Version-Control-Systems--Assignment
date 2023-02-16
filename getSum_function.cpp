#include <iostream>
#include <vector>

int getSum(const std::vector<int>& vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    return sum;
}

int getMin(const std::vector<int>& vec) {
    int min = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] < min) {
            min = vec[i];
        }
    }
    return min;
}

int main() {
    // create a vector of 10 integers
    std::vector<int> myVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // calculate the sum of the vector
    int sum = getSum(myVec);

    // print the sum to the console
    std::cout << "The sum of the vector is: " << sum << std::endl;

    // find the minimum element of the vector
    int min = getMin(myVec);

    // print the minimum element to the console
    std::cout << "The minimum element of the vector is: " << min << std::endl;

    return 0;
}