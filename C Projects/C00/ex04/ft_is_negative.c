#include <unistd.h>

void ft_is_negative(int n)
{
    char positive = 'P';
    char negative = 'N';

    if (n < 0)
        write(1, &negative, 1);
    else
        write(1, &positive, 1);
}

// int main() {
//     ft_is_negative(1);
//     ft_is_negative(-1);
//     ft_is_negative(12);
//     ft_is_negative(-2);
// }