#include <functional>
#include<iostream>
#include<string>

using namespace std;


 int main()
 {
	 string name;
	 string Character;
	 string CharacterName;
	 bool battle = true;
	 int health = 100;

	 cout << "It's a pleasure to welcome you" << endl;
	 cout << "please enter you name" << endl;
	 cin >> name;
	 cout << "please enter character name " << endl;
	 cin >> CharacterName;
	 cout << "you want to play as a wizard or human ?" << endl;
	 cin >> Character;

	 cout << "player type:" << Character << endl;
	 cout << "player name:" << CharacterName << endl;
	 cout << "health:" << health << endl;

	 cout << "are you ready to witness a battle ? #enter 1 for yes, enter 0 for no " ;
	 cin >> battle;

	if (battle == !true)
	{
		cout << "game over" << endl;
	}
	else
	{
		cout << "Enemy will taunt the player" << endl;
		cout << "Player performs a normal attack" << endl;
		cout << "Enemy will taunt the player" << endl;
		cout << "Player performs a special attack" << endl;
		cout << "Enemy performs normal attack" << endl;
		cout << "Enemy performs normal attack" << endl;
		cout << "Player performs special attack" << endl;
		cout << "Enemy taunts the player" << endl;
		cout << "Player performs special attack" << endl;
		cout << "Enemy dies" << endl;
		cout << "Player win the game, congratulation" << endl;
	}
		
	
	


	 return 0;

 }



