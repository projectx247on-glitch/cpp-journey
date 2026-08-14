// #include<iostream>

// int search(std::string arr[], int size, std::string element);

// int main(){
//     std::string arr[] = {"apple","banana","cherry","elderberry"};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int index;
//     std::string myStr;
//     std::cout<<"enter string to search for:"<<'\n';
//     std::cin>>myStr;

//     index = search(arr, size, myStr);
//     if(index != -1){
//         std::cout<<"string found at index: "<<index<<'\n';
//     }
//     else{
//         std::cout<<"string not found"<<'\n';
//     }
//     return 0;
// }

// int search(std::string arr[], int size, std::string element){
//     for(int i = 0; i<size; i++){
//         if(arr[i] == element){
//             return i;
//         }
//     }
//     return -1;
// }

// #include<iostream>

// void shortArr(int arr[], int size);

// int main(){
//     int arr[] = {10,1,32,4,5,6,23,8,9,2};
//     int size = sizeof(arr)/sizeof(arr[0]);
    
//     for(int element : arr){
//         std::cout<<element<<" ";
//     }
//  shortArr(arr,size);
 
//     std::cout<<'\n';
//     for(int element : arr){
//         std::cout<<element<<" ";
//     }
//     return 0;
// }

// void shortArr(int arr[], int size){
//     for(int i = 0; i<size-1; i++){
//         for(int j = 0; j<size-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// #include<iostream>
// #include<algorithm>
// int main(){
//     int size=33;
//     std::string arr[size];
//     fill(arr, arr+ size/3, "hey");
//     fill(arr+size/3, arr+2*size/3, "ho");
//     fill(arr+2*size/3, arr+size, "hi");

//     for(std::string element : arr){
//         std::cout<<element<<" ";
//     }
//     return 0;
// }

// #include<iostream>

// int main(){
//     std:: string foods[5];
//     int size = sizeof(foods)/sizeof(foods[0]);
//     for(int i = 0; i< size; i++){
//         std:: cout<< "enter food you like or q for quit #"<<i+1<<'\n';
// std::getline(std::cin, foods[i]);
//         if(foods[i] == "q"){
//             break;
//         }
//     }
    
//     //for(int i = 0; !foods[i].empty(); i++){
//     for(int i = 0; i<size && !foods[i].empty(); i++){
//     if(foods[i] != "q"){
//             std::cout<<foods[i]<<'\n';
//         }
//     }
//     return 0;
// }
