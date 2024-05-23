#include <iostream>

using namespace std;

// 52¿Â  1~13 A  10 J Q K
// Diamond 0
// Spade 1
// Clova 2
// Heart 3

int PlayerCard[10] = { 0, };
int ComputerCard[10] = { 0, };

int PlayerTotal = 0;
int ComputerTotal = 0;

void DrawCard()
{
	srand(time(nullptr));

	for (int i = 0; i < 2; ++i)
	{
		PlayerCard[i] = (rand() % 52);
	}

	for (int i = 0; i < 2; ++i)
	{
		ComputerCard[i] = (rand() % 52);
	}

	PlayerTotal = ((PlayerCard[0] % 13) + 1) + ((PlayerCard[1] % 13) + 1);
	ComputerTotal = ((ComputerCard[0] % 13) + 1) +((ComputerCard[1] % 13) + 1);
}

void DetermineGame()
{
	if (ComputerTotal > 21)
	{
		cout << "Ω¬∏Æ" << endl;
	}
	else if (ComputerTotal <= 21 && PlayerTotal > 21)
	{
		cout << "∆–πË" << endl;
	}
	else //if (ComputerTotal <= 21 && PlayerTotal <= 21)
	{
		if (ComputerTotal > PlayerTotal)
		{
			cout << "∆–πË" << endl;
		}
		else
		{
			cout << "Ω¬∏Æ" << endl;
		}
	}
}


int main()
{

	DrawCard();
	DetermineGame();

	return 0;
}