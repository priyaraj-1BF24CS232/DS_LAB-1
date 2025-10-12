#include<stdio.h>
#include<conio.h>
#define SIZE 5
void push(int);
void pop();
void display();
int stack[SIZE],top=-1;

void push(int value){
if(top==SIZE-1){
    printf("\n stack overflow");
}
else{
    top++;
    stack[top]=value;
    printf("\n insertion success");
}
}

void pop(){
if(top==-1){
    printf("\n stack underflow ");
}
else{
    printf("\n deleted:%d ",stack[top]);
    top--;
}
}

void peek(){
    if(top==-1){
        printf("\n stack underflow");
    }
    else{
        printf("top element is : %d",stack[top]);
    }
}

void display(){
if(top==-1){
    printf("\n stack underflow");
}
else{
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
}

void main(){
int value,choice;
while(1)
{
    printf("\n***Menu***\n");
    printf("1.push\n 2.pop\n 3.display\n 4.peek\n 5.exit");
    printf("\n enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
     case 1:
        printf("enter the value to insert: ");
        scanf("%d",&value);
        push(value);
        break;
     case 2:
        pop();
        break;
     case 3:
        display();
        break;
     case 4:
        peek();
        break;
     case 5:
        exit(0);
     default:
        printf("\n wrong selection!");

    }
}
}
