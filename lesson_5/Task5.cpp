#include <stdarg.h>
namespace Tasks
{

        void task_5(int N, ...)
    {
        va_list ap;
    int j;
    double sum = 0;
    va_start(ap, N); // Требуется чтобы получить адрес первого
    for (j = 0; j < N; j++) 
    {
        int *k = va_arg(ap, int*); // Увеличивает ap до следующего аргумента.
        *k=*k^0x01;
    }
    va_end(ap);
    

    }
}