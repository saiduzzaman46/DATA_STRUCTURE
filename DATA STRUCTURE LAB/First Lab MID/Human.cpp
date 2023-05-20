#include <iostream>
using namespace std;

class human
{
private:
    string name;
    int nid;
    int age;
    string nationatily;


public:
    human(){}
    human(string name, int nid, int age, string nationatily)
    {
        this->name = name;
        this->age = age;
        this->nid = nid;
        this->nationatily = nationatily;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setNid(int nid)
    {
        this->nid = nid;
    }
    void setNationality(string nationatily)
    {
        this->nationatily = nationatily;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    int getNid()
    {
        return nid;
    }
    string getNationality()
    {
        return nationatily;
    }
    void displayHumanDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Nid : " << nid << endl;
        cout << "Age : " << age << endl;
        cout << "Nationality : " << nationatily << endl;
    } 
};
class Student{

};
int main()
{
    human h;
    h.setName("hello");
    h.displayHumanDetails();
    
}