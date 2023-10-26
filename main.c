#include <stdio.h>

int Policz(int a, int b){
    return a * b;           //zmiana dodawania na mnozenie
}

int main() {
    printf("Hello, World!\n");
    printf("W pierwszym branchu 2 * 3 = %d\n", Policz(2,3));
    return 0;
}
