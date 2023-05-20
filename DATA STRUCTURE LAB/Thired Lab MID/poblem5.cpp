#include <iostream>

using namespace std;
int main()
{
    int arr[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int count[10] = {0};

    for (int i = 0; i < 10; i++) {
        count[arr[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            cout << i << " occurs " << count[i] << " times." << endl;
        }
    }


    return 0;
}