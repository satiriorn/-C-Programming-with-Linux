//Activity: perform simple arithmetic in C
/*
#include <stdio.h>
int main(void){
    int days = 25-23;
    int min = 60 * 24 * days;
    int sec = 60 * min;
    printf("Dear Procrastinator,\nYou still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!", days, min,sec);
    return 0;
}
*/


//Activity: print the x8 multiplication table

/*
#include <stdio.h>
int main(void) {
    for (int i = 0; i<=10;i++){
        printf("%dx8 = %d \n", i, 8*i);
    }
    return 0;
}

*/


//Activity: read an integer and print the corresponding multiplication table
/*
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for(int i = 0; i<=10; i++)
        printf("%dx%d = %d \n", i, num, num*i);
    return 0;
}

*/


//Activity: readand process multiple integers via a loop

/*
#include <stdio.h>

int main(void) {
    int height, weight, enginePower, resistance, powerCalc = 0, powerTotal = 0, numRobots = 0;

    scanf("%d",&numRobots);

    for (int i=0; i<numRobots; i++) {
        scanf("%d%d%d%d",&height,&weight,&enginePower,&resistance);
        powerCalc = (enginePower + resistance) * (weight - height);
        powerTotal += powerCalc;
    }

    printf("%d\n", powerTotal);

    return 0;
}*/

//