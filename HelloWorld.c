#include <stdio.h>
#include <stdbool.h>

int main (){

    char a = 'C';
    char b[] = "Bro";

    float c = 3.2121214234234; //4 bytes (32 bits of precision) 6-7 significant digits %f
    double d = 3.2121214234234; // 8 bytes (64 bits of precision) 15-16 significant digits %lf

    bool e = true; // 1 byte (true or false) %d

    char f = 97; // 1 byte (-128 to 127) (97 lowercase a 122 lowecase z)
    unsigned char g = 255; // 1 byte (0 to 255)

    short int h = 32675; // -32786 to 32786 %d
    unsigned short int i = 32675; // 0 to 65535

    int j = 2147483647; // 4 bytes -2147483648 to 2147483647 %d in the background its long int
    unsigned int k = 4294967295; // 4 bytes 0 to 4294967295 %u

    long long int l = 86456546465465165; // 8 bytes -9 quintillion to 9 quintillion %lld
    unsigned long long int m = 96456546465465166U; // 8 bytes 0 to 18 quintillion %llu


    printf("%0.15f\n", c);
    printf("%0.15lf\n", d);
    printf("%d\n", e);
    printf("%d\n", f); // char as num
    printf("%c\n", f); // char as char
    printf("%d\n", g); // char as char
    printf("%lld\n", l); // char as char
    printf("%llu\n", m); // char as char

    return 0;
}