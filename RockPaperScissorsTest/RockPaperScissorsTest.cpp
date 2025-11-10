#include "pch.h"
#include "CppUnitTest.h"

extern "C" const char* RockPaperScissors(const char*, const char*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTest
{
	TEST_CLASS(RockPaperScissorsTest)
	{
	public:

		TEST_METHOD(Player1Wins)
		{
			Assert::AreEqual(std::string("Player 1"), std::string(RockPaperScissors("rock", "scissors")));
			Assert::AreEqual(std::string("Player 1"), std::string(RockPaperScissors("paper", "rock")));
			Assert::AreEqual(std::string("Player 1"), std::string(RockPaperScissors("scissors", "paper")));
		}
		TEST_METHOD(Player2Wins)
		{
			Assert::AreEqual(std::string("Player 2"), std::string(RockPaperScissors("rock", "paper")));
			Assert::AreEqual(std::string("Player 2"), std::string(RockPaperScissors("scissors", "rock")));
			Assert::AreEqual(std::string("Player 2"), std::string(RockPaperScissors("paper", "scissors")));
		}

		TEST_METHOD(Draw)
		{
			Assert::AreEqual(std::string("Draw"), std::string(RockPaperScissors("rock", "rock")));
			Assert::AreEqual(std::string("Draw"), std::string(RockPaperScissors("paper", "paper")));
			Assert::AreEqual(std::string("Draw"), std::string(RockPaperScissors("scissors", "scissors")));
		}
	};
}