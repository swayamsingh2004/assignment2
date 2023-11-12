#include<stdio.h>
void in_matrix(int arr[][6],int n){
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
    {
        printf("enter %d,%d element",i,j);
        scanf("%d",&arr[i][j]);
    }}

}
void print_matrix(int arr[][6],int n){
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");}
}
void matrix_add(int arr1[][6],int arr2[][6],int n){
    for(int i=0;i<n;i++ ){
        for(int j=0;j<n;j++){
            printf("%d\t",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n=6;
    printf("enter matrix 1\n");
    int arr1[6][6];
    in_matrix(arr1,n);
    printf("matrix 1 is\n");
    print_matrix(arr1,n);
    printf("enter 2nd matrix\n");
    int arr2[6][6];
    in_matrix(arr2,n);
    printf("matrix 1 is\n");
    print_matrix(arr1,n);
    printf("added matrix is\n");
    matrix_add(arr1,arr2,n);

    return 0;
}