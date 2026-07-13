#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of employee is " << id << " and this is employee number ." << endl;
    }

    static void getcount(void)
    {
        // cout<<id;   // throws an error
        cout << "the value of count is " << count << endl;
    }
};

// COUNT IS THE STACTIC DATA MEMBER OF EMPLOYEE

int employee ::count; // default value is zero

int main()
{
    employee harry, rohan, lovish;

    // harry.id = 1;
    // haary.count = 1 ;  // cannot do this as id and count are private

    harry.setData();
    harry.getdata();

    employee ::getcount();

    rohan.setData();
    rohan.getdata();
    employee ::getcount();

    lovish.setData();
    lovish.getdata();
    employee ::getcount();

    return 0;
}