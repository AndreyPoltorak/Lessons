#include "iostream"

using namespace std;
// 1 and 3
extern int a;
extern int b;
extern int c;
extern int d; 
 
void initialization();

int main()
{
    initialization();
    double result ;
    result = a * (b + (c/ double(d)));
    cout << result << endl;
// 2
    int i0 = 22;
    cout << ((i0<21)?(i0-21):(2*(i0-21)))<< endl;
// 4
int array[3][3][3] = {{{0,0,0},{0,0,0},{0,0,0}},
{{0,0,0},{0,1,0},{0,0,0}},{{0,0,0},{0,0,0},{0,0,0}}};
int *p = &array[0][0][0];

cout << (*(p+13)) << endl;

   return 0; 
}