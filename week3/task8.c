#include<stdio.h>
#include<stdlib.h>
void main(void)
{
    int testcase, *initialstate, *rounds, *guess,i,j,head ,tail,*arr,k;
   //no.of testcases input
    printf("enter the no.of testcase: ");
    scanf("%d",&testcase);
    
    initialstate = (int *)calloc(testcase,sizeof(int));
    rounds= (int *)calloc(testcase,sizeof(int));
    guess = (int *)calloc(testcase,sizeof(int));
    //taking input details for all cases
    for(i=0;i<testcase;i++)
    {
        printf("round %d details:\n",(i+1));
        printf("initialstate: ");
        scanf("%d",(initialstate+i));
        printf("rounds: ");
        scanf("%d",(rounds+i));
        printf("guess:");
        scanf("%d",(guess+i));
    }
    
   for(i=0;i<testcase;i++)
   {
       arr=(int *)calloc( *(rounds+i),sizeof(int));
       //allocating initial state
       if( *(initialstate + i) == 1)
       {
           for(j=0;j < *(rounds+i);j++)
           {
               *(arr+j) = 1;
           }
       }
       else
       {
             for(j=0;j < *(rounds+i);j++)
           {
               *(arr+j) = 2;
           }
       }

       //roundwise changes
       for(j=0;j< *(rounds+i); j++)
       {
           
            for(k=0;k<=j;k++)
            {
                if( *(arr + k) == 1)
                {
                    *(arr + k)=2;
                }
                else
                {
                    *(arr + k )=1;
                }
            }
           /* printf("\narray after reallocation: ");
            for(k=0;k < *(rounds + i);k++)
            {
                printf("%d ", *(arr+k));
            }
            printf("\n");*/
            
       }

       head=0,tail=0;
       //counting heads and tails
       for(j=0;j< *(rounds + i);j++)
       {
           if( *(arr+j) == 1)
           {
               head++;
           }
           else
           {
               tail++;
           }
       }
      /* printf("\nheads: %d",head);
       printf("\ntails: %d\n",tail); */
     // printf("guess: %d", *(guess + i));
     //printing each testcase
       if ( *(guess + i) == 1)
       {
           printf("head: %d\n",head);
       }
       else
       {
           printf("tail: %d\n",tail);
       }

   }
}