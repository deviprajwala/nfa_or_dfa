//program to check whether the given automata of 3 states is NFA or DFA
#include<stdio.h>
#include<stdlib.h>
int m=0;
void test_automata(char a[25],int b[25],char c[25])//function to check automata 
{
    int i,j;
    for(i=0;i<3;i++)
       {
          for(j=i+1;j<3;j++)
          {
             if((a[i]==a[j]&&b[i]==b[j])||(c[i]==c[j]&&b[i]==b[j]))//checks     whether same input has multiple initial states or final states
              m++;
              break;
           
           }}
}

void main()
{
    int b[25],i,j,k;
    char a[25],c[25];
    FILE *fp1,*fp2,*fp3;
    //printf("enter present state\n");
    for(i=0;i<3;i++)
       //scanf("%d\n",&a[i]);
       fp1=fopen("presentstate.txt","r"); //present state  is read from the file

    //printf("enter the input\n");
    for(j=0;j<3;j++)
       // scanf("%d\n",&b[j]);
       fp2=fopen("input.txt","r");// state input is read from the file

    //printf("enter final state\n");
    for(k=0;k<3;k++)
        //scanf("%d\n",&c[k]);
        fp3=fopen("finalstate.txt","r");//final state input is read from the file
    
   test_automata(a,b,c);  
   if(m==1)
      printf("nfa\n");
   else
      printf("dfa\n");
}
