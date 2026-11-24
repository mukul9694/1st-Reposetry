// #include <stdio.h>
//
// int main()
//{
//     int n, sp;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int sp = 1; sp <= n - i; sp++)
//         {
//             printf(" ");
//         }
//
//         if (i == 1)
//         {
//             printf("*");
//         }
//         else if (i == n)
//         {
//             for (int j = 1; j <= 2 * i - 1; j++)
//             {
//                 printf("*");
//             }
//         }
//         else
//         {
//             printf("*");
//
//             for (sp = 1; sp <= 2 * i - 3; sp++)
//             {
//                 printf(" ");
//             }
//             printf("*");
//         }
//         printf("\n");
//     }
//}

//#include <stdio.h>
//int main()
//{
//    int n;
//    printf("Enter the number of rows: ");
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        for (int sp = 1; sp <= i-1; sp++)
//        {
//            printf(" ");
//        }
//        int ch = 65;
//        for (int j = 1; j <= 2*(n - i) + 1; j++)
//        {
//            printf("%c", ch++);
//        }
//        printf("\n");
//    }
//}


#include <stdio.h>

int main(void) {
    for (int row = 6; row >= 0; row--) {
        for (int col = 0; col < 13; col++) {
            if (col <= row) {
                printf("%c", 'A' + col);
            } else if (col < 12 - row) {
                printf(" ");
            } else {
                printf("%c", 'A' + (12 - col));
            }

            if (col < 12) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}