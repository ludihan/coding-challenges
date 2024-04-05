#include <stdio.h>

int main(void) {
    int input;
    scanf("%d", &input);
    puts((char*[]){
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December",
            }[input - 1]);
    return 0;
}
