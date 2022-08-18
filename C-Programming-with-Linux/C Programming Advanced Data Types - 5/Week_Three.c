//Activity: create a node to store student data
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

// Write other function prototypes here (if any)

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

// Write your createStudent function here (and any other functions you see fit)
struct student *createStudent(char studentName[], int studentAge){
    struct student *s = (struct student *)malloc(sizeof(struct student));
    s->age = studentAge;
    strcpy(s->name, studentName);
    return s;

}
*/

//

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr); 
// add other prototypes here if needed 

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printf("%s is %d years old.\n", start->name, start->age);
    printf("%s is %d years old.\n", start->next->name, start->next->age);
    printf("%s is %d years old.\n", start->next->next->name, start->next->next->age);

    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);

    return 0;
}

// Place your function definitions here. Be sure to include the definition for 
//   createStudent() and any other functions you created for the previous task. 
struct student *createStudent(char studentName[], int studentAge){
    struct student *s = (struct student *)malloc(sizeof(struct student));
    s->age = studentAge;
    strcpy(s->name, studentName);
    return s;
}
struct student *append(struct student *end, struct student *newStudptr){
    end->next = newStudptr;
    return (newStudptr);
}


*/

//

/*
#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[50], int studentAge);
struct student * append(struct student * end, struct student * newStudptr); 
void printStudents(struct student *start);
 //add other prototypes here if needed

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;

    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);

    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    tmp = start->next;

    free(start);

    start = tmp;
    tmp = start->next;

    free(start);
    free(tmp);

    return 0;
}

// Place your function definitions here. Be sure to include the definitions for 
//   createStudent() and append() as well as any other functions you created for 
//   the previous tasks. 
   
struct student *createStudent(char studentName[], int studentAge){
    struct student *s = (struct student *)malloc(sizeof(struct student));
    s->age = studentAge;
    strcpy(s->name, studentName);
    return s;
}
struct student *append(struct student *end, struct student *newStudptr){
    end->next = newStudptr;
    return (newStudptr);
}

void printStudents(struct student *start){
    struct student *ptr = start;
    while(ptr!=NULL){
        printf("%s is %d years old.\n", ptr->name, ptr->age);
        ptr = ptr->next;
    }
}

*/


//

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
void printStudents(struct student *start);
void freeStudents(struct student *start);
// add any other prototypes as needed 
int main(void) {
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

    return 0;
}

// Place your function definitions here. Be sure to include the definitions for 
//   createStudent(), append(), printStudents() as well as any other functions you 
 //  created for the previous tasks. 
struct student *createStudent(char studentName[], int studentAge){
    struct student *s = (struct student *)malloc(sizeof(struct student));
    s->age = studentAge;
    strcpy(s->name, studentName);
    return s;
}
struct student *append(struct student *end, struct student *newStudptr){
    end->next = newStudptr;
    return (newStudptr);
}

void printStudents(struct student *start){
    struct student *ptr = start;
    while(ptr!=NULL){
        printf("%s is %d years old.\n", ptr->name, ptr->age);
        ptr = ptr->next;
    }
}
void freeStudents(struct student *start) {
    struct student * ptr = start;
    struct student * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}
*/

//Activity: check divisibility

/*
#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

// Write your prototypes here
int divisibleByThree(struct digit *start);
struct digit *readNumber(void);

int main(void) {
    struct digit *start;
    start = readNumber();
    printf("The number ");
    printNumber(start);
    if (divisibleByThree(start)) 
        printf("is divisible by 3.\n");
    else
        printf("is not divisible by 3.\n");
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}
int divisibleByThree(struct digit *start)
{
    struct digit *ptr = start;
    int qsum = 0;
    while (ptr != NULL)
    {
        qsum += ptr->num;
        ptr = ptr->next;
    }
    if (qsum % 3 == 0)
        return 1;
    else
        return 0;
}

*\

//Activity: update nodes in a linked list

/*
#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int dig);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *start);
void freeNumber(struct digit *start);
int divisibleByThree(struct digit * start);
struct digit * readNumber(void);
//Add your own function prototypes here

int main(void) {
    struct digit *start;
    start = readNumber();

    printf("The number ");
    printNumber(start);
    printf("was modified in %d places.\n", changeThrees(start));

    printf("The new number is ");
    printNumber(start);
    freeNumber(start);

    return 0;
}

struct digit * createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

int divisibleByThree(struct digit * start) {
    struct digit * ptr = start;
    int qsum = 0;
    while (ptr!=NULL) {
        qsum += ptr->num;
        ptr = ptr->next;
    }
    if (qsum%3==0) return 1;
    else return 0;
}

// Write your changeThrees() function here
int changeThrees(struct digit *start)
{
    struct digit *ptr = start;
    int sum = 0;
    while (ptr != NULL)
    {
        if (ptr->num == 3)
        {
            ptr->num = 9;
            sum++;
        }
        ptr = ptr->next;
    }
    return sum;
}
*/

//Sort a linked list using Insertion Sort

/*
int countRedun(struct digit * start) {
    struct digit *sorted = sortedCopy(start);
    struct digit *ptr = sorted;
    int redun = 0;
    int prev = -1;
    
    while (ptr != NULL) {
        if (ptr->num == prev) 
            redun++;
        else 
            prev = ptr->num;
        ptr = ptr->next;
    }
    freeNumber(sorted);
    return redun;
}
*/