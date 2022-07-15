// Software Engineering Practical midterm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int Val(int in);
int main()
{
	float i = 0;

	int a1;
	int a2;
	int a3;
	int a4;

	bool test = true;
	bool test2 = true;
	bool test3 = true;
	bool test4 = true;


	while (test)
	{
		std::cout << "What is 1 + 1? \t 1 or 2?\n";
		std::cin >> a1;
		Val(a1);
		if (a1 < 1 && a1 > 2)
		{
			std::cout << "not a valid answer\n";
		}
		switch (a1)
		{
		case 2:
			std::cout << "correct!\n";
			i++;
			test = false;
			break;
		case 1:
			std::cout << "wrong!\n";
			test = false;
			break;
		}
	}

	system("pause");
	system("cls");

	while (test2)
	{
		std::cout << "How many inches are in a foot?\t 12 or 16?\n";
		std::cin >> a2;
		Val(a2);
		if (a2 < 12 && a2 > 16 || a2 > 12 && a2 < 16)
		{
			std::cout << "not a valid answer\n";
		}

		switch (a2)
		{
		case 12:
			std::cout << "correct!\n";
			i++;
			test2 = false;
			break;
		case 16:
			std::cout << "wrong!\n";
			test2 = false;
			break;
		}
	}

	system("pause");
	system("cls");

	while (test3)
	{

		std::cout << "How many questions have you answered so far?\t 1 2 or 3?\n";
		std::cin >> a3;
		Val(a3);
		if (a3 < 1 && a3 >3)
		{
			std::cout << "not a valid answer\n";
		}

		switch (a3)
		{
		case 1:
			std::cout << "wrong!\n";
			test3 = false;
			break;
		case 2:
			std::cout << "correct!\n";
			i++;
			test3 = false;
			break;
		case 3:
			std::cout << "wrong!\n";
			test3 = false;
			break;
		}
	}

	system("pause");
	system("cls");

	while (test4)
	{
		std::cout << "in a tank of 5 fish, 2 drown, 1 jumps out, and 2 got eaten\t how many would be left? 5 1 or 2?\n";
		std::cin >> a4;
		Val(a4);
		if (a4 < 0 && a4 > 2)
		{
			std::cout << "not valid input!\n";
		}

		switch (a4)
		{
		case 5:
			std::cout << "wrong!\n";
			test4 = false;
			break;

		case 1:
			std::cout << "wrong!\n";
			test4 = false;
			break;

		case 2:
			std::cout << "correct!\n";
			i++;
			test4 = false;
			break;
		}
	}

	system("pause");
	system("cls");


	std::cout << "Your score was a " << (i / 4.0) * 100 << "%!" << " That is a " << i << "/4";

	if (i < 2)
	{
		std::cout << "YEESHHH... do better next time";
	}
	else
	{
		std::cout << "\t nice!";
	}
}


int Val(int in)
{
	while (std::cin.fail())
	{


		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');


	}

	return in;

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
