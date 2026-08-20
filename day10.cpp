#include<iostream>

using namespace std;

void board(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool matchResult(char *space, char player, char computer);

int main(){
    char spaces[9]= {' ',' ',' ',' ',' ',' ',' ',' ',' ',};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    board(spaces);
    while(running){
        playerMove(spaces, player);
        board(spaces);
        break;
    }


return 0;
}

void board(char *spaces){
    // cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    // cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    // cout<<"_____"<<"|"<<"_____"<<"|"<<"_____"<<endl;
    // cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    // cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    // cout<<"_____"<<"|"<<"_____"<<"|"<<"_____"<<endl;
    // cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    // cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    // cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<endl;
    cout<<"     |     |    "<<endl;
    cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<endl;

}

void playerMove(char *spaces, char player){
    int number;
    // cout<<"enter space(in 1 to 9):";
    // cin>>number;

    do{  cout<<"enter space(in 1 to 9):";
         cin>>number;
         number--;
       if(spaces[number]== ' '){
        spaces[number]= player;
        break;
       }
    }while(number>-1&&number<9);
}

void computerMove(char *spaces, char computer){
    
}

bool matchResult(char *space, char player, char computer){
    return 0;
}
