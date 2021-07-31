#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
bool checkcont=1;
const char p1 ='X';
const char p2 ='O';
char board[9]= {'1','2','3','4','5','6','7','8','9'};
void linePrinter(int temp){
  for(int i=0; i< temp; i++){
    cout << "=";
  }
  cout << endl;
}
void spacePrinter(int temp){
 for(int i=0; i < temp; i++){
    cout << " ";
 }

}
void boardPrinter(){
    int trash=0;
    for(int i=0;i<3;i++){
        linePrinter(17);
        cout <<"||"; spacePrinter(1);cout<< board[trash]; spacePrinter(1);
        trash++;
        cout <<"||"; spacePrinter(1); cout<< board[trash]; spacePrinter(1);
        trash++;
        cout << "||"; spacePrinter(1); cout<< board[trash]; spacePrinter(1); cout<<"||" << endl;
        trash++;

    }
        linePrinter(17);
        cout << endl;
}

void checkP1(){
if(board[0]==p1){
    if(board[1]==p1){
        if(board[2]==p1){
            cout << "player 1 win" << endl;
            system("pause");
        }
    }
}
if(board[3]==p1){
    if(board[4]==p1){
        if(board[5]==p1){
            cout << "player 1 win" << endl;
            system("pause");
        }
    }
}
if(board[6]==p1){
    if(board[7]==p1){
        if(board[8]==p1){
            cout << "player 1 win" << endl;
            system("pause");
        }
    }
}
if(board[0]==p1){
    if(board[3]==p1){
        if(board[6]==p1){
            cout << "player 1 win" << endl;
            system("pause");
        }
    }
}
if(board[1]==p1){
    if(board[4]==p1){
        if(board[7]==p1){
            cout << "player 1 win" << endl;
            system("pause");
        }
    }
}
if(board[2]==p1){
    if(board[5]==p1){
        if(board[8]==p1){
            cout << "player 1 win" << endl;
            system("pause");
        }
    }
}
if(board[0]==p1){
    if(board[4]==p1){
        if(board[8]==p1){
            cout << "player 1 win" << endl;
            system("pause");
        }
    }
}
if(board[2]==p1){
    if(board[4]==p1){
        if(board[6]==p1){
            cout << "player 1 win" << endl;
            system("pause");
        }
    }
}

}
void checkP2(){
if(board[0]==p2){
    if(board[1]==p2){
        if(board[2]==p2){
            cout << "player 2 win" << endl;
            system("pause");
        }
    }
}
if(board[3]==p2){
    if(board[4]==p2){
        if(board[5]==p2){
            cout << "player 2 win" << endl;
            system("pause");
        }
    }
}
if(board[6]==p2){
    if(board[7]==p2){
        if(board[8]==p2){
            cout << "player 2 win" << endl;
            system("pause");
        }
    }
}
if(board[0]==p2){
    if(board[3]==p2){
        if(board[6]==p2){
            cout << "player 2 win" << endl;
            system("pause");
        }
    }
}
if(board[1]==p2){
    if(board[4]==p2){
        if(board[7]==p2){
            cout << "player 2 win" << endl;
            system("pause");
        }
    }
}
if(board[2]==p2){
    if(board[5]==p2){
        if(board[8]==p2){
            cout << "player 2 win" << endl;
            system("pause");
        }
    }
}
if(board[0]==p2){
    if(board[4]==p2){
        if(board[8]==p2){
            cout << "player 2 win" << endl;
            system("pause");
        }
    }
}
if(board[2]==p2){
    if(board[4]==p2){
        if(board[6]==p2){
            cout << "player 2 win" << endl;
            system("pause");
        }
    }
}

}
void enterNUmp1(){
    int temp;
    cout << "Player-1 Enter(1-9): ";
    cin >> temp;
    if(board[temp-1]==p1||board[temp-1]==p2){
      cout << "error!" << endl;
        checkcont=0;
        system("pause");
        cout << board[temp-1] << endl;

    }
    else{
         board[temp-1]= p1;
         checkcont=1;
    }
}
void enterNUmp2(){
    int temp;
    cout << "Player-2 Enter(1-9): ";
    cin >> temp;
    if(board[temp-1]==p1||board[temp-1]==p2){
      cout << "error!" << endl;
        checkcont=0;
        system("pause");
        cout << board[temp-1] << endl;

    }
    else{
         board[temp-1]= p2;
         checkcont=1;

    }
}


int main(){
char again='y';
char rest1='y';
char rest2='y';
int num=0;
while(again=='y'){
boardPrinter();
while(rest1=='y'){
enterNUmp1();
if(checkcont==0){
    continue;
}
else{
    rest1='n';
    num++;
}

system("cls");
boardPrinter();
checkP1();
}
if(num>=8){
 system("cls");
boardPrinter();
 cout << "draw" << endl;
 system("pause");
 again='n';
 break;

}
while(rest2=='y'){
enterNUmp2();
if(checkcont==0){
    continue;
}
else{
    rest2='n';
    num++;
}

system("cls");
boardPrinter();
checkP2();
}

system("cls");

rest1='y';
rest2='y';
}
return 0;

}
