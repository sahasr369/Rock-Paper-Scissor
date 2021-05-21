#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int randomnumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int greater (char char1,char char2)
{
    
 if(char1 == char2)
 {
     return -1;
 }
 else if((char1=='r') && (char2=='s'))
 {
     return 1;
 }
 else if((char2=='r') && (char1=='s'))
 {
     return 0;
 }
 else if((char1=='p') && (char2=='r'))
 {
     return 1;
 }
 else if((char2=='p') && (char1=='r'))
 {
     return 0;
 }
 else if((char1=='s') && (char2=='p'))
 {
     return 1;
 }
 else if((char2=='s') && (char1=='p'))
 {
     return 0;
 }

}
int main()
{
    int playerscore=0,compscore=0,temp;
    char playerchar,compchar;
    char dict[]={'r','p','s'};
    printf(" ROCK-PAPER-SCISSOR\n");
    for (int i = 0; i < 3; i++)
    {
    printf("Player 1's turn\n");
    printf("chose 1 for Rock 2 for paper 3 for scissor\n");
    scanf("%d",&temp);
    getchar();
    playerchar=dict[temp-1];
    printf("you choose %c\n\n",playerchar); 

    printf("computer's turn\n");
    printf("chose 1 for Rock 2 for paper 3 for scissor\n");
    temp=randomnumber(3)+1;
    compchar=dict[temp-1];
    printf("cpu choice : %c\n\n",compchar);


    if(greater(compchar,playerchar) == 1)
    {
        compscore += 1;
        printf("CPU GOT IT\n");
    }
    else if(greater(compchar,playerchar)==-1)
    {
        compscore +=1;
        playerscore += 1;
        printf("ITS A DRAW\n"); 
    }
    else
    {
        playerscore +=1;
        printf("YOU GOT IT\n");
    }
    printf("YOU : %d\n CPU : %d\n\n",playerscore,compscore);
    }
    if(playerscore>compscore)
    {
        printf("YOU WON THE MATCH\n");
    }
    else if (playerscore<compscore)
    {
        printf("Cpu Won THE MATCH\n");
    }
    else
    {
        printf("THE MATCH IS DRAW");
    }
     return 0;
}