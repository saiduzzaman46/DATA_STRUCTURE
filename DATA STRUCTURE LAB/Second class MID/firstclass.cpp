#include <iostream>
using namespace std;
string temparature(int temp)
{
    if (temp == 25)
    {
        cout << "ok" << endl;
    }
    else if (temp > 25)
    {
        cout << "Is hot" << endl;
    }
    else
    {
        cout << "cool" << endl;
    }
}

string grades(int score)
{
    if (score < 0 || score > 100)
    {
        cout << "Invalid Number,Grade must be between 0 and 100" << endl;
    }
    else
    {
        switch (score / 5)
        {
        case 20:
            cout << "A+" << endl;
            break;
        case 19:
            cout << "A+" << endl;
            break;
        case 18:
            cout << "A+" << endl;
            break;
        case 17:
            cout << "A" << endl;
            break;
        case 16:
            cout << "B+" << endl;
            break;
        case 15:
            cout << "B" << endl;
            break;
        case 14:
            cout << "C+" << endl;
            break;
        case 13:
            cout << "C" << endl;
            break;
        case 12:
            cout << "D+" << endl;
            break;
        case 11:
            cout << "D" << endl;
            break;
        case 10:
            cout << "D" << endl;
            break;
        default:
            cout << "F" << endl;
            break;
        }
    }
}
int main()
{
    cout << "Hello World" << endl;
    cout << "Name : Saiduzzaman Sohag" << endl;
    cout << "ID : 22-46006-1" << endl;

    // int temp;
    // cout<<"Enter current Temparature : ";
    // cin>>temp;
    // temparature(temp);

    int score;
    char n;
    do
    {
        cout << "Enter your Score : ";
        cin >> score;
        grades(score);
        cout << "Do you want to enter another score? (Y/N) : ";
        cin >> n;
    } while (n == 'Y' || n == 'y');

    return 0;
}