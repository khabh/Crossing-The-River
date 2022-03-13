#include<stdio.h>
#include<string.h>

void showLocate();
void moveWith(char* mover);
int findLocation(char* mover);

#define LEFT 1
#define RIGHT 0
#define UNKNOWN 3
#define WOLF 0
#define GOAT 1
#define CABBAGE 2
#define MAN 3


char* left[4] = { "wolf","goat","cabbage","man" };
char* right[4] = { 0, };
int choose = 1, i, j = 0;
int location;


void main(void)
{
	printf("<--press [5] to restart, [6] to exit--> \n");
	printf("man move along with : [1] woolf[2]goat[3]cabbage[4]none of them");
	scanf("%d", &choose);

	while (choose <6) {
		switch (choose)
		{
		case 1:
			moveWith("man");
			moveWith("wolf");
			showLocate();
			break;

		case 2:
			moveWith("man");
			moveWith("goat");
			showLocate();
			break;

		case 3:
			moveWith("man");
			moveWith("cabbage");
			showLocate();
			break;

		case 4:
			moveWith("man");
			showLocate();
			break;
		}



		printf("man move along with : [1] woolf[2]goat[3]cabbage[4]none of them");
		scanf("%d", &choose);

	}



}

void findlocation(char* mover) {
	
	for (i = 0; i < 4; i++)
	{
		if (left[i] == mover)
		{
			location = LEFT;
		}
	}
	if (location == UNKNOWN)
	{
		location = RIGHT;
	}


	
}

void moveWith(char* mover)
{
	findlocation(mover);
	if (location==LEFT){
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
	location = UNKNOWN;
	
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
