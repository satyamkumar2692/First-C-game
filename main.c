#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   int u,c,s1=0,s2=0; //u for user , c for computer and s for scores


   printf("Instructions-\nIn this game you have to enter a number between 1 to 6.\nIf the computer guessed it right then you will lose your turn , otherwise the number will be added to you scores.\nAfter that the computer will enter a number and then you have to guess it until it loses\n");

   do{ printf("Enter a number between 1 to 6 \n");
       scanf("%d",&u);
       srand(time(0));
       c=rand()%6+1;
       printf("computer guessed %d \n",c);
   if(u>6 || u<1){printf("Invalid input\n");}
   else if(u!=c){s1+=u;}

   }while(u!=c);

    if(u==c){printf("Your scores are %d \n",s1);}

   printf("Now you have to guess the computer's number \n");


   do{ printf("Guess a number between 1 to 6 \n");
       scanf("%d",&u);
       srand(time(0));
       c=rand()%6+1;
       printf("Computer Entered %d \n",c);
   if(u>6 || u<1){printf("Invalid input \n");}
   else if(u!=c){s2+=c;}

   }while(u!=c);

if(u==c){printf("computer's scores are %d \n",s2);}

if(s1>s2){printf("Wow!! You Won \n");}
else if(s1<s2){printf("Better luck next time \n");}

printf("Thanks for playing...\n");

    return 0;
}
