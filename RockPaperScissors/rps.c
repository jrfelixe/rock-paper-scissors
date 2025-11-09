#include <stdio.h>
#include <string.h>

const char* RockPaperScissors(const char* player1, const char* player2)
{
	if (strcmp(player1, "rock") == 0 && strcmp(player2, "scissors") == 0)
	{
		return "Player 1";
	}
	return "invalid";
}

int main()
{
	printf("%s\n", RockPaperScissors("rock", "scissors")); // Should print "Player 1"
	return 0;
}
