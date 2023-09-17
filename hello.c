#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

// Priority Queue

























// // Double Ended Queue

// int que[5], f = -1, r = -1; 


// int isEmpty(){
//   if(f<0 && r<0){
//     return 1;
//   }
//   return 0;
// }

// int isFull(){
//   if(f==0 && r==4 || f==r+1){
//     return 1;
//   }
//   return 0;
// }

// void enqueueF(){
//   if(isFull()){
//     printf("queue is full\n");
//   }
//   else if(isEmpty()){
//     r++;
//     printf("Enter value:\t");
//     scanf("%d", &que[++f]);
//   }
//   else if(f==0){
//     f = 4;
//     printf("Enter value:\t");
//     scanf("%d", &que[f]);
//   }
//   else{
//     printf("Enter value:\t");
//     scanf("%d", &que[--f]); 
//   }
// }
// void enqueueR(){
//   if(isFull()){
//     printf("queue is full\n");
//   }
//   else if(isEmpty()){
//     f++;
//     printf("Enter value:\t");
//     scanf("%d", &que[++r]);
//   }
//   else if(r==4 && f>0){
//     r = 0;
//     printf("Enter value:\t");
//     scanf("%d", &que[r]);
//   }
//   else{
//     printf("Enter value:\t");
//     scanf("%d", &que[++r]); 
//   }
// }

// int dequeueF(){
//   if(isEmpty()){
//     printf("Queue is Empty\n");
//     return 0;
//   }
//   else if(f==r){
//     int last = que[f];
//     f=-1, r=-1;
//     return last;
//   }
//   else if(f==4 && r<f){
//     int last = que[f];
//     f = 0;
//     return last;
//   }
//   else{
//     return que[f++];
//   }
// }

// int dequeueR(){
//   if(isEmpty()){
//     printf("Queue is Empty\n");
//     return 0;
//   }
//   else if(f==r){
//     int last = que[f];
//     f=-1, r=-1;
//     return last;
//   }
//   else if(r==0 && f>r){
//     int last = que[r];
//     r = 4;
//     return last;
//   }
//   else{
//     return que[r--];
//   }
// }

// void display(){
//   if(isEmpty()){
//     printf("Queue is Empty\n");
//   }
//   else if(f>r){
//     for(int i=f; i<=4; i++){
//       printf("%d ", que[i]);
//     }
//     for(int i=0; i<=r; i++){
//       printf("%d ", que[i]);
//     }
//     printf("\n");
//   }
//   else{
//     for(int i=f; i<=r; i++){
//       printf("%d ", que[i]);
//     }
//     printf("\n");
//   }
// }

// void getfront(){
//   if(isEmpty()){
//     printf("Queue is Empty\n");
//   }
//   else{
//     printf("Rear = %d\n", que[f]);
//   }
// }

// void getRear(){
//   if(isEmpty()){
//     printf("Queue is Empty\n");
//   }
//   else{
//     printf("Rear = %d\n", que[r]);
//   }
// }
// int main(){
//   enqueueF();
//   enqueueR();
//   enqueueF();
//   enqueueF();
//   enqueueR();
//   enqueueF();
//   display();
//   dequeueR();
//   dequeueF();
//   dequeueF();
//   display();

//   dequeueF();
//   getfront();
//   getRear();
//   dequeueF();
//   dequeueF();
//   display();

//   return 0;
// }






// // Circular Queue

// int que[5], f = -1, r = -1; 


// int isEmpty(){
//   if(r<0){
//     return 1;
//   }
//   return 0;
// }

// int isFull(){
//   if(f==0 && r==4 || f==r+1){
//     return 1;
//   }
//   return 0;
// }

// void enqueue(){
//   if(isFull()){
//     printf("queue is full\n");
//   }
//   else if(isEmpty()){
//     f++;
//     printf("Enter value:\t");
//     scanf("%d", &que[++r]);
//   }
//   else if(f>0 && r==4){
//     r = 0;
//     printf("Enter value:\t");
//     scanf("%d", &que[r]); 
//     }
//   else{
//     printf("Enter value:\t");
//     scanf("%d", &que[++r]); 
//   }
// }

// int dequeue(){
//   if(isEmpty()){
//     printf("Queue is Empty\n");
//     return 0;
//   }
//   else if(f==r){
//     int last = que[f];
//     f=-1, r=-1;
//     return last;
//   }
//   else if(f==4 && r<f){
//     int last = que[f];
//     f = 0;
//     return last;
//   }
//   else{
//     return que[f++];
//   }
// }


// void display(){
//   if(isEmpty()){
//     printf("Queue is Empty\n");
//   }
//   else if(f>r){
//     printf("Queue Element are:\n");

//     for(int i=f; i<=4 ;i++){
//       printf("%d ",que[i]);
//     }
//     for(int i=0; i<=r ;i++){
//       printf("%d ",que[i]);
//     }printf("\n");
//     }
//   else{
//     printf("Queue Element are:\n");
//     for(int i=f; i<=r ;i++){
//       printf("%d ",que[i]);
//     }
//   }printf("\n");
// }





// int main(){
//   enqueue();
//   enqueue();
//   enqueue();
//   enqueue();
//   enqueue();
//   enqueue();
//   isFull();
//   isEmpty();
//   dequeue();
//   dequeue();
//   dequeue();
//   isFull();
//   enqueue();
//   enqueue();
//   enqueue();
//   display();
//   return 0;
// }


// // Normal Queue 

// int que[5], f = -1, r = -1; 

// int isEmpty(){
//   if(r<0){
//     return 1;
//   }
//   return 0;
// }

// int isFull(){
//   if(r==4){
//     return 1;
//   }
//   return 0;
// }
// void enqueue(){
//   if(isFull()){
//     printf("queue is full\n");
//   }
//   else if(isEmpty()){
//     f++;
//     printf("Enter value:\t");
//     scanf("%d", &que[++r]);
//   }
//   else{
//     printf("Enter value:\t");
//     scanf("%d", &que[++r]);  }
// }

// int dequeue(){
//   if(isEmpty()){
//     printf("Queue is Empty\n");
//     return 0;
//   }
//   else if(f==r){
//     int last = que[f];
//     f=-1, r=-1;
//     return last;
//   }
//   else{
//     return que[f++];
//   }
// }

// void display(){
//   if(isEmpty()){
//     printf("Queue is Empty\n");
//   }
//   else{
//     printf("Queue Element are:\n");
//     for(int i=f; i<=r ;i++){
//       printf("%d ",que[i]);
//     }
//   }printf("\n");
// }

// int main(){
//   isEmpty();
//   enqueue();
//   enqueue();
//   enqueue();
//   enqueue();
//   enqueue();
//   enqueue();
//   display();
//   isEmpty();
//   isFull();
//   dequeue();
//   dequeue();
//   dequeue();
//   enqueue();
// }








// void ConvertBinary(int m, int q, int *ac, int *qbin, int* mbin, int *mcomp, int arrsize){

//   int mpos = abs(m);
//   int qpos = abs(q);

//   for(int i=0; i<arrsize; i++){
//     if((1<<i & mpos) == 1){
//       mbin[i] = 1;
//     }
//     else{
//       mbin[i] = 0;
//     }
//   }

//   for(int i=0; i<arrsize; i++){
//     if((1<<i & qpos) == 1){
//       qbin[i] = 1;
//     }
//     else{
//       qbin[i] = 0;
//     }
//   }
//   if(m<0){
//     for(int i=0; i<arrsize; i++){
//       if(mbin[i] == 1){
//         mcomp[i] = 0;
//       }
//       else{
//         mcomp[i] = 1;
//       }
//     }
//     mcomp[0]+=1;
//     int carry = mcomp[0]/2;
//     mcomp[0]%=2;
//     for(int i=1; i<arrsize; i++){
//         mcomp[i]+=(carry);
//     }
//   }
//   if(q<0){

//   }
// }

// int main(){
//   int m, q;

//   printf("\t\t\tBooth Algorithm\n");
//   printf("Enter 2 signed no to multiply them\n");
//   printf("Enter a: ");
//   scanf("%d", &m);
//   printf("Enter b: ");
//   scanf("%d", &q);

//   int mx;
//   abs(m)>abs(q) ? (mx = abs(m)) : (mx = abs(q)); 
//   int arrsize = ceil(log10(mx)/log10(2)) + 1;

//   int ac[arrsize], qbin[arrsize], mbin[arrsize], mcomp[arrsize], q0; 




//   return 0;
// }








// int a = 0,b = 0, c = 0, a1 = 0, b1 = 0, com[5] = { 1, 0, 0, 0, 0};
// int anum[5] = {0}, anumcp[5] = {0}, bnum[5] = {0};
// int acomp[5] = {0}, bcomp[5] = {0}, pro[5] = {0}, res[5] = {0};


// void binary(){
//     a1 = fabs(a);
//     b1 = fabs(b);
//     int r, r2, i, temp;
//     for (i = 0; i < 5; i++){
//           r = a1 % 2;
//           a1 = a1 / 2;
//           r2 = b1 % 2;
//           b1 = b1 / 2;
//           anum[i] = r;
//           anumcp[i] = r;
//           bnum[i] = r2;
//           if(r2 == 0){
//                bcomp[i] = 1;
//           }
//           if(r == 0){
//                acomp[i] =1;
//           }
//     }
//   //part for two's complementing
//   c = 0;
//   for ( i = 0; i < 5; i++){
//           res[i] = com[i]+ bcomp[i] + c;
//           if(res[i] >= 2){
//                c = 1;
//           }
//           else
//                c = 0;
//           res[i] = res[i] % 2;
//     }
//   for (i = 4; i >= 0; i--){
//     bcomp[i] = res[i];
//   }
//   //in case of negative inputs
//   if (a < 0){
//      c = 0;
//     for (i = 4; i >= 0; i--){
//           res[i] = 0;
//     }
//     for ( i = 0; i < 5; i++){
//           res[i] = com[i] + acomp[i] + c;
//           if (res[i] >= 2){
//                c = 1;
//           }
//           else
//                c = 0;
//           res[i] = res[i]%2;
//     }
//     for (i = 4; i >= 0; i--){
//           anum[i] = res[i];
//           anumcp[i] = res[i];
//     }
 
//   }
//   if(b < 0){
//     for (i = 0; i < 5; i++){
//           temp = bnum[i];
//           bnum[i] = bcomp[i];
//           bcomp[i] = temp;
//     }
//   }
// }
// void add(int num[]){
//    int i;
//    c = 0;
//    for ( i = 0; i < 5; i++){
//           res[i] = pro[i] + num[i] + c;
//           if (res[i] >= 2){
//                c = 1;
//           }
//           else{
//                c = 0;
//           }
//           res[i] = res[i]%2;
//     }
//     for (i = 4; i >= 0; i--){
//         pro[i] = res[i];
//         printf("%d",pro[i]);
//     }
//   printf(":");
//   for (i = 4; i >= 0; i--){
//           printf("%d", anumcp[i]);
//     }
// }
// void arshift(){//for arithmetic shift right
//    int temp = pro[4], temp2 = pro[0], i;
//    for (i = 1; i < 5  ; i++){//shift the MSB of product
//       pro[i-1] = pro[i];
//    }
//    pro[4] = temp;
//    for (i = 1; i < 5  ; i++){//shift the LSB of product
//        anumcp[i-1] = anumcp[i];
//    }
//    anumcp[4] = temp2;
//    printf("\nAR-SHIFT: ");//display together
//    for (i = 4; i >= 0; i--){
//        printf("%d",pro[i]);
//    }
//    printf(":");
//    for(i = 4; i >= 0; i--){
//        printf("%d", anumcp[i]);
//    }
// }
 
// void main(){
//   int i, q = 0;
//   printf("\t\tBOOTH'S MULTIPLICATION ALGORITHM");
//   printf("\nEnter two numbers to multiply: ");
//   printf("\nBoth must be less than 16");
//   //simulating for two numbers each below 16
//   do{
//        printf("\nEnter A: ");
//        scanf("%d",&a);
//        printf("Enter B: ");
//        scanf("%d", &b);
//     }while(a >=16 || b >=16);
 
//    printf("\nExpected product = %d", a * b);
//    binary();
//    printf("\n\nBinary Equivalents are: ");
//    printf("\nA = ");
//    for (i = 4; i >= 0; i--){
//        printf("%d", anum[i]);
//    }
//    printf("\nB = ");
//    for (i = 4; i >= 0; i--){
//        printf("%d", bnum[i]);
//    }
//    printf("\nB'+ 1 = ");
//    for (i = 4; i >= 0; i--){
//        printf("%d", bcomp[i]);
//    }
//    printf("\n\n");
//    for (i = 0;i < 5; i++){
//           if (anum[i] == q){//just shift for 00 or 11
//               printf("\n-->");
//               arshift();
//               q = anum[i];
//           }
//           else if(anum[i] == 1 && q == 0){//subtract and shift for 10
//              printf("\n-->");
//              printf("\nSUB B: ");
//              add(bcomp);//add two's complement to implement subtraction
//              arshift();
//              q = anum[i];
//           }
//           else{//add ans shift for 01
//              printf("\n-->");
//              printf("\nADD B: ");
//              add(bnum);
//              arshift();
//              q = anum[i];
//           }
//     }
 
//     printf("\nProduct is = ");
//     for (i = 4; i >= 0; i--){
//           printf("%d", pro[i]);
//     }
//     for (i = 4; i >= 0; i--){
//           printf("%d", anumcp[i]);
//     }
// }






// char stk[30], postfix[30];
// int  pidx=-1, top=-1;

// char pop(){
//     char ch = stk[top--];
//     return ch;
//     }
   
   
// void push(char ch){
//      if(ch=='+'||ch=='-'||ch=='/'||ch=='*'||ch=='^'||ch=='%'){
//         if(ch=='^'){
//           for(;stk[top]=='^';){
//              	char c = pop();
//               postfix[++pidx] = c;
//            }
//         stk[++top] = ch;
//          }
//       else if(ch=='*'||ch=='/'||ch=='%'){
//           for(;stk[top]=='^'||stk[top]=='*'||stk[top]=='/'||stk[top]=='%';){
//               char c = pop();
//               postfix[++pidx] = c;
//            }
//         stk[++top] = ch;
//          }
//       else if(ch=='+'||ch=='-'){
//           for(;stk[top]=='^'||stk[top]=='*'||stk[top]=='/'||stk[top]=='%'||stk[top]=='+'||stk[top]=='-';){
//              	char c = pop();
//               postfix[++pidx] = c;
//            }
//         stk[++top] = ch;
//          }
//      }
//    else if(ch == '('){
//         stk[++top] = ch;
//       }
//    else if(ch == ')'){
//         for(;stk[top] != '(';){
//             char c = pop();
//               postfix[++pidx] = c;
//            }
//          pop();
//        }
// }

// void traverse(char *infix){
//     for(int i=0; infix[i]!='\0'; i++){
//        if(infix[i]>='0' && infix[i]<='9'){
//          pidx++;
//          postfix[pidx] = infix[i];
//         }
//        else{
//          push(infix[i]);
//         }
//       }
//    for(int i=top; i>=0; i--){
//       postfix[++pidx] = stk[i];
//       }
    
//     }
    
    
// int main(){
//     char infix[30] = "(1+2)*3+(4-5)/6+7";
//     traverse(infix);
    
//     printf("%s\n", postfix);

//    return 0;
//    }











// char temp[11], stk[11], temptop=-1, stktop=-1;

// void push(char ch){
//   if(temptop==11){
//     printf("Stack is Full\n");
//   }
//   else{
//     temptop++;    
//     temp[temptop] = ch;
//   }
// }

// void pop(){
//   if(temptop==-1){
//     printf("Stack is Empty\n");
//   }
//   else{
//     stktop++;
//     stk[stktop] = temp[temptop];
//     temptop--;
//   }
// }

// void display(){
//   if(stktop==-1){
//     printf("Stack is Empty\n");
//   }
//   else{
//     printf("Stack Elment is :\n");
//     for(int i=0; i<=stktop; i++){
//        printf("%c",stk[i]);
//     }
//     printf("\n");
//   }
// }







// int stk[5], top=-1;

// void push(){
//   if(top==4){
//     printf("Stack is Full\n");
//   }
//   else{
//     top++;    // this is because if we add 1st value than it will go to garbage if top++ incremented in stk[]
//     printf("Enter any numbr:\t");
//     scanf("%d",&stk[top]);
//   }
// }

// void pop(){
//   if(top==-1){
//     printf("Stack is Empty\n");
//   }
//   else{
//     top--;
//   }
// }

// void display(){
//   if(top==-1){
//     printf("Stack is Empty\n");
//   }
//   else{
//     printf("Stack Elment is :\n");
//     for(int i=0; i<=top; i++){
//        printf("%d ",stk[i]);
//     }
//     printf("\n");
//   }
// }
// int front(){
//   if(top==-1){
//     printf("Stack is Empty\n");
//   }
//   else{
//     return stk[top];
//   }
// }

// void search(int key){
//   if(top==-1){
//     printf("Stack is Empty\n");
//   }
//   else{
//     int flag = 1;
    
//     for(int i=0; i<=top; i++){
//       if(stk[i] == key){
//         printf("%d is present at %d index\n",key,i);
//         return;
//       }
//       else{
//         flag = 0;
//       }
//     }

//     if(!flag){
//       printf("%d is not present\n",key);
//     }
//   }
// }







// int a = 0, b = 0, c = 0, a1 = 0, b1 = 0;
// int com[5] = {1, 0, 0, 0, 0};
// int anum[5] = {0}, acomp[5]={0}, anumcp[5] = {0};
// int bnum[5] = {0}, bcomp[5] = {0}, pro[5] = {0}, res[5] = {0};

// void binary(){
//     int a1 = fabs(a);
//     int b1 = fabs(b);
//     int r, r2, temp;
//     for (int i = 0; i < 5; i++){
//           r = a1 % 2;
//           a1 = a1 / 2;
//           r2 = b1 % 2;
//           b1 = b1 / 2;
//           anum[i] = r;
//           anumcp[i] = r;
          
//           bnum[i] = r2;
//           if(r2 == 0){
//                bcomp[i] = 1;
//           }
//           if(r == 0){
//                acomp[i] =1;
//           }
//     }
//   //part for two's complementing
//   c = 0;
//   for (int i = 0; i < 5; i++){
//           res[i] = com[i]+ bcomp[i] + c;
//           if(res[i] >= 2){
//                c = 1;
//           }
//           else
//                c = 0;
//           res[i] = res[i] % 2;
//     }
//   for (int i = 4; i >= 0; i--){
//     bcomp[i] = res[i];
//   }
//   //in case of negative inputs
//   if (a < 0){
//      c = 0;
//     for (int i = 4; i >= 0; i--){
//           res[i] = 0;
//     }
//     for (int i = 0; i < 5; i++){
//           res[i] = com[i] + acomp[i] + c;
//           if (res[i] >= 2){
//                c = 1;
//           }
//           else
//                c = 0;
//           res[i] = res[i]%2;
//     }
//     for (int i = 4; i >= 0; i--){
//           anum[i] = res[i];
//           anumcp[i] = res[i];
//     }
 
//   }
//   if(b < 0){
//     for (int i = 0; i < 5; i++){
//           temp = bnum[i];
//           bnum[i] = bcomp[i];
//           bcomp[i] = temp;
//     }
//   }
// }

// void add(int num[]){
//    int i;
//    c = 0;
//    for ( i = 0; i < 5; i++){
//           res[i] = pro[i] + num[i] + c;
//           if (res[i] >= 2){
//                c = 1;
//           }
//           else{
//                c = 0;
//           }
//           res[i] = res[i]%2;
//     }
//     for (i = 4; i >= 0; i--){
//         pro[i] = res[i];
//         printf("%d",pro[i]);
//     }
//   printf(":");
//   for (i = 4; i >= 0; i--){
//           printf("%d", anumcp[i]);
//     }
// }
// void arshift(){//for arithmetic shift right
//    int temp = pro[4], temp2 = pro[0], i;
//    for (i = 1; i < 5  ; i++){//shift the MSB of product
//       pro[i-1] = pro[i];
//    }
//    pro[4] = temp;
//    for (i = 1; i < 5  ; i++){//shift the LSB of product
//        anumcp[i-1] = anumcp[i];
//    }
//    anumcp[4] = temp2;
//    printf("\nAR-SHIFT: ");//display together
//    for (i = 4; i >= 0; i--){
//        printf("%d",pro[i]);
//    }
//    printf(":");
//    for(i = 4; i >= 0; i--){
//        printf("%d", anumcp[i]);
//    }
// }
 
// int main(){
//   int i, q = 0;
//   printf("\t\tBOOTH'S MULTIPLICATION ALGORITHM");
//   printf("\nEnter two numbers to multiply: ");
//   printf("\nBoth must be less than 16");
//   //simulating for two numbers each below 16
//   // do{
//        printf("\nEnter A: ");
//        scanf("%d",&a);
//        printf("Enter B: ");
//        scanf("%d", &b);
//     // }while(a >=16 || b >=16);
 
//    printf("\nExpected product = %d", a * b);
//    binary();
//    printf("\n\nBinary Equivalents are: ");
//    printf("\nA = ");
//    for (i = 4; i >= 0; i--){
//        printf("%d", anum[i]);
//    }
//    printf("\nB = ");
//    for (i = 4; i >= 0; i--){
//        printf("%d", bnum[i]);
//    }
//    printf("\nB'+ 1 = ");
//    for (i = 4; i >= 0; i--){
//        printf("%d", bcomp[i]);
//    }
//    printf("\n\n");
//    for (i = 0;i < 5; i++){
//           if (anum[i] == q){//just shift for 00 or 11
//               printf("\n-->");
//               arshift();
//               q = anum[i];
//           }
//           else if(anum[i] == 1 && q == 0){//subtract and shift for 10
//              printf("\n-->");
//              printf("\nSUB B: ");
//              add(bcomp);//add two's complement to implement subtraction
//              arshift();
//              q = anum[i];
//           }
//           else{//add ans shift for 01
//              printf("\n-->");
//              printf("\nADD B: ");
//              add(bnum);
//              arshift();
//              q = anum[i];
//           }
//     }
 
//     printf("\nProduct is = ");
//     for (i = 4; i >= 0; i--){
//           printf("%d", pro[i]);
//     }
//     for (i = 4; i >= 0; i--){
//           printf("%d", anumcp[i]);
//     }






   // int n;
    // printf("Enter Size of Paper You Want (eg., A0,A1,A2,A3....):\t");
    // scanf("%d",&n);

    // int arr[n+1][2];

    // printf("Enter Size of A0 paper (l X b):\t");
    // scanf("%d %d",&arr[0][0],&arr[0][1]);

    // for(int i=1; i<n+1; i++){
    //     for(int j=0; j<2; j++){
    //        if(j==0){
    //           arr[i][j] = arr[i-1][j+1];
    //        }
    //        else if(j==1){
    //           arr[i][j] = (arr[i-1][j-1])/2;
    //        }
    //     }
        
    // }
    // for(int i=0; i<n+1; i++){

    //    printf("A%d =  %d X %d mm\n",i,arr[i][0],arr[i][1]);
    //    printf("\n");
    // }


//  // UPPER & LOWER TRIANGLE PATTERN  
// int n=3;
//   for(int i=1; i<2*n; i++){
//      if(i<=n){

//          for(int j=1; j<=n-i; j++){
//           printf("  ");
//      }
//          for(int k=1; k<=i; k++){
//             printf("*   ");
//      }
//      }
//      else{
//          for(int m=1; m<=i-n; m++){
//             printf("  ");
//          }
//          for(int p=1; p<=(2*n-i); p++){
//             printf("*   ");
//          }
//      }
//    printf("\n");
//   }






//  int r;printf("Enter no :\t"); scanf("%d",&r);
//     for(int i=1; i<2*r; i++){
//         for(int j=1; j<2*r; j++){
//            if(i<=r){
//                    if(j<=r-i){
//                      printf("   ");
//                    }
//                    else if(j<r+i && j>r-i){
//                     printf("*  ");
//                    }
//            }else{
//                  if(j<=i-r){
//                     printf("   ");
//                  }
//                  else if((j<2*r-i+3) && j>i-r){
//                     printf("*  ");
//                  }
//            }
//         }
//         printf("\n");
//     }


 // // UPPER & LOWER TRIANGLE PATTERN  
// int n=4;
//   for(int i=1; i<2*n; i++){
//      if(i<=n){

//          for(int j=1; j<=n-i; j++){
//           printf("  ");
//      }
//          for(int k=1; k<=i; k++){
//             printf("*   ");
//      }
//      }
//      else{
//          for(int m=1; m<=i-n; m++){
//             printf("  ");
//          }
//          for(int p=1; p<=(2*n-i); p++){
//             printf("*   ");
//          }
//      }
//    printf("\n");
//   }




// //Armstrong no
// int ld,len=0,sum=0;

// for(int i=1; i<=1000; i++){
//     // loop to get length of no
//     for(int j=i; j!=0; j/=10){
//        len++;
//      }
//     // To get sum of all digit
//     for(int k=i; k!=0; k/=10){
//        ld=k%10;
//        sum+=pow(ld,len);
//     }
//     //To check no is Armstrong or not
//     if(sum==i){
//       printf("%d ",i);
//     }
//     len=0,sum=0;
// }
    


// ALPHABET PATTERN
// int n;
// printf("Enter no of rows   : ");
// scanf("%d",&n);
// char ch='A';    // Ascii value = 65

// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//        if(j<i){
//         printf("  ");
//        }
//        else{
//         printf("%c ",ch);
//         ch++;    // Ascii value ++
//        }

//     }
//    ch='A'; 
//    printf("\n");
// }


// void sliceReverse(char name[],int a,int n,int m){
//     for(int i=n; i<(m-n)/2; i++){
//         char temp=name[i];
//            name[i]=name[m-i-1];
//            name[m-i-1]=temp;
//     }
   
// }





// int digit(){
//  int digit=1481224141;

// int count=0;
// for(int i=digit; i != 0; i/=10 )
// {count++;
// }
// int i=digit;
// while(i != 0){
//     count++;
//     i/=10;
// }
// printf("%d is %d digit",digit,count);
// }





// int time(){
// int time;
// printf("Enter time in sec \n");
// scanf("%d",&time);
// int hour=time/3600;
// time-=(hour*3600);
// int min=time/60;
// time-=(min*30);
// int sec=time;
// // days=days%30;
// printf("Hours : Minute : Second ---------->%d :%d :%d",hour,min,sec);

// }


// int convert(){
// int days;
// printf("Enter days \n");
// scanf("%d",&days);
// int year=days/365;
// days=(days-year*365);
// int month=days/30;
// days=(days-(month*30));
// int day=days;
// // days=days%30;
// printf("Year : Month : Days ---------->%d :%d :%d",year,month,day);

// }




// int pass(int arr[],int n,int* max){  
//    for(int i=0; i<n; i++){
//       scanf("%d",&arr[i]);
//    }
//        *max=arr[0];
//        int a;
//    for(int i=0; i<n ; i++ ){
//       if((*max) <= arr[i]){
//          (*max)=arr[i];
//           a=i;
//       }
   
// }return a;
// }







// void rev(int arr[],int n){
//   for(int i=0; i<n/2; i++){
//      int temp=arr[i];
//      arr[i]=arr[n-i-1];
//      arr[n-i-1]=temp;
//   }
  

// }