#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
1 = rock
2 = paper
3 = scissors
*/

int computerChoice()
{
    srand(time(NULL));
    int choice = rand() % 3+1;
    return choice;
}

void showSelectedOption(int option) 
{
    if (option == 1) cout << "Rock\n";
    if (option == 2) cout << "Paper\n";
    if (option == 3) cout << "Scissors\n";
}

int main()
{
    int userChoice = 1;
    int cChoice;
    int cCounter = 0, userCounter = 0;

    while(userChoice != 0)
    {
        cout<<"1-Rock\n2-Paper\n3-Scissors\n0-EXIT\n:";
        cin>>userChoice;
        if(userChoice == 0)
        {
            cout<<"You won "<< userCounter <<" times\n";
            cout<<"CPU won "<< cCounter <<" times\n";
            if(userCounter > cCounter)
            {
                cout<<"YOU HAVE WON!!";
            }
            else if(userCounter == cCounter)
            {
                cout<<"Tie";
            }
            else
            {
                cout<<"CPU WINS!!";
            }

            break;
        }
        cout<<"Your choice is :";
        showSelectedOption(userChoice);

        cout<<"Computer choice is: ";
        cChoice = computerChoice();
        showSelectedOption(cChoice);

        if(userChoice == 1 && cChoice == 2)
        {
            cout << "Computer Wins! Paper wraps Rock.\n\n";
            cCounter++;
        }
        else if(userChoice == 2 && cChoice == 3)
        {
            cout << "Computer Wins! Scissors cut Paper.\n\n";
            cCounter++;    
        }
        else if(userChoice == 3 && cChoice == 1) 
        {
            cout << "Computer Wins! Rock smashes Scissors.\n\n";
            cCounter++;    
        }
        else if(userChoice == 1 && cChoice == 3) 
        {
            cout << "You Win! Rock smashes Scissors.\n\n";
            userCounter++;    
        }
        else if(userChoice == 2 && cChoice == 1) 
        {
            cout << "You Win! Paper wraps Rock.\n\n";
            userCounter++;    
        }
        else if(userChoice == 3 && cChoice == 2) 
        {
            cout << "You Win! Scissors cut Paper.\n\n";
            userCounter++;
        }
        else 
        {
            cout<<"Tie, play again\n";
        }
    }

    return 0;
}