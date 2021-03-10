#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

using namespace std;
const int TAILLE = 10;

struct Player                   //Structure d'une fiche de joueur
{
       string name;               //Nom du joueur
       int TotalScore;          //Score du joueur
       int player;
       int BestSongPlayer;
};

int main()
{
    const int TAILLE = 10;
    Player player[TAILLE];

    int ranking;               //classment 
    int total = 0;             
    int i;               
    int GetScore;              //Score acquis à la fin de la partie
    int addNewScore;           //Personal Best
    int TotalScore;            //Score Totaux
    int MedScore;              //Score médian
    int Player;                
    int music0;                
    int music1;
    int music2;
    int music3;
    int BestSong = player[0].TotalScore;                //Meilleur score de toute les musiques
    int BestSongPlayer = 0;
    int WorstSong;             //Pire score de toute les musiques

    cout << "Enter player's name and point scored at the karaoke: " << endl;  //Nom du joueur + Point obtenue lors de la partie de karaoké
    for (i=0; i < TAILLE; i++)
    {
        cout << "Player's name: " << endl;          //Nom du joueur
        getline(cin, player[i].name);
        cout << "Number of player: " << endl;       //Nombre de joueur
        cin >> player[i].player;
        while (player[i].player < 0)
        {
            cout<< "1 player minimum." << endl;     //Minimum 1 joueur
            cin >> player[i].player;
        }
        cout << "Your score: " << endl;             //Notre Score
        cin >> player[i].TotalScore;
        while (player[i].TotalScore < 50)
        {
            cout<< "You can't have less than 50 points in a song." << endl;  //Valeur interdite 
            cin >> player[i].TotalScore;
        while (player[i].TotalScore > 100)
        {
             cout<< "You can't have more than 100 points in a song." << endl; //Valeur interdite
             cin >> player[i].TotalScore;
        }
        cin.ignore(1, '\n');
    }
    cout << "Ranking: ";        //Classement tableau
    for (i=0; i<TAILLE; i++)
    {
        cout << "Name: " << player[i].name << endl;             //Nom
        cout << "Player: " << player[i].player << endl;         //Le numéro du joueur
        cout << "Score: " << player[i].TotalScore << endl;      //Le score du joueur
        total += player[i].TotalScore;
    }
    cout << "Total Score: " << total << endl;               //Score totaux

    for (ranking = 1; ranking < TAILLE; ranking++)
    {
        if (player[ranking].TotalScore > BestSong)
        BestSong = player[ranking].TotalScore;
        BestSongPlayer = ranking + 1;
    
    }
    cout << "The best score is: " << BestSong << endl;          //Meilleur Score
    cout << "By: " << player[BestSongPlayer].name << endl;      //Remporté par [Joueur]


return 0;
}