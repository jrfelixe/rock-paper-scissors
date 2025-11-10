#include <stdio.h>
#include <string.h>
#include "rps.h"

const char* RockPaperScissors(const char* player1, const char* player2)
{
	// Validate moves
	if (
		(strcmp(player1, "rock") != 0 && strcmp(player1, "paper") != 0 && strcmp(player1, "scissors") != 0) ||
		(strcmp(player2, "rock") != 0 && strcmp(player2, "paper") != 0 && strcmp(player2, "scissors") != 0)
	)
		return "invalid";

	// Check for Player 1 winning conditions
	if (strcmp(player1, "rock") == 0 && strcmp(player2, "scissors") == 0)
	{
		return "Player 1";
	}
	else if (strcmp(player1, "scissors") == 0 && strcmp(player2, "paper") == 0)
	{
		return "Player 1";
	}
	else if (strcmp(player1, "paper") == 0 && strcmp(player2, "rock") == 0)
	{
		return "Player 1";
	}
	//Check for draw if both players choose the same move
	else if (strcmp(player1, player2) == 0)
	{
		return "Draw";
	}
	//If none of the above if true, Player 2 wins
	else
	{
		return "Player 2";
	}
}

int main()
{
	return 0;
}
