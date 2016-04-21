#include <iostream>
#include <iomanip>

using namespace std;

const int NUMROWS = 15;
const int NUMCOLUMNS = 20;
const int DEFAULTPRICE = 50;

void printSeats(char[NUMROWS][NUMCOLUMNS]);
int sellSeat(char[NUMROWS][NUMCOLUMNS], int[]);


int main()
{
	char seats[NUMROWS][NUMCOLUMNS];
	int seatPrices[NUMROWS];
	int totalRevenue = 0;
	int ticketsSold = 0;
	char menu = 'x';

	for (int i = 0; i < NUMROWS; i++)
	{
		seatPrices[i] = DEFAULTPRICE -4;
		for (int j = 0; j < NUMCOLUMNS; j++)
		{
			seats[i][j] = '*';
		}
	}
	do
	{
		system("cls");
		cout << "MENU" << endl
			<< "----------------" << endl
			<< "a) Sell Tickets" << endl
			<< "b) Calculate Revenue" << endl
			<< "c) Total Seats Sold" << endl
			<< "d) Print Seats" << endl
			<< "q) Quit" << endl;

		cin >> menu;

		switch (menu)
		{
		case 'a':
			sellSeat(seats, seatPrices);
			break;
		case 'b':
			break;
		case 'c':
			break;
		case 'd':
			system("cls");
			printSeats(seats);
			system("pause");
			break;
		}

		
	} while (menu != 'q');
	system("pause");
	return 0;
}

void printSeats(char seats[NUMROWS][NUMCOLUMNS])
{
	cout << "       ";
	for (int j = 0; j < NUMCOLUMNS; j++)
	{
		cout << setw(3) << j;
	}
	cout << endl;
	for (int i = 0; i < NUMROWS; i++)
	{
		cout << "Row " << setw(3) << i;
		for (int j = 0; j < NUMCOLUMNS; j++)
		{
			cout << setw(3) << seats[i][j];
		}
		cout << endl;
	}
}

int sellSeat(char seats[NUMROWS][NUMCOLUMNS], int prices[])
{
	int x = 0, y = 0;
	int totalAmount = 0;
	do
	{
		system("cls");
		printSeats(seats);

		cout << "Please enter the row of the seat you want to but. Insert -1 to quit" << endl;
		cin >> x;
		if (x == -1)
			break;

		cout << "Please enter the column of the seat you want to but. Insert -1 to quit" << endl;
		cin >> y;
		if (y == -1)
			break;

		if ( ((x > 0) && (y > 0)) && ( (x < NUMROWS) && (y < NUMCOLUMNS) ) )
		{
			seats[x][y] = '#';
			totalAmount += prices[x];
		}

	} while ((x != -1) || (y != -1));

	return totalAmount;
}