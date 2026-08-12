//from brocode...
#include<iostream>
int search(int arr[], int size, int element);
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index;
    int myNum;
    std::cout<<"enter element to search for:"<<'\n';
    std::cin>>myNum;

index = search(arr,size,myNum);
if(index != -1){
    std::cout<<"element found at index:"<<index<<'\n';
    return 0;
}
std::cout<<"element not found"<<'\n';
return 0;
}

int search(int arr[], int size, int element){
    for(int i = 0; i<size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}
