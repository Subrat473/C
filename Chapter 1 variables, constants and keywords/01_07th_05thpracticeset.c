#include<stdio.h>

int main() {
    int principal = 100, rate = 8, years = 1;
    int simpleinterest = (principal*rate*years)/100;
    printf("The value of simple interst is %d", simpleinterest);
    return 0;
}