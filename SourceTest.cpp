#include <iostream>
#include <iomanip>

using namespace std;

const int NUMROWS = 25;
const int NUMCOLUMNS = 15;
const int DEFAULTPRICE = 10;

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
