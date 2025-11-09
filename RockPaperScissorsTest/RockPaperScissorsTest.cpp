#include "pch.h"
#include "CppUnitTest.h"

extern "C" const char* RockPaperScissors(const char* player1, const char* player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTest
{
	TEST_CLASS(RockPaperScissorsTest)
	{
	public:

		TEST_METHOD(Player1Wins)
		{
			// Player 1 chooses Rock, Player 2 chooses Scissors
			Assert::AreEqual("Player 1", RockPaperScissors("Rock", "Scissors"));
		}
	};
}
