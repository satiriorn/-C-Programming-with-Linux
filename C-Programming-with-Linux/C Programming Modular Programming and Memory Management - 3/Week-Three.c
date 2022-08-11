//Activity: use pointers to create elixir

/*
#include <stdio.h>

int main(void)
{
    int age;
    // add a line here that declares an integer pointer named "ageptr"
    int *ageptr;
    scanf("%d", &age);
    // add a line here that stores the address of age in ageptr
    ageptr = &age;
    printf("The secret address is... ");
    // add a line here that prints out the address stored in ageptr
    printf("%p\n", ageptr);
    printf("Now take three drops of the magic elixir. \n");
    // add a line that uses only ageptr to lower the age by 5 years
    *ageptr -= 5;
    printf("Did the elixir work? You are %d years old!", age);

  return 0;
}

*/

//

/*
#include <stdio.h>

void drinkElixir(int *);

int main(void)
{
    int age;
    int *ageAddr = &age;
    scanf("%d", ageAddr);
    printf("Your current age is %d.\n", age);

    drinkElixir(&age);

    printf("Your new age will be %d!\n", age);
    return 0;
}

void drinkElixir(int *age)
{
    if (*age >= 21)
        *age -= 10;
    else
        *age *= 2;
}ce

*/


//Activity: arrays and functions
/*
#include <stdio.h>


int main(void) {
    int arr[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 5; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/