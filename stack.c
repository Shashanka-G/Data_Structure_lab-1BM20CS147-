//C program to implement stack datastructure
// USN:1BM20CS147
#include<stdio.h>
#define SIZE 10
int top=-1,element;
int STACK[SIZE];
void push(){
    if (top==SIZE-1){
        printf("Stack is overflowing");
    }
    else{
        printf("Enter the element: ");
        scanf("%d",&element);
        top=top+1;
        STACK[top]=element;
        
    }
}
void pop(){
    if(top==-1){
        printf("No elemets are there to pop\n");
    }else{
        top=top-1;
    }
}
void display(){
    if(top==-1){
        printf("No elements are there to display\n");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("|%d|\n",STACK[i]);
            
        }
    }
}
void main(){
    int option;
    while(1){
        printf("1. Push 2.Pop 3.Display 4.Exit");
        printf("\nEnter option: ");
        scanf("%d",&option);
        if(option==1){
            push();
        }else if(option==2){
            pop();
        }
        else if(option==3){
            display();
        }
        else if(option==4){
            break;
        }
        else{
            printf("Invalid option\n");
        }
    }
    
}