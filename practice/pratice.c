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

#include <stdio.h>

void main() {
    
    //create a bunch of variables 
    int seats = 0;
    int stop = 0;
    int passengers = 0;
    int max = 0;
    int exceeds = 0;

    //scan and store the bus seats and stop
    scanf("%d %d" , &seats, &stop);

    //loop at stop iteration
    for (int BusStop = 1; BusStop <= stop; BusStop ++){
         
        //create a variable that holds the amount of passenger who get in and get out of the bus
        int out , in;
        printf("at bus stop : %d\n" , BusStop);
        printf("passenger out and in : ");

        //check if the value is positive or not
        while (scanf("%d %d" , &out , &in))
        {
            if (out >= 0 && in >= 0) {break;}
            printf("please input a positive number\n");
        }

        //do the math
        passengers -= out;
        passengers += in;

        //check
        //if "seats" > "max" if yes then set max to equa to the amount of seats (or passengers)
        if (passengers > max) {max = passengers;}

        //check 
        //if theres no value inside exceeds and the number of passengers is exceeds or not 
        //if yes then set exceeds to equal to bustop
        if (!exceeds && passengers > seats) {exceeds = BusStop;}
        
    }

    //if exceeds has value then print out
    if (exceeds) {printf("passenger exceeds at bus stop %d\n" , exceeds);}

    printf("Final passenger is : %d\n" , passengers);
    printf("Max passenger is : %d\n" , max);
    
}
//   *
//  * *

// *   *
