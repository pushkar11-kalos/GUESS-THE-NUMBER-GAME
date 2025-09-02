#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    
int main() {
    int r;

    srand(time(0));
    r = rand() % 100;
    printf("random:  %d\n ",r);
    int a;
    int c=0;
    int s=0;

    while(s==0){
    printf("Guess the number :\n");
    scanf("%d",&a);
    
    if (a==r){
        printf("YOU GUESS THE NUMBER CORRECT\n");
        c+=1;
        s=1;
        printf("CHANCEES TO GUESS: %d\n",c);

    }
    else if (a<r){
        printf("GUESS HIGHER\n");
        c+=1;
    }
    else if (a>r){
        printf("GUESS LOWER\n");
        c+=1;

    }
    else {
        printf("Invalid Number!!!!");
    } 
    
    }

    return 0;
}
