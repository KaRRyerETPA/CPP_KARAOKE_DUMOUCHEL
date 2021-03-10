#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
using namespace std;

class Player
{
    public:
        Player();
        void addNewScore(int PersonalBest);
        void GetScore(int Score) const;
        void TotalScore(int Total);
        void MedScore(int Moyenne);
        void BestSong(int Top);
        void WorstSong(int Worst);
    private:
        
};