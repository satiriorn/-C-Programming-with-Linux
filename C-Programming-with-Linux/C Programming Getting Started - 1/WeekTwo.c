// Hello mooc
/*
#include <stdio.h>
int main(void) {
    printf("Hello mooc");
    return 0;
}
*/


// Correct simple syntax errors
/*
#include <stdio.h>

int main(void) {
    printf ("This is code with errors: ");
    printf ("Fix them!");
    return 0;
}

*/


// Print text over several lines
/*
#include <stdio.h>
int main(void){
    printf("""I already know how to:\n- Print text to the screen.\n- Start a new line.\n- Fix errors.""");
    return 0;
}
*/


//Print multiple lines
/*

#include <stdio.h>
int main(void){
    printf("*****\n**|**\n*|.|*\n|...|\n.....\n");
    return 0;
}

*/


//Activity: print special characters
/*
#include <stdio.h>
int main(void){
    printf("Dennis Ritchie said:\n\"The only way to learn a new programming language is by writing programs in it.\"");
    return 0;
}
*/


//Activity: use a for-loop to print a line multiple times
/*
#include <stdio.h>
int main(void) {
    int i = 0;
    for(i=0; i<3; i++)
    printf("C is fun!\n");
    return 0;
}
*/


//Activity: use multiple for-loops
/*
#include <stdio.h>
int main(void) {
    int i = 0;
    for(i = 0; i < 3; i++)
        printf("C is fun!\n");
    printf("\n");
    for(i = 0; i<5; i++)
        printf("We can do everything with it!\n");
    return 0;
}
*/

//Activity: correct simple errors in loops with missing braces
/*
#include <stdio.h>

int main(void) {

    int i;

    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+\n");

    for (i = 0; i < 3; i++){
        printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");
    }
    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+");

    return(0);
}

*/

//Activity: put lines in the correct order

/*

// load lib
#include <stdio.h>

//main func
int main(void){
    //init variable
    int i;
    printf("I ");
    //print 3 love
    for(i = 0; i < 3 ; i++) {
        printf("love ");
    }
    printf("programming!");
    return(0);
}

*/

