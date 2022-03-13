#include<stdio.h>

void showLocate();
void moveWithWoolf();
//void moveWithCabbage();
//void moveWithGoat();
//void moveAlone();

char* left[4] = { "wolf","goat","cabbage","man" };
char* right[4] = { 0, };


void main(void)
{
	int choose,i,j=0;

	
	

	printf("<--press [5] to restart, [6] to exit--> \n");
	printf("man move along with : [1] woolf[2]goat[3]cabbage[4]none of them");
	scanf("%d", &choose);
	
while (choose != 6) {
	switch (choose)
	{
	case 1:
		if (left[0] == "man" || left[1] == "man" || left[2] == "man" || left[3] == "man") {

			for (i = 0; i < 4; i++)
			{
				if (left[i] == "man")
				{
					left[i] = 0;
					while (right[j] != 0) { j++; }
					right[j] = "man";
					while (right[j] != 0) { j++; }
					right[j] = "woolf";
				}

			}
		}
		else {

			for (i = 0; i < 4; i++)
			{
				if (right[i] == "man")
				{
					right[i] = 0;
					while (left[j] != 0) { j++; }
					left[j] = "man";
					while (left[j] != 0) { j++; }
					left[j] = "woolf";
				}

			}
			j = 0;

		}


		showLocate();
		break;

	case 2: if (left[0] == "man" || left[1] == "man" || left[2] == "man" || left[3] == "man") {
		for (i = 0; i < 4; i++)
		{
			if (left[i] == "man")
			{
				left[i] = 0;
				while (right[j] != 0) { j++; }
				right[j] = "man";
				while (right[j] != 0) { j++; }
				right[j] = "goat";
			}

		}
		j = 0;
	}
		  else {
		for (i = 0; i < 4; i++)
		{
			if (right[i] == "man")
			{
				right[i] = 0;
				while (left[j] != 0) { j++; }
				left[j] = "man";
				while (left[j] != 0) { j++; }
				left[j] = "goat";
			}

		}
		j = 0;

	}
		  showLocate();
		  break;

	case 3: if (left[0] == "man" || left[1] == "man" || left[2] == "man" || left[3] == "man") {
		for (i = 0; i < 4; i++)
		{
			if (left[i] == "man")
			{
				left[i] = 0;
				while (right[j] != 0) { j++; }
				right[j] = "man";
				while (right[j] != 0) { j++; }
				right[j] = "cabbage";
			}

		}
		j = 0;
	}
		  else {
		for (i = 0; i < 4; i++)
		{
			if (right[i] == "man")
			{
				right[i] = 0;
				while (left[j] != 0) { j++; }
				left[j] = "man";
				while (left[j] != 0) { j++; }
				left[j] = "cabbage";
			}

		}
		j = 0;

	}
		  showLocate();
		  break;

	case 4: if (left[0] == "man" || left[1] == "man" || left[2] == "man" || left[3] == "man") {
		for (i = 0; i < 4; i++)
		{
			if (left[i] == "man")
			{
				left[i] = 0;
				while (right[j] != 0) { j++; }
				right[j] = "man";

			}

		}
		j = 0;
	}
		  else {
		for (i = 0; i < 4; i++)
		{
			if (right[i] == "man")
			{
				right[i] = 0;
				while (left[j] != 0) { j++; }
				left[j] = "man";

			}

		}
		j = 0;

	}
		  showLocate();
		  break;
	}
			  
			  printf("man move along with : [1] woolf[2]goat[3]cabbage[4]none of them");
			  scanf("%d", &choose);

		}
	
		
		
	}
	

//void moveWithWoolf()
//{
//	
//}


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

void moveWithWoolf()
{
	printf(" ");
	
}
