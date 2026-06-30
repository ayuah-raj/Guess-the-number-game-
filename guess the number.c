#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int randomnumber=(rand()%100)+1;
    int no_of_guesses=0;
    int guessed;
    do{
    printf("guess the number ");
    scanf("%d", &guessed);
    if(guessed<randomnumber)
    {
    printf("please guess higher number\n");}
    else if (guessed > randomnumber )
    {
    printf("please guess lower number\n");}
    else{
    printf("congrats you guessed it\n");}
    no_of_guesses++;
    
    
    
    
    
    
    }while(guessed>randomnumber || guessed<randomnumber);
    printf("you guess it in %d time",no_of_guesses);
    return 0;
}