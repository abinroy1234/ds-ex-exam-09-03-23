#include <stdio.h>
int a;
int MAXSIZE = 8;
int stack[8];
int top = -1;

int isempty()
{

   if(top == -1)
      return 1;
   else
      return 0;
}

int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

   int pop()
   int data;

   if( !isnotempty())
    {
      data = stack[top];
      top = top - 1;
      return data; }
    else
   {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

    int push()
    int data;
    if(!isfull())
    {
      top = top + 1;
      stack[top] = data;
   }
   else
      printf("Could not insert data, Stack is full.\n");

}

int main()
int push()
    int data;
   push[0]:
   push[1]:
   push[2]:
   push[3]:
   push[4]:
   push[5]:
   push[6]:
   push[7]:
   }

   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }

    if( stack is not isempty()) {
      data = stack[top];
      top = top - 1;
      return data; }
   else

      printf("Could not retrieve data, Stack is empty.\n");
    {



    int pop()
    pop[8]:
    pop[7]:
    pop[6]:
    pop[5]:
    pop[4]:
    pop[3]:
    pop[2]:
    pop[1]:
    pop[0]:
   }
   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");

   getch;
   return(0);
}
