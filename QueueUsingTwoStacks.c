#include<stdio.h>
#include<stdlib.h>
int s1[5],s2[5],top=-1,top2=-1,count=0, n;
void push(int);
void push1(int);
int pop1();
int pop2(); 
void enqueue(int ele){
    push(ele);
    count++;
    
}
void dequeue(){
    int a,b;
    if(top==-1 && top2==-1){
        printf("Queue is empty");
    }
else{
for(int i=0;i<count;i++){
    a=pop1();
    push1(a);
  }
    b=pop2();
    printf("The deleted element is %d",b);
    count--;
    for(int j=0;j<count;j++){
        a=pop2();
        push(a);
    }
}
}
    

void push(int x){
    if(top==n-1){
        printf("queue is full");
    }
    else{
        top++;
        s1[top]=x;
    }
}
int pop1(){
    int x;
    x=s1[top];
    top--;
    return x;
}
void push1(int x){
    if(top2==n-1){
        printf("queue is full");
    }
    else{
        top2++;
        s2[top2]=x;
    }
}
int pop2(){
    int x;
    x=s2[top2];
    top2--;
    return x;

}

void peek(){
    printf("The peek element is %d",s1[top]);
}
void display(){
printf("The elements of the stack are");
for(int i=0;i<=top;i++){
    printf("%d ",s1[i]);
}
}
void main(){
       int ch,ele;
       printf("ENter size of the stack");
       scanf("%d",&n);
       while(1){
        printf("\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit");
        printf("Enter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("ENter an element to be insert");
                scanf("%d",&ele);
                enqueue(ele);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("ENter  valid choice");
            
        }
    }
    
}
