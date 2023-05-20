#include <iostream>
using namespace std;
void SelectionSort(double a[], int n)
{
    int k;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = k = i; j < n; j++)
        {
            if (a[j] < a[k])
            {
                k = j;
            }
        }
        double temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }
}
int BinarySearch(double arr[], double key, int size)
{
    int low = 0;
    int high = size - 1;
    bool flag = false;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return mid;
            break;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, cgpa, x;
    int count = 0;
    cout << "How many students?" << endl;
    cin >> n;
    double student[n];
    cout << "How many CGPAs you would like to enter at this moment?" << endl;
    cin >> cgpa;
    cout << "Enter CGPAs of " << cgpa << " students : " << endl;
    for (int i = 0; i < cgpa; i++)
    {
        cin >> student[count];
        count++;
    }

    SelectionSort(student, count);
    cout << "Sorted CGPA of probation students : " << endl;
    for (int i = 0; i < cgpa; i++)
    {
        if (student[i] < 2.50)
        {
            cout << student[i] << " ";
        }
    }
    cout << endl;
    cout << "How many additional CGPAs are received from the remaining CGPAs?" << endl;
    cin >> x;
    cout << "Enter CGPAs of the " << x << " newly received CGPAs : " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> student[count];
        count++;
    }

    SelectionSort(student, count);
    cout << "Sorted CGPA of probation students : " << endl;
    for (int i = 0; i < count; i++)
    {
        if (student[i] < 2.50)
        {
            cout << student[i] << " ";
        }
    }
    cout << endl;
    cout << "Enter a CGPA to search in the probation list: " << endl;
    double search;
    cin >> search;
    double result = BinarySearch(student, search, count);

    if (result == -1)
    {
        cout << "The entered " << search << " CGPA can't be found in the probation CGPA list" << result;
    }
    else
    {
        cout << "The entered " << search << " CGPA can be found in the probation CGPA list" << result;
    }
    return 0;
}