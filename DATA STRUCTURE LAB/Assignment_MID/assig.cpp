#include <iostream>
#include <algorithm>

const int MAX_STUDENTS = 1000;

// Function to perform selection sort on an array of CGPAs
void selectionSort(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

// Function to perform binary search on an array of CGPAs
bool binarySearch(double arr[], int n, double x) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            return true;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    double cgpa[MAX_STUDENTS];
    int n, x, y;
    
    // Take input for number of students and initial CGPA values
    std::cout << "Enter the number of students: ";
    std::cin >> n;
    std::cout << "Enter the initial CGPA values:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> cgpa[i];
    }

    // Sort the CGPA values using selection sort
    selectionSort(cgpa, n);

    // Take input for number of new emails and remaining CGPA values
    std::cout << "Enter the number of new emails: ";
    std::cin >> y;
    x = n - y;
    std::cout << "Enter the remaining CGPA values:\n";
    for (int i = x; i < n; i++) {
        std::cin >> cgpa[i];
    }

    // Sort the updated CGPA values using selection sort
    selectionSort(cgpa, n);

    // Print the CGPA values in probation
    std::cout << "CGPA values in probation:\n";
    for (int i = 0; i < n; i++) {
        if (cgpa[i] < 2.5) {
            std::cout << cgpa[i] << " ";
        }
    }
    std::cout << std::endl;

    // Take input for CGPA value to search
    double searchCgpa;
    std::cout << "Enter a CGPA value to search: ";
    std::cin >> searchCgpa;

    // Perform binary search for the CGPA value
    bool found = binarySearch(cgpa, n, searchCgpa);
    if (found) {
        std::cout << "CGPA value " << searchCgpa << " is in the probation list." << std::endl;
    } else {
        std::cout << "CGPA value " << searchCgpa << " is not in the probation list." << std::endl;
    }

    return 0;
}
