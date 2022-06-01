#include <stdio.h>
#include <stdlib.h>

#define N 5
int deque[N];

int f=-1,R=-1;

void enqueuefront(int x){
  if((f==0 && R==N-1)|| (front=rear+1)){
    printf("Queue is full");
  }else if(f==-1 && rear == -1){
    f=R=0;
    deque[f]=x;
  }
  else if(f==0){
    f=N-1;
    deque[f]=x;
  }else{
    f--;
    deque[f]=x;
  }

}

void enqueuerear(int x){
  if((f==0 && R==N-1)|| (front=rear+1)){
    printf("Queue is full");
  }else if(f==-1 && R==-1){
    f=R=0;
    deque[R]=x;
  }else if(R==N-1){
   R=0;
   deque[R]=x;
  }else{
   R++;
   deque[R]=x;
  }
}

void display(){
  int i=f;

  while(i!=R){
    printf("%d",deque[i]);
    i=(i+1)%N;
  }
  printf("%d",deque[R]);

}

void getfront(){
 printf("%d",deque[f]);
}

void getrear(){
 printf("%d",deque[R]);
}

void dequefront(){
 if(f==-1 && R==-1){
    printf("Empty");
 }elseif(f==R){
  f=R=-1;
 }elseif(f==N-1){
  f=0;
  printf("%d",deque[f]);
  f=0;
 }else{
  printf("%d",deque[f]);
  f++;
 }
}

void dequerear(){
 if(f==-1 && R==-1){
    printf("Empty");
 }elseif(f==R){
  f=R=-1;
 }else if(R==0){
     printf("%d",deque[R]);
  R=N-1;
 }else{
     printf("%d",deque[R]);
     R--;
 }

}
