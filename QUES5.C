#include<stdio.h>

void input_arr(int arr[],int n){
for(int i=0;i<n;i++){
    printf("enter %d element\n",i+1);
        scanf("%d",&arr[i]);
    }
}
void print_arr_unique(int arr[],int n){
    for(int i=0;i<n;i++){
        int unique=1;
        for(int j=0;j<n;j++){
            if(i!=j&&arr[i]==arr[j]){
            unique=0;
            break;}

        }
   
        if(unique){
            printf(" Unique elements found in array are:%d\n",arr[i]);
        }
    }
}
    int main(){
        int n;
        printf("enter no. of element in array");
        scanf("%d",&n);
        int arr[n];
        input_arr(arr,n);
print_arr_unique(arr,n);
    return 0;
}