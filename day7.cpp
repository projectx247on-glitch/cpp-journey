#include<iostream>

// int main(){
//     int a = 2;
//     char b='l';
//     float c=23;
//     long d=3421;
//     double e= 4323;
//     std::string f="hii";
//     std::cout<<&a<<" "<<(void*)&b<<" "<<&c<<" "<<&d<<" "<<&e<<" "<<&f;
//     return 0;
// }

// // void swap(int &x, int &y);
// void swap(int x, int y);
// int main(){
//     int x=23;
//     int y =55;
    
//     swap(x,y);


//     std::cout<<"x: "<<&x<<'\n'<<"y: "<<&y;
    //std::cout<<"x: "<<x<<'\n'<<"y: "<<y;

//     return 0;
// }

// void swap(int x, int y){
//         std::cout<<"x: "<<&x<<'\n'<<"y: "<<&y;

//}
// void swap(int &x, int &y){
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
    
// }

// void swap(int x, int y);
// //void swap(const int x, const int y);
// // //void swap(int &x, int &y);
// int main(){
//     const int x =322;
//     const int y= 675;
//     swap(x,y);
//      std::cout<<"x: "<<x<<'\n'<<"y: "<<y;
// return 0;
// }

// void swap(int x, int y){
// void swap(const int x, const int y){
// // void swap(int &x, int &y){
//     int temp;
//     temp = x;
//     x= y;
//     y = temp;

// // }
// int OddNo(const std::string cardNo);
// int EvenNo(const std:: string cardNo);
// void valid(const std:: string cardNo);
// int getDigit(int number);

// int main(){
//     std:: string cardNo;
//     std::cout<< "enter credit card number: ";
//     std::cin>> cardNo;
//     OddNo(cardNo);
    
//     EvenNo(cardNo);
    
//     valid(cardNo);

//     return 0;

// }

// int getDigit(int number){
//     return ((number%10) + (number/10)%10);
     
// }
// int OddNo(std::string cardNo){
//     int sum = 0;
//     for(int i= cardNo.size()-1; i>=0; i-=2){
//         sum += cardNo[i]-'0';
//     }
//     return sum;
// }
// int EvenNo(std::string cardNo){
//     int sum;
//     for(int i= cardNo.size()-2; i>=0; i-=2){
//     sum += getDigit((cardNo[i] -'0')*2);
    
//     }
//     return sum;
// }
// void valid(std::string cardNo){
//     if((EvenNo(cardNo) +OddNo(cardNo))%10==0){
//        std:: cout<<"number is valid";
//     }
//     else
//     std::cout<<"number is invalid";

// }
