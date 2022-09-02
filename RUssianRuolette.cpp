#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

//function that prints if you survived or not
void checkLife(int i, vector<int>& players, int& alive_players, int player)
{
    if(i == 0)
        cout<<"You survived\n";
    else
    {
        cout<<"R.I.P.\t";
        players[player] = 0;
        --alive_players;
    } 
}

int main()
{
    (srand(time(NULL)));
    bool end = false;  //exit the game when only one player is alive
    int player = 0, max_players, alive_players;  
    int chamber, event = (rand() % 6) + 1;
    vector<int> players;

    cout<<"How many players ?: ";
    cin>> max_players;
    cin.ignore();
    alive_players = max_players;
    //fills the array whit 1 life for each player
    for(int i=0; i<max_players; i++)
    {
        players.push_back(1);
    }

    while(end == false)  //start the game
    {
        chamber = (rand() % 6) + 1;

        cout<<"\nPlayer "<< (player+1) <<" ,press 'ENTER' to pull the trigger...";
        cin.ignore();

        if(chamber != event)  //if shot was missed
        {
            cout<<"*click*\n";
            checkLife(0, players, alive_players, player);
            //goes to the next player
            player++;          
            if(player >= max_players)
            {
                player = 0;
                if(players.at(0) == 0)
                {
                    do
                    {
                        player++;
                    }while(players.at(player) == 0);
                }
            }  
            if(players.at(player) == 0)
            {   
                if(player == max_players-1)
                {
                    player = 0;
                    if(players.at(0) == 0)
                    {
                        do
                        {
                            player++;
                        }while(players.at(player) == 0);
                    }
                }
                else
                {
                    do
                    {
                        player++;
                    }while(players.at(player) == 0);
                }
                
            }
        }
        else
        {
            cout<<"BANG!\n";
            checkLife(1, players, alive_players, player);
            cout<<"Player "<< (player+1) <<" died.\n";
            //goes next to the current player
            player++;   
            if(player >= max_players)
            {
                player = 0;
                if(players.at(0) == 0)
                {
                    do
                    {
                        player++;
                    }while(players.at(player) == 0);
                }
            }         
            if(players.at(player) == 0)
            {   
                do
                {
                    player++;
                }while(players.at(player) == 0);
            }

            event = (rand() % 6)+ 1;
        }
        //ends the game when only one player is alive
        if(alive_players == 1)
            end = true;
    }
    cout<<"Player "<< (player+1) <<" wins, congratulations!!\n";

    return 0;
}