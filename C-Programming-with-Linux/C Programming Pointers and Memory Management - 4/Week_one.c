//Activity: arrays and functions

/*
#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

// Write your function behind() here: 
void behind(int* ptr_array, int count_players){
    int max_result = 0;
    for(int i = 0; i< count_players; i++){
        if(max_result < ptr_array[i])
            max_result = ptr_array[i];
    }
        for(int i = 0; i< count_players; i++){
        ptr_array[i] = max_result - ptr_array[i];
    }
}

*/