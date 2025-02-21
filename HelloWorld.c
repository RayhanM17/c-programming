#include <stdio.h>
// #include <stdbool.h>
#include <string.h>
// #include <math.h>

// void hello(char[], int); // func prototype

void sort(int[], int);

void printArray(int[], int);

int main (){

    // char a = 'C';
    // char b[] = "Bro";

    // float c = 3.2121214234234; //4 bytes (32 bits of precision) 6-7 significant digits %f
    // double d = 3.2121214234234; // 8 bytes (64 bits of precision) 15-16 significant digits %lf

    // bool e = true; // 1 byte (true or false) %d

    // char f = 97; // 1 byte (-128 to 127) (97 lowercase a 122 lowecase z)
    // unsigned char g = 255; // 1 byte (0 to 255)

    // short int h = 32675; // -32786 to 32786 %d
    // unsigned short int i = 32675; // 0 to 65535

    // int j = 2147483647; // 4 bytes -2147483648 to 2147483647 %d in the background its long int
    // unsigned int k = 4294967295; // 4 bytes 0 to 4294967295 %u

    // long long int l = 86456546465465165; // 8 bytes -9 quintillion to 9 quintillion %lld
    // unsigned long long int m = 96456546465465166U; // 8 bytes 0 to 18 quintillion %llu


    // printf("%0.15f\n", c);
    // printf("%0.15lf\n", d);
    // printf("%d\n", e);
    // printf("%d\n", f); // char as num
    // printf("%c\n", f); // char as char
    // printf("%d\n", g); // char as char
    // printf("%lld\n", l); // char as charl
    // printf("%llu\n", m); // char as char


    // %c - character
    // %s - string (array of chars)
    // %f - float
    // %lf - double
    // %d - integer

    // %.1 - decimal precision
    // %1 - minimum field width
    // %- - left align

    // float item1 = 5.75;
    // float item2 = 10.00;
    // float item3 = 100.99;

    // printf("Item 1: $%8.2f\n", item1);
    // printf("Item 2: $%-8.2f\n", item2);
    // printf("Item 3: $%8.2f\n", item3);

    // constant - fixed value that can not be altered during exe

    // const float PI = 3.14159;

    // printf("%f", PI);

    // char name[25]; //bytes
    // int age;

    // printf("What's your name? ");
    // // scanf("%s", &name); // reads until any whitespace
    // fgets(name, 25, stdin);

    // name[strlen(name) - 1] = '\0';

    // printf("How old are you? ");
    // scanf("%d", &age);

    // printf("Hello %s, how are you \n", name);
    // printf("You are %d years old \n", age);

    // double A = sqrt(9);
    // double B = pow(9, 2);
    // double C = round(9.50);
    // double D = ceil(9.45);
    // double E = floor(9.45);
    // double F = fabs(-100);

    // printf("%lf", A);l

    // switch useful alt for multiple else if

    // char grade;

    // printf("\nEnter a letter grade: ");
    // scanf("%c", &grade);

    // // if there are no breaks it will exe every case after it

    // switch(grade) {
    //     case 'A':
    //         printf("Perfect!\n");
    //         break;
    //     case 'B':
    //         printf("You did good!\n");
    //         break;
    //     case 'C':
    //         printf("You did okay!\n");
    //         break;
    //     case 'D':
    //         printf("At least its not an F!\n");
    //         break;
    //     case 'F':
    //         printf("You failed!\n");
    //         break;
    //     default:
    //         printf("Please enter valid grades!");
    // }

    // char name[] = "Bro";
    // int age = 21;

    // hello(name, age); // having a func proto determins the input count and type

    // char string1[] = "Rayhan";
    // char string2[] = "Marrero";

    // strcat(string1, string2); // concatinates
    // strncat(string1, string2, 2); //appends n char from string2
    // strcpy(string1, string2); // copy str 2 to str 1
    // strncpy(string1, string2, 1); // copys n chars from str2 to str1

    // printf("%s", string1);

    // int res = strlen(string1); // returns the len of str
    // res = strcmp(string1, string2);
    // res = strncmp(string1, string2, 1);

    // printf("%d", res);

    // for(int i = 10; i >= 1; i--) {
    //     printf("%d\n", i);
    // }

    // char name[25];
    // printf("\nWhats your name? ");
    // fgets(name, 25, stdin);

    // name[strlen(name) - 1] = '\0';

    // printf("Hello %s", name);

    int array[] = {5, 4, 8, 9, 6, 7, 1, 3};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    printArray(array, size);

    return 0;
}

// void hello(char name[], int age) {
//     printf("\nHello %s", name);    
//     printf("\nYou are %d years old", age); 
// }


// bubble sort
void sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++){
        printf("%d", array[i]);
    }
}