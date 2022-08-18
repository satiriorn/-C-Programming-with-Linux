//Activity: arrays and functions

/*
#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date* ptr_data){
    scanf("%d %d %d", &ptr_data->year, &ptr_data->month, &ptr_data->day);
}

void printDate(struct date dt){
    printf("%02d/", dt.month);
    printf("%02d/", dt.day);
    printf("%04d", dt.year);
    
}


*/

//Activity: manipulate structures with functions

/*
#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

// function prototypes 
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

// add your function definitions here 
void readDate(struct date *dt)
{
    scanf("%d %d %d", &dt->year, &dt->month, &dt->day);
}
void printDate(struct date dt)
{
    printf("%02d/%02d/%04d\n", dt.month, dt.day, dt.year);
}

struct date advanceDay(struct date today)
{
    if (today.day == 31 && today.month == 12)
    {
        today.month = 1;
        today.day = 1;
        today.year += 1;
    }
    else if (today.day == 30 && (today.month == 4 || today.month == 6 || today.month == 9 || today.month == 11))
    {
        today.month += 1;
        today.day = 1;
    }
    else
        today.day += 1;
    return today;
}


*/