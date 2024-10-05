#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 3

int st[MAX] , top =-1;
void push( int st[] , int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main(int argc , char *argv[])
{
    int val, option;
    do{
        printf("\n***** MAIN MENU *****");
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Exit");
        printf("\nEnter your option ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
        printf("\nEnter the element to be pushed in the stack");
        

        }
    }

}