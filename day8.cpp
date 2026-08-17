#include<iostream>

int main(){
    std:: string name ="project247";
    std:: string *pname = &name;
    std:: cout<<*pname<<'\n';

    std:: string pizza[5]= {"pizza1","pizza2", "pizza3", "pizz4","pizza5"};
    std:: string *ppizza=pizza;
    std:: cout<<*ppizza<<'\n';

    return 0;
}
