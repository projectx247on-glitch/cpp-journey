// #include<iostream>

// double getTotal(double prices[], int size);

// int main(){
//  double prices[] = { 2.99, 99.99, 57.98,488.29};
 
//  int size = sizeof(prices)/sizeof(prices[0]);
//  double total = getTotal(prices, size);
//  std::cout<< "$"<< total;
//  return 0;
// }

// double getTotal(double prices[], int size){
//     double total = 0;
//     for(int i = 0; i< size; i++){
//         total += prices[i];
        
//     }
//     return total;
//     }

#include<iostream>

int showArray(int arr[], int size);

int main(){
    int size;
    std::cout<< "enter the size of the array";
    std::cin>>size;
    int arr[size];

    for(int i = 0; i< size; i++){
        std::cout<< "enter the element of the array";
        std::cin>>arr[i];
    }
  
    showArray(arr,size);
    return 0;
}
int showArray(int arr[], int size){
    std::cout<<"array is: ";
    
    for(int i = 0; i<size; i++){
        std::cout<<arr[i]<<'\n';
    }
}
