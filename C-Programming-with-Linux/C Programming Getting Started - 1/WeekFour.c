//Activity: print characters

/*
#include <stdio.h>
int main(void) {
    char letter1 = 'i';
    char letter2 = 'n';
    char letter3 = 'C';
    printf ("Programming %c%c %c\n", letter1, letter2, letter3);
    return 0;
}

*/

//Activity: divide numbers

/*

#include <stdio.h>

int main(void){
    double result;
    scanf("%lf", &result);
    printf("%.1lf",  result * 9.0 / 5.0 + 32.0);
    return(0);
}

*/

//

/*
#include <stdio.h>

int main(void){
    int sticks = 0;
    int sticksPerBox = 0;
    int box, left;
    box = left = 0;

    scanf("%d %d", &sticks, &sticksPerBox);
    box = sticks/sticksPerBox;
    left = sticks%sticksPerBox;
    printf("%d\n%d", box, left);

    return(0);
}

*/

//Activity: convert integers to doubles


/*
#include <stdio.h>

int main(void){
    int count;
    double res, num = 0, sum=0;
    scanf("%d", &count);
    for(int i = 0; i<count; i++){
        scanf("%lf", &num);
        sum+=num;
    }
    //res = ;
    printf("%.2lf", (double)(sum/count));
    return (0);
}

*/


//Activity: convert double to integers

/*
#include <stdio.h>

int main(void){
    int population = 0;
    double diff;
    scanf("%d", &population);
    scanf("%lf", &diff);
    int res = (int)population+((diff/100)*population);
    printf("%d", res);
    return (0);
}

*/

//Activity: divide decimals


/*
#include <stdio.h>

int main(void){
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%d", (int)(a/b));
    return(0);
}
*/


//

/*


*/