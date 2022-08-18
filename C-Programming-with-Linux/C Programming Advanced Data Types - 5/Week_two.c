//
/*
#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    
    // Fill in your main function here
    int num = 0;
    struct point *polygon;
    scanf("%d", &num);
    polygon = (struct point *)malloc(num * sizeof(struct point));
    initializePoly(polygon, num);
    printPoly(polygon, num);
    free(polygon);
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point *poly, int num)
{
    for (int i = 0; i < num; i++)
    {
        poly[i].x = i*(-1);
        poly[i].y = i*i;
    }
}

*/