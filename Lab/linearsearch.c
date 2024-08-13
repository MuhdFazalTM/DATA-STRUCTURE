#include<stdio.h>
int search(int arr[50],int N,int x){
        for(int i=0;i<N;i++)
           if(arr[i]==x)
              return i;
         return -1;
     }
     
     int main(void)
     {
        int arr[50];
        int x,i,N;
        
        printf("Enter the number of input");
        scanf("%d",&N);
        printf("Enter the array elements");
        for(i=0;i<N;i++){
           scanf("%d",&arr[i]);
          } 
        printf("Enter the element to find");
        scanf("%d",&x);
        int result=search(arr,N,x);
        if(result==-1)
             printf("Elements is not present in array");
         else
             printf("Elements is present at index %d",result);
       }    
              
           
        
