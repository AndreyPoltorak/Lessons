#include <iostream>

#include "Task1.cpp"
#include "Task2.cpp"
#include "Task3.cpp"
#include "Task4.cpp"
#include "Task5.cpp"

//void Tasks::task_1(int *mass, int size_mass);
//void task_2(int *mass, int size_mass = 8);
//bool task_3(int mass[], int size_mass);
//void task_4(int *mass, int size_mass, int n);
//void task_5(int N, ...);

int main()
{
    //1
    int mass[10] = {1,0,1,0,1,0,1,0,1,0};
    void (*func1) (int*,int);
    func1 = Tasks::task_1;
    func1(mass,10);
    //Tasks::task_1(mass,10);

    for(int i = 0; i < 10; i++)
    {
        std::cout << mass[i] << " ";
    }
    std::cout<<std::endl;
    //2
    int mass_2[8]= {};
    void (*func2) (int *, int );
    func2 = Tasks::task_2;
    func2(mass_2,8);
    //task_2(mass_2);
    for(int i = 0; i < 8; i++)
    {
        std::cout << mass_2[i] << " ";
    }
    std::cout<<std::endl;

    //3
    bool (*func3) (int mass[], int size_mass);
    func3 = Tasks::task_3;
    int primer_1[5] = {1,1,1,2,1};
    std::cout << func3(primer_1,5) << " ";
    int primer_2[5] = {3,1,1,2,1};
    std::cout << func3(primer_2,5) << " ";
    int primer_3[8] = {1,1,1,2,1,1,1,1};
    std::cout << func3(primer_3,8) << std::endl;

    //4
    int primer[5] = {1,2,3,4,5};

    void (*func4) (int*,int,int);
    func4 = Tasks::task_4;
    func4(primer,5,3);

    for(int i = 0; i < 5; i++)
    {
        std::cout << primer[i] << " ";
    }
    std::cout<<std::endl;
    //5
    void (*func5) (int N, ...);
    func5 = Tasks::task_5;
    func5(10,&mass[0],&mass[1],&mass[2],&mass[3],&mass[4],&mass[5],&mass[6],&mass[7],&mass[8],&mass[9]);

    for(int i = 0; i < 10; i++)
    {
        std::cout << mass[i] << " ";
    }
    std::cout<<std::endl;
    return 0;
}









