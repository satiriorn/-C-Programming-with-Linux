//Activity: if statements : carpooling

/*
#include <stdio.h>

int main(void) {
    int passengers;
    double cost;

    scanf("%d %lf", &passengers, &cost);
    if (passengers >= 1)
        cost += 1;

    printf("%.2lf\n", cost/(passengers+1));

    return 0;
}

*/

//Activity: if statements : youth hostel

/*
#include <stdio.h>

int main(void) {
    int hours, price = 10, upcharge = 5;
    scanf("%d", &hours);

    if (hours < 9)
        price += hours * upcharge;
     else
        price = 53;

    printf("%d\n", price);

    return 0;
}
*/

//Activity: if statements: bridge tax

/*
#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a+b>=10)
        printf("Special tax\n%d", 36);
    else
        printf("Regular tax\n%d",(a+b)*2);
    return 0;
}

*/

//Activity: if statements, Tug of War
/*
#include <stdio.h>

int main(void) {
    int numPlayers, weight1, weight2;
    int sumTeam1 = 0, sumTeam2 = 0;
    int advantage = 1;

    scanf("%d", &numPlayers);

    for (int i = 0; i < numPlayers; i++) {
        scanf("%d%d", &weight1, &weight2);
        sumTeam1 += weight1;
        sumTeam2 += weight2;
    }

    if (sumTeam2 > sumTeam1)
        advantage = 2;

    printf("Team %d has an advantage\n", advantage);
    printf("Total weight for team 1: %d\n", sumTeam1);
    printf("Total weight for team 2: %d\n", sumTeam2);

    return 0;
}

*/


//Activity: more complex if statements: costly hotel rooms

/*
#include <stdio.h>

int main(void) {
    int age, weight, price;
    int innkeeperAge = 60;
    int minAge = 10;
    int maxWeight = 20;
    int childPrice = 5;
    int basePrice = 30;
    int weightUpcharge = 10;

    scanf("%d%d", &age, &weight);

    if (age < minAge)
        price = childPrice;
     else if (age == innkeeperAge)
        price = 0;
     else {
        price = basePrice;
        if (weight > maxWeight)
            price += weightUpcharge;
    }
    printf("%d\n", price);

    return 0;
}
*/

//Activity: if statements, name that tree

/*
#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<=5 && b>=8)
        printf("Tinuviel");
    else if(a && b >=10)
        printf("Calaelen");
    else if((a<=8 || a>=8) && b<=5)
        printf("Falarion");
    else if(a>=12 && b<=7)
        printf("Dorthonion");
    else
        printf("Uncertain");
    return 0;
}

*/