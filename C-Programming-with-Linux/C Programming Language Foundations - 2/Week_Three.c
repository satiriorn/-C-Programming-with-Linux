//Activity: repeat a word read from the user input

/*
#include <stdio.h>

int main(void) {
    int count = 0;
    char str[101];
    scanf("%d", &count);
    scanf("%s", str);

    for(int i = 0; i<count; i++)
        printf("%s\n", str);

    return 0;
}

*/

//Activity: swap first and last name

/*

#include <stdio.h>

int main(void) {
    int count = 0;
    char name[101];
    char lastname[101];
    scanf("%d", &count);


    for(int i = 0; i<count; i++){
        scanf("%s %s", &name, &lastname);
        printf("%s %s\n", lastname, name);
    }


    return 0;
}
*/


//Activity: even or odd number of letters in a word ?

/*
#include <stdio.h>
#include <string.h>
int main(void){
    char name[101];
    scanf("%s", &name);
    if((int)strlen(name)%2==0)
        printf("1");
    else
        printf("2");
    return 0;
}

*/

//Activity: find the longest word in a text

/*
#include <stdio.h>

int main(void){
    int count = 0;
    scanf("%d", &count);
    char str[101];
    int x = 0, max = 0;
    for(int i = 0; i<count;i++){
        scanf("%s", &str);
        x = 0;
        while(str[x]!='\0')
            x++;
        if(x>max)
            max=x;
    }
    printf("%d", max);
    return 0;
}
*/


//Activity: find repeat letters in a word


/*
#include <stdio.h>
#include <string.h>

int main(void){
    char str[51];
    char temp;
    int repeat = 0;
    int x = 0;
    scanf("%s", &str);
    int len = (int)strlen(str);
    for (int i = 0; i < len-1; i++) {
      for (int j = i+1; j < len; j++) {
         if (str[i] > str[j]) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
   }
   char s = 'w';
    while(x<len){
        if((str[x]==str[x+1])&&(s!=str[x])){
            repeat++;
            s = str[x];
        }
        x++;
    }
    printf("%d", repeat);
    return 0;
}


*/