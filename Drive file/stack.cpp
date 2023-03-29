#include<stdio.h>
 
#include<stdlib.h>
  
#define Size 4 
  
int Top=-1, inp_array[Size];
void Push();
void Pop();
void top();
void empty();
void show();
  
int main()
{
    int choice;
     
    while(1)    
    {
        printf("\nOperations performed by Stack");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.top check\n5.empty\n6.end");
        printf("\n\nEnter the choice:");
        scanf("%d",&choice);
         
        switch(choice)
        {
            case 1: Push();
            printf("\n\n\n");
                    break;
            case 2: Pop();
            printf("\n\n\n");
                    break;
            case 3: show();
            printf("\n\n\n");
                    break;
            case 4: top();
            printf("\n\n\n");
                	break;
            case 5: empty();
            printf("\n\n\n");
                    break;
            case 6: exit(0);
             
            default: printf("\nInvalid choice!!");
        }
    }
}
  
void Push()
{
    int x;
     
    if(Top==Size-1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter element to be inserted to the stack:");
        scanf("%d",&x);
        Top=Top+1;
        inp_array[Top]=x;
    }
}
  
void Pop()
{
    if(Top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element:  %d",inp_array[Top]);
        Top=Top-1;
    }
}


void top()
{
    if(Top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\n element at top:  %d",inp_array[Top]);
    }
}
  

 
void empty()
{
    int x;
     
    if(Top==Size-1)
    {
        printf("\nOverflow!!");
    }
    else if(Top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
    	printf("Stack is neighter full nor empty");
	}
    }

  
void show()
{
     
     
    if(Top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for(int i=Top;i>=0;--i)
            printf("%d\n",inp_array[i]);
    }
}
