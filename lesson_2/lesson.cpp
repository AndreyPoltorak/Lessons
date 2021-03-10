#include "iostream"
#include "string"

using namespace std;

struct field_of_play
{
    string name_1; // Имя игрока №1
    string name_2; //Имя игрока №2
    int field[9]; // Поле для игры ; -1 пусто, 0 - нолик, 1 - крестик;
    unsigned char symbol_x; // символ для крестика
    unsigned char symbol_o; // символ для нолика
};

union value {
    unsigned char uc0;
    char c0;
    short s0;
    int i0;
    long l0;
    long long ll0;
    double d0;
    float f0;
};


struct t_type {
    unsigned char type;
    int is_unsigned_char : 1; 
    int is_char : 1;
    int is_short : 1;
    int is_int : 1;
    int is_long : 1;
    int is_long_long : 1;
    int is_double : 1;
    int is_float : 1;
};



int main()
{
    setlocale(LC_ALL, "Russian");
    
    cout << "Начало!" << endl;
    
    unsigned char uc0 = 0x01;
    unsigned short us0 = 0x0101;
    char c0 = -1;
    short s0 = -2;
    int i0 = 100;
    long l0 = 10000;
    long long ll0 =1000000;

    double d0 = 11.0;
    float f0 = 12.2;

    char c1 = 'a';

    // sx - символ крестика
    // so - символ нолика
    // 11-12, 43-45, 48-49, - должны бать в паре
    enum SYMBOL {sx0 = 11 , sx1 = 35, sx2 = 43, sx3 = 49, sx4 = 88, sx5 = 120, 
    so0 = 12, so1 = 9, so2 = 45, so3 = 48 ,so4 = 15, so5 = 79, so6 = 111};

    unsigned char array_c0[13] = {sx0, sx1, sx2, sx3, sx4, sx5, 
    so0, so1, so2, so3, so4, so5 , so6} ;

    //Терминал не отображает "экзотические" символы((( Не искал проблему и не пробовал решить

    cout << "Конец!" << endl;
    return 0;
}