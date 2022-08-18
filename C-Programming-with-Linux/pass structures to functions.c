#include <stdio.h>

struct date {
    int y;

};



int main(void) {
    struct date today [5];
    today[4].y = 4;
    (today+4).y = 5;
    return 0;
}

