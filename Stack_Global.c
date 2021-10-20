#include<stdio.h>
#define Size 5


void push(int arr[],int *top){
    int element;
    if(*top==Size-1){
        printf("Overflow\n");
    }else{
        printf("Enter the element to be inserted:");
        scanf("%d",&element);
        *top=*top+1;
        arr[*top]=element;
    }
}

int pop(int arr[],int *top){
    int pop_element;
    if(*top==-1){
        return 0;
    }else{
        pop_element=arr[*top];
        *top=*top-1;
        return pop_element;
    }
}

void display(int arr[],int top){
    if(top==-1){
        printf("Underflow\n");
    }else{
        for(int i=top;i>=0;i--){
            printf("%d\n",arr[i]);
        }
    }
}

int main(){
    int Stack[Size],top=-1,choice;
    for(;;){
        printf("1.Push  2.Pop  3.Display  other key to exit:");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            push(Stack,&top);
            break;
        case 2:
            pop(Stack, &top);
            break;
        case 3:
            display(Stack,top);
            break;
        default:
            exit(0);

        }
    }

    return 0;
}
