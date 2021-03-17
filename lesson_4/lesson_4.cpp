#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    ///// 1
    int i0 = 9;
    int  i1 = 0;
    if(((i0 + i1)>20) || ((i0 + i1)<10) )
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "true" <<endl;
    }
    ///////// 2
    int i3 = 11;
    bool prostoe_d = false;
    if(i3>0)
    {
        prostoe_d = true;
        for(int i = 2; i < i3; i++)
            {
                if(!(i3%i))
                {
                    prostoe_d = false;
                    break;
                }
            }
    }
    if(prostoe_d)
    {
        cout << "i3 - простое число" << endl;
    }
    else
    {
        cout << "i3 -  не простое число" << endl;
    }

//3
const int i4 = 7;
const int i5 = 3;
if(((i4 + i5)==10) || (i4==10 && i5 ==10))
{
    cout << "true" << endl;
}
else
{
    cout << "false" << endl;
}

/// 4
int year = 400;
if(year%4)
{
    cout << "год -  " << year << " является не високосным"<< endl; 
}
else
{
    if(year%100)
    {
        cout << "год -  " << year << " является високосным"<< endl;
    }
    else
    {
        if(year%400)
        {
            cout << "год -  " << year << " является не високосным"<< endl;
        }
        else
        {
            cout << "год -  " << year << " является високосным"<< endl;
        }
    }
}
    return 0; 
}