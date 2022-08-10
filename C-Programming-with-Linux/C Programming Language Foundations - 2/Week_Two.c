//Activity: store recipe ingredients in an array


/*
#include <stdio.h>

int main(void){
    int arr[9];
    int num;
    for(int i = 0; i<=9;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    printf("%d", arr[num]);
    return 0;
}

*/

//Activity: use an array to balance weights


/*
#include <stdio.h>

int main(void){
    float num=0.f, median=0.f;
    int count = 0;
    scanf("%d", &count);
    float arr_value[count];
    for(int i = 0; i<count; i++){
        scanf("%f", &num);
        median +=num;
        arr_value[i] = num;
    }
    median = median/count;
    for(int i = 0; i<count;i++){
        if(arr_value[i]>median)
            printf("%.1lf\n", (arr_value[i]-median)*(-1));
        else if(arr_value[i]<median)
            printf("%.1lf\n", median-arr_value[i]);
        else
            printf("0.0\n");
    }
    return 0;
}

*/

//Activity: array computation

/*
#include <stdio.h>

int main(void){
    double num=0.f, sum=0.f;
    int count = 0;
    scanf("%d", &count);

    double arr_price[count];

    for(int i = 0; i<count; i++){
        scanf("%lf", &num);
        arr_price[i] = num;
    }
    for (int i = 0; i<count;i++){
        scanf("%lf", &num);
        sum+=arr_price[i]*num;
    }

    printf("%.6lf", sum);


    return 0;
}

*/

//Activity: branch inside a loop, how many big cities?
/*
#include <stdio.h>

int main(void){
    int num, count_of_city = 0;
    int count = 0;
    scanf("%d", &count);

    for(int i = 0; i<count; i++){
        scanf("%d", &num);
        if(num>10000)
            count_of_city++;
    }

    printf("%d", count_of_city);
    return 0;
}

*/

//Activity: print a square of stars using nested loops
/*

#include <stdio.h>

int main(void){
    int count = 0;
    char syb = '*';
    scanf("%d", &count);

    for(int x = 0; x<count; x++){
        for(int y = 0; y<count;y++){
            printf("%c", syb);
        }
        printf("\n");
    }
    return 0;
}

*/


//Activity: compute budget using a while loop

/*
#include <stdio.h>

int main(void){
    int num = 0;
    int sum = 0;


    while(1){
        scanf("%d", &num);
        if (num!=-1)
            sum+=num;
        else
            break;
    }
    printf("%d", sum);
    return 0;
}

*/


//Activity: controlling an epidemic

/*
#include <stdio.h>

int main(void)
{
    int population = 0;
    int infected = 1;
    int days = 1;

    scanf("%d", &population);
    while (infected < population)
    {
        infected += infected * 2;
        days++;
    }
    printf("%d", days);
    return 0;
}
*/


//Activity: guess my number

/*
#include <stdio.h>

int main(void)
{
    int num_detect=-1;
    int number = 0;
    int tries = 0;
    scanf("%d", &number);
    while (number!=num_detect)
    {
        scanf("%d", &num_detect);
        tries++;
        if(num_detect<number)
            printf("it is more\n");
        else if(num_detect>number)
            printf("it is less\n");
        else
            printf("Number of tries needed:\n%d\n", tries);

    }
    return 0;
}

*/

//Activity: monitoring a chemical experiment


/*
#include <stdio.h>

int main(void)
{
    int min_temp, max_temp;
    int number = 0;
    scanf("%d %d", &min_temp, &max_temp);
    while (number!=-999)
    {
        scanf("%d", &number);
        if(number >= min_temp && number<=max_temp)
            printf("Nothing to report\n");
        else if (number==-999)
            break;
        else{
            printf("Alert!\n");
            break;
        }

    }
    return 0;
}

*/

//

/*


*/