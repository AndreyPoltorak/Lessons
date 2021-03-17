#include <iostream>

#define PROVERKA(x,y) (((x)>=0 && (x)<(y))?"yes":"no")
#define DOSTUP(mass,x,y) (*(*((mass)+(x))+(y)))
#define RAZMER(mass,type) ((sizeof(mass))/sizeof(type))
int main()
{   //1
    std::cout << PROVERKA(4,7)<<std::endl;
    std::cout << PROVERKA(7,7)<<std::endl;
    //2
    int M = 3; 
    int N = 4; 
    int i, j;
    int** matrix = new int*[M]; 
 
    for ( i = 0; i < M; i++) 
        matrix[i] = new int[N];

    matrix[2][2] = 10;    
    
    std::cout << DOSTUP(matrix,2,2) <<std::endl; 
    int mass[2][2] ={{0,1},{2,3}};
    std::cout << DOSTUP(mass,0,1) <<std::endl;

    std::cout<<RAZMER(mass,int);

    return 0;
}