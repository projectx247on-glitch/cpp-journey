// #include<iostream>
// using namespace std;

// int main(){
//     int grades[]={99,98, 100,89};

//     for(int grade :grades){
//         cout<< grade<<'\n';
//       //  break;
//       return 0;
//     }
//     cout<< "loop ended";
//        // return 0;
    
// }
#include<iostream>
using namespace std;

int subgrade(string courses[], string grades[]){
    for(string course: courses){
       if(grade== "S"){
        return 10;
       }
       else if(grade== "A"){
        return 10;
       }
       else if(grade== "AB"){
        return 9;
       }
       else if(grade== "B"){
        return 8;
       }
       else if(grade== "BC"){
        return 7;
       }
       else if(grade== "C"){
        return 6;
       }
       else if(grade== "CD"){
        return 5;
       }
       else if(grade== "D"){
        return 4;
         }
       else{
        return 0;
       }
    }

}
int main(){
  int grade;
    string grades[]= {"S","A","AB","B","BC","C","CD","D","F"};
    string courses[]= {"ISL", "BL_LAB", "CLP", "PPS", "BE", "CODE", "TCE"};
    for(course: courses){
        cout<< "enter grade for "<< course<<endl;
        cin>>grade;
    }
    subgrade(grades);
cout<< "your CPI is:";
int CPI = (ISL*1 + BL_LAB*1.5 + CLP*4 + PPS*4.5 + BE*4 + CODE*4 + TCE*3)/21;
cout<< CPI;

return 0;
}
