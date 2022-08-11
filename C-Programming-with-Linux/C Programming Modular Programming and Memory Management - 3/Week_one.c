//Activity: program a smart unit converter

/*
#include <stdio.h>
void convert(double, char);

int main(void)
{
    int times = 0;
    double value = 0;
    char type;
    scanf("%d", &times);

    for(int i = 0; i < times; i++){
        scanf("%lf %c", &value, &type);
        convert(value, type);
    }
    return 0;
}
void convert (double value, char type)
{
    if(type == 'm')
        printf("%lf ft\n", value * 3.2808);
    else if(type == 'g')
        printf("%lf lbs\n", value * 0.002205);
    else if(type == 'c')
        printf("%lf f\n", 32 + (1.8 * value));
}

*/

//Activity: find the smallest integer

/*
#include <stdio.h>


int min(int, int);

int main(void){
    int count, min_num = 20000, num;
    scanf("%d", &count);
    for(int i = 0; i<count; i++){
        scanf("%d", &num);
        min_num = min(min_num, num);
    }
    printf("%d", min_num);
    return 0;
}

int min(int min_num, int value){
    if (min_num>value)
        min_num=value;
    return min_num;
}

*/