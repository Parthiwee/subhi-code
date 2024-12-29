#include<stdio.h>
int main(){
    /*printf("HELLO WORLD");
    return 0;*/

    


    int n;
    printf("enter numbers:");                            //1
    scanf("%d",&n);                                      //1 3
    for(int i=1;i<=n;i++){                               //1 3 5
        for(int j=1;j<=i;j++){                           //1 3 5 7 
           printf("%d ",2*(j-1)+1);
        }
        printf("\n");
    }
    return 0;
    
    
    

    /*/int n;                                            //1 2 3 4 5
    printf("enter numbers:");                            //1 2 3 4
    scanf("%d",&n);                                      //1 2 3
    for(int i=1;i<=n;i++){                               //1 2
        for(int j=1;j<=n+1-i;j++){                       //1
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;*/



    /*/int n;
    printf("enter numbers:");             
                       //1
    scanf("%d",&n);                                          //1 2
    for(int i=1;i<=n;i++){                                   //1 2 3
        for(int j=1;j<=i;j++){                               //1 2 3 4
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;*/




    /*/int n;
    printf("enter numbers:");                                //1
    scanf("%d",&n);                                          //2 2
    for(int i=1;i<=n;i++){                                   //3 3 3
        for(int j=1;j<=i;j++){                               //4 4 4 4
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;*/




    /*/int n;                                                         
    printf("enter no. of rows:");                                 //rows:4   
    scanf("%d",&n);                                               //* * * * 
    for(int i=1;i<=n;i++){                                        //* * *
        for(int j=n-i+1;j>=1;j--){                                //* *
            printf("* ");                                         //*
        }
        printf("\n");
    }
    return 0;*/



    /*/int n;                                                         //rows:4
    printf("enter no. of rows:");                                     //columns:5
    scanf("%d",&n);                                                   //12345
    int m;                                                            //12345
    printf("enter no. of columns:");                                  //12345
    scanf("%d",&m);                                                   //12345
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        printf("%d",j);
        }
        printf("\n");   
    }
    return 0;*/
    




    /*/int n;
    printf("enter no. of rows:");
    scanf("%d",&n);                                                                 
    int m;
    printf("enter no. of columns:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;*/



    /*/for(int i=1;i<=3;i++){                            // *****
        for( int j=1;j<=5;j++){                          // *****
            printf("*");                                 // *****
        }
        printf("\n"); 
    }
    return 0;*/





    /*/int n;
    printf("enter number:");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;*/





    /*/for(int i=5;i<=50;i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n",i);   
    }
    return 0;*/




   /*/int n;
   do{
    printf("enter numbers:");
    scanf("%d",&n);
    printf("%d\n",n);
    if(n%7==0){
        break;
    }
   }while(1);
   printf("its a multiple of 7");
   return 0;*/

}



    /*/to print table
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;*/




    /*/to print sum of n natural numbers
    int n;
    printf("enter number:");
    scanf("%d",&n);
     int sum =0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
        
    }
    printf("%d",sum);
    return 0;*/





   /*/use of do while loop
   int i=1;
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=5);
    return 0;*/




    /*/use of while loop
    int n;
    printf("enter numbers:");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;

}*/


    /*/use of for
    for(int i=1;i<=5;i++){
        printf("%d\n",i);
    }
    return 0;*/





    /*/ 1.--------------print array values-------------
     int numbers[10];
     for(int i=0;i<10;i++)
     {
         printf("the value of %d element of array is",i);
         scanf("%d",&numbers[i]);
    }*/




/*/ 2.------------------take array values and print in reverse order------------------
     int arr[5];
     printf("enter array elements:");
     for(int i=0;i<5;i++){
         scanf("%d",&arr[i]);
     }
     printf("reverse array elements:");
     for(int i=4;i>=0;i--){
         printf("%d\n",arr[i]);
     }*/



/*/3. ----------------take array input and print its sum------
 int arr[5];
 printf("enter array elements:");
 for(int i=0;i<5;i++){
     scanf("%d",&arr[i]);
}
 printf("%d",arr[1]+arr[2]+arr[3]+arr[4]+arr[0]);
 */


/*/#include<stdio.h>
void print();
int main(){
    print();
    return 0;
}
void print(){
    printf("hello\n");
    printf("goodbye\n");
}*/


/*/#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char ch;
    printf("enter your nationality:");
    scanf("%c",&ch);
    if(ch=='i'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("namaste");
}
void bonjour(){
    printf("bonjour");
}*/



