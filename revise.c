#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void showLocate();
void moveWith(char* mover);
void findLocation(char* mover);
int sameLocate(char* mover1, char* mover2);
int AskForUser(void);



#define LEFT 1
#define RIGHT 2
#define UNKNOWN 3


#define WOLF 0
#define GOAT 1
#define CABBAGE 2
#define MAN 3


char* left[4] = { "wolf","goat","cabbage","man" };
char* right[4] = { 0, };
int choose = 1, i, j = 0,moverNum;
int location[4];
int m1Location, m2Location;
int count;


int main(void)
{
	

	printf("<--press [5] to reset/ [6] to exit--> \n");
	printf("man move along with : [1] woolf[2]goat[3]cabbage[4]none of them\n");
	scanf("%d", &choose);

	while (choose < 5) {
		switch (choose)
		{
		case 1:
			if (sameLocate("man", "wolf")) {
				moveWith("man");
				moveWith("wolf");
				showLocate();
				break;
			}
			else {
				printf("They are not in the same place!\n");
				break;
			}

		case 2:
			if (sameLocate("man", "goat")) {
				moveWith("man");
				moveWith("goat");
				showLocate();
				break;
			}
			else {
				printf("They are not in the same place!\n");
				break;
			}

		case 3:
			if (sameLocate("man", "cabbage")) {
				moveWith("man");
				moveWith("cabbage");
				showLocate();
				break;
			}
			else {
				printf("They are not in the same place!\n");
				break;
			}

		case 4:
			moveWith("man");
			showLocate();
			break;

		case 6:
			return 0;

		case 5:
			if (AskForUser() == 1)
			{
				return 0;
			}
		}

		if (sameLocate("goat", "cabbage") == true && sameLocate("goat", "man") == false)
		{
			printf("Game Over: the cabbage was eaten by goat!\n");
			
			if (AskForUser() == 0)
			{
				return 0;
			}
			
		}
		if (sameLocate("goat", "wolf") == true && sameLocate("goat", "man") == false)
		{
			printf("Game Over: the goat was eaten by wolf!\n");
			if (AskForUser() == 1)
				return 0;
		}

		for (i = 0; i < 4; i++)
		{
			
			if (location[i] == RIGHT)count++;
			if (count == 4) {
				printf("You solve the problem.");
				return 0;
			}
		}
		count = 0;
		printf("man move along with : [1] woolf[2]goat[3]cabbage[4]none of them");
		scanf("%d", &choose);

	}



}



void findLocation(char* mover) {

	if (mover == "wolf")moverNum = WOLF;
	else if (mover == "goat")moverNum = GOAT;
	else if (mover == "cabbage")moverNum = CABBAGE;
	else moverNum = MAN;

	location[moverNum] = UNKNOWN;

	for (i = 0; i < 4; i++)
	{
		if (left[i] == mover)
		{
			location[moverNum] = LEFT;
		}
	}
	if (location[moverNum] == UNKNOWN)
	{
		location[moverNum] = RIGHT;
	}



}

void moveWith(char* mover)
{

	findLocation(mover);
	if (location[moverNum] == LEFT) {
		for (i = 0; i < 4; i++)
		{
			if (left[i] == mover)
			{
				left[i] = 0;
				while (right[j] != 0) { j++; }
				right[j] = mover;

			}

		}
	}
	else {

		for (i = 0; i < 4; i++)
		{
			if (right[i] == mover)
			{
				right[i] = 0;
				while (left[j] != 0) { j++; }
				left[j] = mover;

			}

		}

	}

	j = 0;

}

void showLocate()
{
	int i;
	printf("left:");
	for (i = 0; i < 4; i++)
	{
		if (left[i] != 0)
		{
			printf("%s ", left[i]);
		}
	}
	printf("\n");

	printf("right:");
	for (i = 0; i < 4; i++)
	{
		if (right[i] != 0)
		{
			printf("%s ", right[i]);
		}
	}
	printf("\n");
}

int sameLocate(char* mover1, char* mover2)
{
	
	findLocation(mover1);
	m1Location = location[moverNum];
	findLocation(mover2);
	m2Location = location[moverNum];
	if (m1Location == m2Location)
	{
		return true;
	}
	else return false;
}

int AskForUser(void)
{
	char answer;
	printf("Do you want to restart the game?(y/n)");
	getchar();
	scanf("%c", &answer);
	if (answer == 'Y' || answer == 'y')
	{
		left[0] = "wolf";
		left[1] = "goat";
		left[2] = "cabbage";
		left[3] = "man";

		for (int i = 0; i < 4; i++)
		{
			right[i] = " ";
		}

		answer = ' ';
		return 1;

	}
	else
	{
		return 0;
	}
}
