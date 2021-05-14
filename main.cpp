#include "iostream"
#include "cstring"
#include "windows.h"
#include"gamingzone.h"
using namespace std;
void color();
void square();
int menu();
void main_menu();
int main()
{
    color();
	int i,j,k;
	char ch;
	char arr[]="WELCOME TO GAMING ZONE MANAGEMENT SYSTEM CLICK ANY KEY TO CONTINUE ";
	STYLE(arr,strlen(arr));
	ch=getchar();
	system("cls");
	main_menu();
}
void color()
{
	system("COLOR 1");
}
int menu()
{
	int i;
	char Sign[] = "1 Sign Up";
	char play[] = "2 Play Game ";
	char view[] = "3 View Game Info ";
	char game[] = "4 Gaming Machine ";
	char tour[] = "5 Tournaments ";
	char Earn[] = "6 Earnings ";
	char Exit[] = "7 Exit ";
	char men[]= "E A G A M I N G M E N U";
	square();
	gn();
    gotoxy(34,12);
    STYLE1(men,strlen(men));
    void gun();
    gotoxy(25,16);
	STYLE1(Sign,strlen(Sign));
	gotoxy(25,18);
	STYLE1(play,strlen(play));
	gotoxy(25,20);
	STYLE1(view,strlen(view));
	gotoxy(25,22);
	STYLE1(game,strlen(game));
	gotoxy(25,24);
	STYLE1(tour,strlen(tour));
	gotoxy(25,26);
	STYLE1(Earn,strlen(Earn));
	gotoxy(25,28);
	STYLE1(Exit,strlen(Exit));
	gotoxy(25,30);
	cout<<"  Enter your choice: ";
	cin>>i;
	return i;
}
void main_menu()
{
    int t;
	while(1)
	{
	t = menu();	
	try{
	if(t>7 || t<=0)
	{
	throw exception();	
	}
    }
    catch(exception ob)
	{
		system("cls");
		cout<<ob.what();
		exit(0);
	}
	switch(t)
	{	
		case(1):
		{
		manu();
		break;
		}
		case(2):
		{
		play_menu();
		break;
		}
		case (3):
		game_menu();
		break;
		case (4):
		number_menu();
		break;
		case (5):
		tournament_menu();
		break;
		case (6):
		show_earning();
		break;
		case (7):
        {
		system("cls");
		exit (0);
		break;
	    }
		default:
		break;
	}
}
}
void square()
{
int i,j;
gotoxy(0,10);
cout<<"\t\t";
for(int i=0;i<30;i++)
{
Sleep(50);
cout<<"* ";
}
cout<<"\n";
for(i=1;i<=30;i++)
{
	cout<<"\t\t";
	Sleep(50);
	for(j=1;j<=30;j++)
	{
	if((i==4||i==30)||(j<=1||j>=30))
    {
	Sleep(50);
	cout<<"* ";
	}
	else
	cout<<"  ";
	}
	cout<<"\n";
}
}  //FUNCTION END

