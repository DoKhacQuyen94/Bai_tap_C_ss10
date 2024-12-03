#include<stdio.h>
int main(){
    int arr[5] ={9,4,2,0,6} ;
    int n = sizeof(arr) / sizeof(arr[0]);
    int searchValue =2;
    int check =-1;
    for (int i = 0; i < n; i++){
        if(searchValue == arr[i]){
            check=i;
        }
    }
    if(check != -1){
        printf("vi tri cua phan tu trong mang la: %d \n",check);
    }else{
        printf("phan tu khong ton ta trong mang");
    }
    return 0;
}