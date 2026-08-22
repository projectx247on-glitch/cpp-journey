#include<iostream>
#include<ctime>
using namespace std;

void board(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool matchResult(char *spaces, char player, char computer);
bool tie(char *spaces);
int main(){
    char spaces[9]= {' ',' ',' ',' ',' ',' ',' ',' ',' ',};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    board(spaces);
    while(running){
        playerMove(spaces, player);
        board(spaces);
        
        if(matchResult(spaces, player,computer)){
            running = false;
            break;
        }

        else if(tie(spaces)){
            running = false;
            break;
        }
        computerMove(spaces, computer);
        board(spaces);

        if(matchResult(spaces, player,computer)){
            running = false;
            break;
        }

        else if(tie(spaces)){
            running = false;
            break;
        }
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

       if((number>-1&&number<9)){
       if(spaces[number]== ' '){
        spaces[number]= player;
        break;
       }
       }
    }while(true);
}

void computerMove(char *spaces, char computer){
    int number ;
    srand(time(0));
    while(true){
        number = rand()%9;
        if(spaces[number]==' '){
            spaces[number] = computer;
            break;
        }
    }
}

bool matchResult(char *spaces, char player, char computer){
    if(spaces[0]!=' '&&spaces[0]== spaces[1]&&spaces[1] == spaces[2]){
        spaces[0]== player?cout<<"you win":cout<<"you lost";
    }
    else if(spaces[3]!=' '&&spaces[3]== spaces[4]&&spaces[4] == spaces[5]){
        spaces[3]== player?cout<<"you win":cout<<"you lost";
    }

    else if(spaces[6]!=' '&&spaces[6]== spaces[7]&&spaces[7] == spaces[8]){
        spaces[6]== player?cout<<"you win":cout<<"you lost";
    }

    else if(spaces[0]!=' '&&spaces[0]== spaces[3]&&spaces[3] == spaces[6]){
        spaces[0]== player?cout<<"you win":cout<<"you lost";
    }
    else if(spaces[1]!=' '&&spaces[1]== spaces[4]&&spaces[4] == spaces[7]){
        spaces[1]== player?cout<<"you win":cout<<"you lost";
    }

    else if(spaces[2]!=' '&&spaces[5]== spaces[2]&&spaces[2] == spaces[8]){
        spaces[2]== player?cout<<"you win":cout<<"you lost";
    }

    else if(spaces[0]!=' '&&spaces[0]== spaces[4]&&spaces[4] == spaces[8]){
        spaces[0]== player?cout<<"you win":cout<<"you lost";
    }

    else if(spaces[2]!=' '&&spaces[2]== spaces[4&&spaces[4]] == spaces[6]){
        spaces[2]== player?cout<<"you win":cout<<"you lost";
    }

    else{
        return false;
    }
    
    return true;
}

bool tie(char *spaces){
    for(int i=0; i<9; i++){
        if(spaces[i]==' '){
       return false;
    }
    }
    cout<<"it's a tie";

    return true;
}
