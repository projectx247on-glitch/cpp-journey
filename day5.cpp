 #include<iostream>

// int main(){
//     std::string arr[][3]= {{ "sdsa", "sdas", "sadde" },
//                            { "hhjk", "hjkhu", "gjhu" },
//                            { "hjkmi", "jyhkhni", "jmiko" }};
    
//     int rows = sizeof(arr)/sizeof(arr[0]);
//     int cols = sizeof(arr[0])/sizeof(arr[0][0]);
    
//     for(int i = 0; i< rows; i++){
//         for(int j = 0; j< cols; j++){
//             std:: cout<< arr[i][j]<<" ";
//         }
//         std::cout<<'\n';
//     }
//     return 0;
// }

// int main(){
//     std:: string arr[][5]= {"jhk","jhkj", "jhku", "jhdo", "kjlk"};
                         
// int rows = sizeof(arr)/sizeof(arr[0]);
// int cols = sizeof(arr[0])/sizeof(arr[0][0]);

    //// for(int i =0; i<3;i++){
    ////     for(int j = 0; j<3; j++){
//     for(int i = 0; i< rows; i++){
//         for(int j = 0; j< cols; j++){
//             std::cout<<arr[i][j]<<" ";
//         }
//         std::cout<<'\n';
//     } 
//     return 0;                   
// }

// int main(){
//     std::string Question[4]={"Question1:Which of the following headers is required for standard input and output operations in C++?",
//                              "Question2:What is the correct syntax to output \"Hello World\" in C++?",
//                              "Question3:Which data type is used to store fractional numbers (decimals) in C++?",
//                              "Question4:Which operator is used to take input from the user via std::cin?"};
               
//     std::string options[][4]={{"A) <stdio.h>", "B) <iostream>", "C) <stdlib.h>", "D) <conio.h>"},
//                               {"A) print(\"Hello World\")","B) System.out.println(\"Hello World\")","C) std::cout << \"Hello World\"","D) Console.WriteLine(\"Hello World\")"},
//                               {"A) int", "B) char", "C) bool", "D) float"},
//                               {"A) <<", "B) >>", "C) ==", "D) ->"}};

//     char answer[4] = {'B', 'C', 'D', 'B'};
    
//     float score =0;
    
//     for(int i = 0; i<4; i++){
//         std::cout<<Question[i]<<'\n';
//         for(int j=0; j<4; j++){
//             std::cout<<options[i][j]<<'\n';
//         }
//         char Answer;
//         std:: cout<<"enter your answer: ";
//         std::cin>>Answer;

//         if(Answer== answer[i]){
//            std:: cout<< "correct answer"<<'\n';
//               score++;
//         }
//         else{
//             std::cout<< "your answer is wrong, this is right answer:"<<answer[i]<<'\n';
//         }
//     }   
    
//     score = (score/4)*100;
//     std::cout<<"your score is: "<<score<<'\n';
//     return 0;
// }

int main(){
    int a;
    char b='l';
    float c;
    long d;
    double e;
    std::string f;
    std::cout<<&a<<" "<<&b<<" "<<&c<<" "<<&d<<" "<<&e<<" "<<&f;
    return 0;
}
