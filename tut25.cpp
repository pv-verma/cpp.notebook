#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "enter id of the employee " << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "the id os this employee is " << id << endl;
    }
};

int main()
{
    /*
    employee harry, rohan, lovish, shruti;
    harry.setId();
    harry.getId();
    */
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}