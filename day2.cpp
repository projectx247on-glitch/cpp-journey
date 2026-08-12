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

//int showArray(int arr[], int size);
//does your function calculate/produce a value the caller needs to use later (int, string, bool...)? Use that type. Does it just do something (print, modify something directly) with nothing to hand back? Use void.
void showArray(int arr[], int size);

 int main(){
//     int size;
//     std::cout<< "enter the size of the array";
//     std::cin>>size;
//     int arr[size];
 int size;
std::cin >> size;      // size is only known once the USER types it, while running
int arr[size];          // using that unknown-until-runtime number as array size
//This is called a VLA (Variable Length Array) — an array whose size is decided while the program is running, not before. Standard C++ does not officially allow this 
 //— it's not part of the language rules. It happens to work on your machine because you're using GCC (g++), which added it as a bonus feature (a "compiler extension"). 
 //But if your code is compiled with a different compiler (like MSVC, common on Windows/Visual Studio) it would likely fail to compile at all.

  //   #include <vector>
// int size;
// std::cin >> size;
// std::vector<int> arr(size);   // this IS fully standard, works everywhere, any compiler
  //A vector is basically an array that's allowed to have its size decided at runtime — officially, safely,
    for(int i = 0; i< size; i++){
        std::cout<< "enter the element of the array";
        std::cin>>arr[i];
    }
  
    showArray(arr,size);
    return 0;
}
void showArray(int arr[], int size){
    std::cout<<"array is: ";
    
    for(int i = 0; i<size; i++){
        std::cout<<arr[i]<<'\n';
    }
}
