// rectangle
// #include <stdio.h>
// int main(){
//     int w, h;
//     char c;

//     scanf(" %d %d %c", &w, &h, &c);

//     for(int i = 0; i < w;i++){
//         for(int j = 0; j < h;j++){
//             printf(" %c", c);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//  c c c c c c
//  c c c c c c
//  c c c c c c
//  c c c c c c
//  c c c c c c

// chess board
// #include <stdio.h>
// int main(){
//     for(int i = 0; i < 6;i++){
//         for(int j = 0; j < 6; j++){
//             if((i+j) % 2 == 0){
//                 printf("#");
//             }else {
//                 printf(".");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #.#.#.
// .#.#.#
// #.#.#.
// .#.#.#
// #.#.#.
// .#.#.#

// traingle
// #include <stdio.h>
// int main(){
//     int h;
//     for(int i = 0; i < h;i++){
//         for(int j = 0; j <= i; j++){
//             if((i+j) % 2 == 0){
//                 printf("1");
//             }else {
//                 printf("0");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 1
// 01
// 101
// 0101
// 10101
// 010101

//flip triangle
// #include <stdio.h>
// int main(){
//     int n;
//     for(int i = 0; i < n;i++){
//         for(int j = 0; j < n - i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// *******
// ******
// *****
// ****
// ***
// **
// *


// square triangle
// #include <stdio.h>
// int main(){
//     int n;
//     scanf(" %d", &n);
//     for(int i = 0; i < n;i++){
//         for(int j = 0; j < i + 1; j++){
//             printf("1 ");
//         }
//         for(int k = 0; k < n - 1 - i; k++){
//             printf("0 ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 1 0 0 0 0 
// 1 1 0 0 0
// 1 1 1 0 0
// 1 1 1 1 0
// 1 1 1 1 1

// pyramid
// #include <stdio.h>
// int main(){
//     int n;
//     scanf(" %d", &n);
//     for(int i = 0; i < n;i++)
//     {
//         for(int k = 0; k < n - 1 - i;k++)
//         {
//             printf(" ");
//         }
//         for(int j = 0; j < i + 1;j++){
//             printf("1 ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
//      1 
//     1 1
//    1 1 1
//   1 1 1 1
//  1 1 1 1 1
// 1 1 1 1 1 1

// star triangle
// #include <stdio.h>
// int main(){
//     int n;
//     scanf(" %d", &n);
//     for(int i = 0; i < n; i++)
//     {
//         for(int k = 0; k < n - 1 - i; k++)
//         {
//             printf("  ");
//         }
//         for(int j = 0; j < i + 1; j++)
//         {
//         printf("* ");
//         }
//     printf("\n");
//     }
//     return 0;
// }
//         * 
//       * *
//     * * *
//   * * * *
// * * * * *

// ไม้กางเขน
// #include <stdio.h>
// int main(){
//     for(int i = 0; i < 6;i++){
//         for(int j = 0; j < 1;j++){
//             printf("  *");
//         }
//         printf("\n");
//     }
//     for(int i = 0; i < 1;i++){
//         for(int j = 0; j < 7;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i = 0; i < 6;i++){
//         for(int j = 0; j < 1;j++){
//             printf("  *");
//         }
//         printf("\n");
//     }
//     return 0;
// }
//   *
//   *
//   *
//   *
//   *
// *******
//   *
//   *
//   *
//   *
//   *
//   *

//diamond
// #include <stdio.h>
// int main(){
//     int n;
//     scanf(" %d", &n);
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n-i; j++){
//             printf(" ");
//         }
//     for(int j = 1; j <= 2*i-1;j++){
//         printf("*");
//     }
//         printf("\n");
//     }
//     for(int i = n-1; i >= 1; i--){
//         for(int j = 1; j <= n-i; j++){
//             printf(" ");
//         }
//     for(int j = 1; j <= 2*i-1; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

//diamond with out line
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
       
//         for(int j = 1; j <= n-i; j++){
//             printf("0 ");
//         }
     
//         for(int j = 1; j <= 2*i-1; j++){
//             printf("1 ");
//         }
     
//         for(int j = 1; j <= n-i; j++){
//             printf("0 ");
//         }
//         printf("\n");
//     }


//     for(int i = n-1; i >= 1; i--){
//         for(int j = 1; j <= n-i; j++){
//             printf("0 ");
//         }
//         for(int j = 1; j <= 2*i-1; j++){
//             printf("1 ");
//         }
//         for(int j = 1; j <= n-i; j++){
//             printf("0 ");
//         }
//         printf("\n");
//     }

//     return 0;
// }




// 0 0 0 0 1 0 0 0 0
// 0 0 0 1 1 1 0 0 0
// 0 0 1 1 1 1 1 0 0
// 0 1 1 1 1 1 1 1 0
// 1 1 1 1 1 1 1 1 1
// 0 1 1 1 1 1 1 1 0
// 0 0 1 1 1 1 1 0 0
// 0 0 0 1 1 1 0 0 0
// 0 0 0 0 1 0 0 0 0 


// cross
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(j == i || j == n-1-i){
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// *   *
//  * *
//   *
//  * *
// *   *