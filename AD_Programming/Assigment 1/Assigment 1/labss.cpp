#include <iostream>
#include<string>

using namespace std;

struct Achievement
{
	string title;
	string description;
	int score;

};

struct  Game
{
	string name;
	string publisher;
	string developer;
	Achievement* achievement;
	int achievementCount;
};

struct platform
{
	string name;
	string manufacturer;
	Game* Game;
	int gameCount;
};

int main()
{
	int platformCount = 0;
	cout << "how many consoles would you like to create?" << endl;
	cin >> platformCount;
	platform* platforms = new platform[platformCount];

	//step 1
	for (int i =0; i < platformCount; i++)
	{
		platform& platform = platforms[1];
		cout << "what is the name of platform" << i + 1 << "?" << endl;
		cin >> platform.name;
		cout << "who makes the" << platform.name << "?" << endl;
		cin >> platform.manufacturer;
		cout << " how many games are on the " << platform.name << "?" << endl;
		cin >> platform.gameCount;
		platform.games = new Game[platform.gameCount];

		for(int j = 0; j < platform.gameCount; j++)
		{
			Game& game = platform.games[j]
		} 
	}

	//step 2
	for(int i = 0; i < platformCount; i++)
	{
		platform& platform = platforms[i];
		cout << "Name: " << platform.name << endl;
		cout << "manufacturer : " << platform.manufacturer << endl;
		cout << "number of games: " << platform.gameCount << endl << endl;
		for(int j = 0; j < platform.gameCount; j++)
		{
			Game& game = platform.game[j];
			cout << "wht is the name of the game" << j + 1 << "?" << endl;
			cin >> game.name;
			cout << "who publishes the " << game.name << "?"
			cin >> game.publisher;
			cout << "who develops the " << game.name << " ? " << endl;
			cin >> game.developer;
			cout << "How many achevment does" << game.name << "have ?" << endl;
			cin >> game.achievementCount;
			game.achievements = new Achievement
		}

	}

	return 0;
}