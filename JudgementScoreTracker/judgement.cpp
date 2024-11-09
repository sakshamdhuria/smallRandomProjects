//worked how many times: 3
#include <bits/stdc++.h>

using namespace std;


void gameSim(int playerCount, vector<pair<int, char>> &vec, int gameNumber){
    int hands;
    cout<<"How many hands are in this round?"<<endl;
    cin>>hands;
    map<char, int> currRound;
    for(pair<int, char> ind: vec){
        currRound[ind.second]=0;
    }

    cout<<"Starting from "<<vec[gameNumber% (playerCount)].second<<" what is your prediction?"<<endl;
    vector<int> predictions(playerCount);
    int totalSum=0;
    for(int i=0; i<playerCount-1; i++){
        cin>>predictions[(i+gameNumber)% (playerCount)];
        totalSum+=predictions[(i+gameNumber)% (playerCount)];
    }
    cout<<"Last person you are not allowed to say "<<hands-totalSum<<endl;
    cin>>predictions[(playerCount-1+gameNumber)%(playerCount)];
    cout<<"Just every time someone wins let me know there corresponding char: "<<endl;
    for(int i=0; i<hands; i++){
        char wins;
        cin>>wins;
        currRound[wins]++;
    }
    for(int i=0;i<playerCount; i++){
        char currChar=vec[(i+gameNumber)% (playerCount)].second;
        vec[(i+gameNumber)% (playerCount)].first+=abs(currRound[currChar]-predictions[(i+gameNumber)% (playerCount)]);
    }
    cout<<"The current scores: "<<endl;
    for(pair<int, char> ind: vec){
        cout<<ind.second<<": "<< ind.first<<endl;
    }

}

int main(){
    cout<<"Hey, How many players are playing?"<<endl;
    int playerCount;
    cin>>playerCount;
    vector<pair<int, char>> vec(playerCount);
    cout<<"Before starting can you one by give a character representing each player"<<endl;
    for(int i=0; i<playerCount; i++){
        char c;
        cin>>c;
        vec[i].first=0;
        vec[i].second=c;
    }
    char ifContinue='n';
    int gameNumber=-1;
    do{
        gameNumber++;
        gameSim(playerCount, vec, gameNumber);
        cout<<"Would you like to conitnue? (y/n)"<<endl;
        cin>>ifContinue;
    }
    while(ifContinue=='y');
    
    cout<<"Thank you for playing? Here are the scores from the best to worst: "<<endl;
    sort(begin(vec), end(vec));
    for(pair<int, char> ind: vec){
        cout<<ind.second<<": "<< ind.first<<endl;
    }

}
