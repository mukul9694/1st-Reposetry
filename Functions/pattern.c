// #include <stdio.h>
//
// void print(int n)
//{
//     if(n == 0)
//     return;
//         print(n-1);
//     for(int i=1;i <= n;i++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
//
// int main()
//{
//     print(5);
// }
//

#include <stdio.h>

void print(char ch, int n)
{
    if (n <= 0)
        return;
    printf("%c", ch);
    print(ch, n - 1);
}

void pyramid(int row, int n)
{
    if (row > n)
        return;
    print(' ', n - row);
    print('*', 2 * row - 1);
    printf("\n");
    pyramid(row + 1, n);
}

int main()
{
    pyramid(1, 10);
    return 0;
}