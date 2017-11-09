#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
string computerMove ();
string myMove();
int whoWins(string me, string comp);
int main()
{


    string computer = "blank";
    string  me = "blank";

    int computerScore = 0;
    int myScore = 0;
    int bestOf = 0;
    string playornot = "abc";
    int playagain = 0;

    bool coward = false;
    bool gameOver = false;



        while (!coward){
        cout <<"The computer has challenged you to a rock, paper, scissors fight to the death."<<endl;
        cout <<"Do you accept its challenge? yes to accept. No to deny its challenge."<<endl;
        cin >>playornot;
        cout<<endl;
        if (playornot == "no"){
            cout <<"You have decided to cower in shame."<<endl;
            cout<<"You will now suffer the hellish reality that you are afraid of a bunch of ones and zeros. Good job."<<endl;
            coward = true;
        }


        else if (playornot == "yes") {

            while (!gameOver){
            cout<<"Congratulations on having some courage. I don't know if I would be so arrogant."<<endl;
            cout << "So you can either play the computer in rock-paper-scissors, best of 3, 5, or 7. Which do you choose?"<<endl;
            cin >>bestOf;
            cout<<endl;

                if (bestOf == 3){
                    myScore = 0;
                    computerScore = 0;
                    for (int i  = 0;i<=2;++i){
                        me = myMove();
                        computer = computerMove();
                        cout <<"You return "<<me<<" and computer returned "<<computer<<" ."<<endl;

                        if (whoWins(me,computer) == 0){
                            myScore +=1;
                        }
                        else if (whoWins(me,computer) == 1){
                            computerScore +=1;
                        }
                        else if (whoWins(me,computer) == 2){
                            myScore += 0;
                            computerScore +=0;
                            --i;
                        }
                        cout<<"It's "<<myScore<<" you and "<<computerScore<<" computer."<<endl;
                        if (myScore == 2){ i=3;}
                        else if (computerScore == 2){i=3;}
                    }
                    if (myScore>computerScore) cout<<"You win! Play again?"<<endl;
                    else if (computerScore>myScore)cout<<"You lose! Play again?"<<endl;
                }



                else if (bestOf == 5){
                    myScore = 0;
                    computerScore = 0;
                    for (int i  = 0;i<=4;++i){
                        me = myMove();
                        computer = computerMove();
                        cout <<"You return "<<me<<" and computer returned "<<computer<<" ."<<endl;
                        if (whoWins(me,computer) == 0){
                            myScore +=1;
                        }
                        else if (whoWins(me,computer) == 1){
                            computerScore +=1;
                        }
                        else if (whoWins(me,computer) == 2){
                            myScore += 0;
                            computerScore +=0;
                            --i;
                        }
                        cout<<"It's "<<myScore<<" you and "<<computerScore<<" computer."<<endl;
                        if (myScore == 3){ i=5;}
                        else if (computerScore == 3){i=5;}
                    }
                    if (myScore>computerScore) cout<<"You win! Play again?"<<endl;
                    else if (computerScore>myScore)cout<<"You lose! Play again?"<<endl;
                }



                else if (bestOf == 7){
                    myScore = 0;
                    computerScore = 0;
                    for (int i  = 0;i<=6;++i){
                        me = myMove();
                        computer = computerMove();
                        cout <<"You return "<<me<<" and computer returned "<<computer<<" ."<<endl;
                        if (whoWins(me,computer) == 0){
                            myScore +=1;
                        }
                        else if (whoWins(me,computer) == 1){
                            computerScore +=1;
                        }
                        else if (whoWins(me,computer) == 2){
                            myScore += 0;
                            computerScore +=0;
                            --i;
                        }
                        cout<<"It's "<<myScore<<" you and "<<computerScore<<" computer."<<endl;
                        if (myScore == 4){ i=7;}
                        else if (computerScore == 4){i=7;}
                    }
                    if (myScore>computerScore) cout<<"You win! Play again?"<<endl;
                    else if (computerScore>myScore)cout<<"You lose! Play again?"<<endl;
                }





                cout<<"Enter 0 to play again or 1 to quit."<<endl;
                cin >>playagain;
                cout<<endl;
                if (playagain == 0){
                        gameOver = false;

                }
                else if (playagain == 1) {
                    cout<<"Ya'll come back now ya here?"<<endl;

                    gameOver = true;
                    coward = true;
                }

            }
        }
        else {
            cout <<"Just what are you trying to pull here? Lets take it again from the top."<<endl;
            coward = false;
        }

    }
    return 0;
}
string computerMove(){
    string RPS = "NOTHINGBRO";
    //int cmove = 0;
    srand(time(0));

    switch(rand()%3){
    case 0:
        RPS = "rock";
        break;
    case 1:
        RPS = "paper";
        break;
    case 2:
        RPS = "scissors";
        break;


    }
    return RPS;
}

string myMove(){
    string RPS = "NOTHINGBRO";
    int move = 0;
    cout <<"Rock - 0. Paper - 1. Scissors - 2."<<endl;
    cin >>move;
    cout <<endl;
    switch (move){
        case 0:
            RPS = "rock";
            break;
        case 1:
            RPS = "paper";
            break;
        case 2:
            RPS ="scissors";
            break;

            }
        return RPS;
    }
int whoWins(string me, string comp){
    int whowins = 0;
    const int player = 0;
    const int computer = 1;
    const int tie = 2;
    if (me == "rock" && comp == "paper") whowins = computer;
    if (me == "rock" && comp == "scissors") whowins = player;
    if (me == "rock" && comp == "rock") whowins = tie;

    if (me == "paper" && comp == "rock") whowins = player;
    if (me == "paper" && comp == "paper") whowins = tie;
    if (me == "paper" && comp == "scissors") whowins = computer;

    if (me == "scissors" && comp == "paper") whowins = player;
    if (me == "scissors" && comp == "rock") whowins = computer;
    if (me == "scissors" && comp == "scissors") whowins = tie;

    return whowins;

}
