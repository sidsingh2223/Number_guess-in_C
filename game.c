#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int number, guess, nguess = 1;
    
    number = rand()%100 + 1;
    // printf("The random number is %d\n", number);

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess < number){
            printf("Enter the bigger number\n");
            
        }
        else if(guess>number){
            printf("Enter the lower number\n");
            
        }
        else{
            printf("Hurry!,You guess the real number in %d attempt", nguess);
        }
        nguess++;
    }while(guess != number);

    return 0;
}