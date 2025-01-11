#include <Stdio.h>
void Search(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Key is Present at Position %d",i);
            return;
        }
    }
    printf("Key is not Present");

}
int main(){
    int n;
    int k;
    printf("Enter a Number\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element at Position %d -> ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter an element to be Searched ->");
    scanf("%d",&k);
    
    Search(arr,k,n);
    return 0;

}
