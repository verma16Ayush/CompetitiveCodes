#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <unsigned long long int> leaderboard_scores;
    // stack <unsigned long long int> alice_scores;
    unsigned long int i, num_players, num_games, temp;
    cin>>num_players;
    //input only unique scores
    for ( i = 0; i < num_players; i++)
    {
        cin>>temp;
        if(leaderboard_scores.empty() || leaderboard_scores.top() != temp)
            leaderboard_scores.push(temp);
        
        // else if(leaderboard_scores.empty())
        //     leaderboard_scores.push(temp);
    }
    
    cin>>num_games;

    for ( i = 0; i < num_games; i++)
    {
        cin>>temp;
        while(!leaderboard_scores.empty() && temp >= leaderboard_scores.top())
        {
            leaderboard_scores.pop();
        }

        cout<<leaderboard_scores.size() + 1<<endl;
    }
    return 0;
}