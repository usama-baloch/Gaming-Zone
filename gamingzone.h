#include "iostream"
#include "string.h"
#include "fstream"
#include "ctime"
#include "cstdlib"
#include "conio.h"
#include "cstring"
#include "vector"
#include "windows.h"
#include "sstream"
#include "unistd.h"
#include "stdlib.h"
#include "stdexcept"
#include "typeinfo"
#include "Header1.h"
using namespace std;
void ssquare();
void gotoxy(int column, int line);
void manu();
void play_menu();
void game_menu();
void number_menu();
void tournament_menu();
void show_earning();



//void function();  //=========================================FUNCTION FOR MANU=========================================
void funck();
void readfunction();
void funcky();

const int MAX_VALID_YR = 9999;
const int MIN_VALID_YR = 1800;
void ssquare(){
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

		for(j=1;j<=30;j++)
		{

			if((i==4||i==30)||(j<=1||j>=30))
			{
			cout<<"* ";
			Sleep(50);
		    }
			else
			cout<<"  ";
		}
		cout<<"\n";
	}
}
void fun_ssquare(){
int i,j;
gotoxy(0,10);
cout<<"\t\t";
for(int i=0;i<30;i++)
{
Sleep(20);	
cout<<"* ";	
}
cout<<"\n";
	for(i=1;i<=30;i++)
	{
		cout<<"\t\t";

		for(j=1;j<=30;j++)
		{

			if((i==4||i==30)||(j<=1||j>=30))
			{
			cout<<"* ";
			Sleep(25);
		    }
			else
			cout<<"  ";
		}
		cout<<"\n";
	}
}


class signup        //========================================SIGN UP CLASS===============================================//
{
	private:
		string name;
		int dd,mm,yy;
		string phone_number;
		
	public:
		void getdata();
};

class search :public signup     //============================CLASS FOR SEARCH DATA===========================================//
{
	public:
		void searchinfo();
};

class update:public search
{
	public:
		void updateinfo();
};

int fun(string p,string c)  //=================================FUNCTION FOR RECHECKING PASSWORD===========================//
{
	bool result=p.compare(c);
	if(result == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool len(string na)//================================BOOL FUNCTION FOR CHECKING THE LENGHT OF NAME:========================
{
    int lenght= na.size();
	if(lenght >=5 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int year(int year)
{
	int year1 = 2000;
	int year2 = 2010;
	if( year >= year1 && year <= year2 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int mnu()
{
	int i;
	char Sign[] = "1 Sign Up";
	char play[] = "2 Play Game ";
	char view[] = "3 View Game Info ";
	char game[] = "4 Gaming Machine ";
	char tour[] = "5 Tournaments ";
	char Earn[] = "6 Earnings ";
	char Exit[] = "7 Exit ";
	char men[]= " E A G A M I N G M E N U ";
	ssquare();
	gn();
    gotoxy(34,12);
    STYLE1(men,strlen(men));
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
void main_mnu()
{
	while(1)
	{
	switch(mnu())
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
		{
		game_menu();
		break;	
		}	
		case (4):
		{
		number_menu();
		break;	
		}	
		case (5):
		{
		tournament_menu();
		break;	
		}	
		case (6):
		{
		show_earning();
		break;		
		}
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

void signup::getdata()  //=====================================FUNCTION GETDATA===========================================//;
{
	int re,ye;
	int result;
	string user_name;
	do
	{
		gotoxy(25,19);
		cout<<"Enter a name more then 5 digits: "; 
		cin>>name;
         result = len(name);
	}while(result != 1);
	
            try{
			string user_name;
            int month = 12;
            gotoxy(25,20);
			cout<<"Enter Your Date In Following Method: ";
	        gotoxy(25,21);
			cout<<"Enter a Day Of Your Birth : ";
        	cin>>dd;
        	
			if(dd<=0)
        	throw range_error("Out of Range");
        	
        	gotoxy(25,22);
        	cout<<"Enter a Month Of The Birth: ";
	        cin>>mm;
	       
	        
	        if(mm<=0 || mm>=32)
        	throw range_error("Out of Range");
	        else
			{
				
			    do//======================================THIS IS FOR RECHECKING YEAR===================================================
				{
					gotoxy(25,23);
					cout<<" Enter A Year Of The Birth : ";
	                cin>>yy;
	                if(yy<=0)
        	        throw range_error("Out of Range");
	                else 
	                break;
	                
				}while(ye!=1);
			    }
			    }
			    catch(exception &t)
			    {
			    	system("cls");
			    	cout<<t.what()<<endl;
			    	cout<<typeid(t).name()<<endl;
			    	exit(0);
				}
	            
                if(ye == 1)
	            {
	            	gotoxy(25,24);
	                cout<<"Enter a Phone number: ";
	                cin>>phone_number;
	                string password;
	                char ch;
	                gotoxy(25,25);
	                cout<<"Enter Your Password : ";
	                cin>>password;
	                do
				    {
				 	    string pass ="";
				 	    gotoxy(25,26);
	                    cout<<"Enter Confirmation Password : ";
                        ch = _getch();
                        char a,b;
                        int i;
                        for(i=0;;)
                        {
                            a=getch();
                            if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
                            {
                                pass[i]=a;
                                ++i;
                                cout<<"*";
                            }
                            if(a=='\b'&&i>=1)
                            {
                                cout<<"\b \b";
                                --i;
                            }
                            if(a=='\r')
                            {
                                pass[i]='\0';
                                break;
                            }
                        }
                        re=fun(password,pass); //======================PARAMATRIZE PASSWORD===========================//
                        if(re == 1)
				     	{
				     		fun_ssquare();
				     		gotoxy(25,16);
				     		cout<<"ENTER USER NAME: ";
	                        cin>>user_name;
                            system("cls");
	                        cout<<"Wait for a 3 seconds while your passowrd is rechecking : ";
				            system("cls");
							sleep(10);
	                        fun_ssquare();
	                        
	                        gotoxy(25,16);
	                        gotoxy(25,17);
	                        cout<<"********************";
	                        gotoxy(25,18);
	                        cout<<"*  ACCESS GRANTED  *";
	                        gotoxy(25,19);
	                        cout<<"********************\n";
	                        gotoxy(25,20);
	                        Sleep(1);
	                        ofstream create("New user data.txt",std::ios_base::app);
	                        create<<name<<"\t"<<dd<<"/"<<mm<<"/"<<yy<<"\t"<<phone_number<<endl;
	                        create.close();
	                        
	                        
	                         ofstream createuser;//==============================FOR STORING USERNAME AND PASSWORD===========================
	                        createuser.open("USER NAME AND PASSWORD.txt",std::ios_base::app);//===========USERNAME AND PASSWORD FILE=======
	                        createuser<<user_name<<" "<<pass<<endl;
	                        createuser.close();
	                    
                        }
                        else
                        {
                        	gotoxy(25,16);
                            cout << "\nAccess aborted...\n";
                        }
	                }while(re != 1);
	                getch();
				}

}
vector<string> split (string s, string delimiter)
{
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;
    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) 
	{
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }
    res.push_back (s.substr (pos_start));
    return res;
}
void search::searchinfo() //==============================SEARCH USER INFO================================================//
{
	
	string q,x,p;
	int flag = 0 ;
	int d,m,y;
	gotoxy(25,17);
	cout<<"Enter a name that you want to read : ";
	cin>>q;
	ifstream readmyfile;
	readmyfile.open("New user data.txt", std::ifstream::out);
	while (getline(readmyfile,x)) {
		vector<string> cont = split(x, "\t");
        if(cont[0] == q) {
            flag = 1;
            gotoxy(25,18);
            cout << "Contact found. Details : ";
            gotoxy(25,19);
			cout<< cont[0] << " " << cont[1] << " " << cont[2];
            break;
        }
        else {
            flag = 0;
        }
    }
    if (!flag) { 
    gotoxy(25,19);
	cout << "Not found!!"; 
	gotoxy(25,20);
	cout<<"Press any key to return !";
	getch();
	}
    getch();
}

void update::updateinfo()
{
	string z,user,c,up_name;
	int flag=0;
	gotoxy(25,17);
	cout<<"check for a name to be update : ";
	cin>>user;
	ifstream file1;
	ofstream file2;
	file2.open("temp.txt",std::ios_base::app);
	
	file1.open("New user data.txt",std::fstream::in);
	
	while (getline(file1, c, '\t')) {
     if (c == user)
     {
     	gotoxy(25,18);
     	cout<<"Enter a updated name : ";
     	cin>>up_name;
     	 file2<<up_name<<"\t";
     	 flag=1;
	 }
       
    else
     file2<<c<<"\t";
} 
file1.close();
file2.close();
rename("temp.txt", "new user.txt");
remove ("new user.txt");
if(!flag)
{
	gotoxy(25,19);
	cout<<"File Not Found !!";
	gotoxy(25,20);
	cout<<"Press any key to return !";
	getch();
}
else
{
	gotoxy(25,19);
	cout<<"Update Successfully !!";
	gotoxy(25,20);
	cout<<"Press any key to return !";
	getch();
}
}

void  manu()//===========================================THIS IS THE MANU FUNCTION FOR SIGN UP MANU=======================================
{
	int c=1;
	char t[]="1.New User ";
	char t1[]="2.Search User Info";
	char t2[]="3.Update User Info";
	char t3[]="4.Return To The Manu: ";
	char a[]="F O R   N E W   U S E R ";
	char a1[]="E N T E R   T H E   F O L L O W I N G    D A T A: ";
	char s1[]="SEARCH USER INFO";
	char up[]="Update User Info :";
	while(1)
	{
		system("cls");
		fun_ssquare();
		int c;
		
	    gotoxy(25,16);
	    STYLE1(t,strlen(t));
		gotoxy(25,17);
	    STYLE1(t1,strlen(t1));
	    gotoxy(25,18);
	    STYLE1(t2,strlen(t2));
	    gotoxy(25,19);
	    STYLE1(t3,strlen(t3));
		cin>>c;
	    switch(c)
	    {
	    	case 1:
	    		{
	    			signup obj;
	    			fun_ssquare();
	    			gotoxy(25,16);
	    			STYLE1(a,strlen(a));
	    			gotoxy(25,17);
	    			STYLE1(a1,strlen(a1));
	    			obj.getdata();   // ================================CALLING FROM SIGN UP CLASS==========================
	    			cout<<"Press Any Key To Return On the MANU: ";
	    			getch();
	    			break;
				}
			case 2:
				{
					string s;
					fun_ssquare();
					gotoxy(25,16);
					STYLE1(s1,strlen(s1));
					search obj2;
					obj2.searchinfo();
					break;
				}
			case 3:
				{
					string s;
					fun_ssquare();
					gotoxy(25,16);
					STYLE1(up,strlen(up));
					update obj3;
					obj3.updateinfo();
					break;
				}
			case 4:
				{
					main_mnu();
					break;
				}
				
		}
	}
}

//-----------------------------------------------------------------------------------------------//
// coding for signup//
int input_username_password()
{
                    char pass[20];
                    char stored_password[20];   
                    char login_username[20];
                    char stored_username[20];

                    fstream pull("USER NAME AND PASSWORD.txt",std::fstream::in);
                    if (!pull) 
					{ 
                        cout<<"File not loaded!"<<endl;
                        return -1; 
                    }
                    gotoxy(25,19);
                    cout<<"Username: ";
                    cin>>login_username;
                    while(strcmp(login_username,stored_username))
					{ 

//if login and stored usernames are equal, function strcmp returns 0,
//at first loop they are certainly not, so it is: while(1)

                    pull>>stored_username;
                    if(pull.eof())
					{   //if it is the end of file
                       cout<<"Username does not exist. "<<endl;
                       return -1;  
                    }
               }
               pull>>stored_password; 

//since username and password are in the same line, password next to
//correctly inputted username is saved in stored_password
                gotoxy(25,20);
                cout<<"Password: ";   
//now user enters password to confirm username
    char pass2[80];
    int i;
    char a;
    for(i=0;;)
    {
        a=getch();
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
        {
            pass2[i]=a;
            ++i;
            cout<<"*";
        }
        if(a=='\b'&&i>=1)
        {
            cout<<"\b \b";
            --i;
        }
    if(a=='\r')
    {
    pass2[i]='\0';
    break;
    }
}
                int l=18;
                while(!strcmp(stored_password,pass2))
				{
					gotoxy(25,l++);
                    cout<<"Wrong password. "<<endl;
                    gotoxy(25,l++);
                    cout<<"Try again: ";
                    cin>>pass2;
                }
                return 1;
                cout<<"Login successful."<<endl;

}
//-----------------------------------------------------------------------------------------------//
// coding for game info//
class specification{
	int amplayer;//amount of players//
	float storage;//storage for a game
	char network_requirements[80]; //Means Online game or Offline 
	public:
	char name[80];
	void setspecification()
	{
	char t_game[] = "Enter Game Name :";
	char t_max[] = "Enter Maximum Number OF Players : ";
	char t_max1[]= "that can play this game : ";
	char t_net[]="Enter network requirements it can ";
	char t_net1[]="be online or offline or both : ";  
	char t_am[]="Enter The Amount Storage Game Consumes : ";
		system("cls");
	    fun_ssquare();
		gotoxy(25,16);
		STYLE1(t_game,strlen(t_game));
		fflush(stdin);
		gets(name);
		gotoxy(25,17);
		STYLE1(t_max,strlen(t_max));
		gotoxy(25,18);
		STYLE1(t_max1,strlen(t_max1));
		cin>>amplayer;
		fflush(stdin);
		gotoxy(25,19);
		STYLE1(t_net,strlen(t_net));
		gotoxy(25,20);
		STYLE1(t_net1,strlen(t_net1));
		fflush(stdin);
		gets(network_requirements);
		gotoxy(25,21);
		STYLE1(t_am,strlen(t_am));
		cin>>storage;
	    }
	    void storespecification()
	    {
		ofstream out;
		out.open("popo.dat",ios_base::out|ios_base::app|ios_base::binary);
		out.write((char*)(this),sizeof(*this));
	    out.close();
	    }
		void searchspecification()
		{
		char t_name[] = "Enter Game Name You Want To Show :";	
        gotoxy(25,11);
	    char gname[80];
	    system("cls");
	    fun_ssquare();
		gotoxy(25,16);
		STYLE1(t_name,strlen(t_name));
		fflush(stdin);
		gets(gname);
		int flag=0;
		ifstream fin;
		fin.open("popo.dat",ios_base::in|ios_base::binary);
		if(!fin.is_open())
		{
		system("cls");	
	    fun_ssquare();
		gotoxy(25,16);
		cout<<"file not found";
		gotoxy(25,17);
		cout<<"press any key to return to main menu";
		getch();
		}
		else
		{
     	fin.seekg(0,ios_base::beg);
		fin.read((char*)(this),sizeof(*this));
		while(!fin.eof()){
			if(!strcmp(gname,name))
			{
			showspecification();
			flag++;
			break;
		    }
			else
			fin.read((char*)(this),sizeof(*this));
		    }
		fin.close();
	    }
		if(flag==1)
		{
		system("cls");
		fun_ssquare();
		gotoxy(25,16);
		cout<<"Record displayed";
		gotoxy(25,17);
		cout<<"press any key to return to main menu";
		getch();
		}
		else
	    {
	    system("cls");	
		fun_ssquare();
		gotoxy(25,16);
		cout<<"Record not found";
		gotoxy(25,17);
		cout<<"press any key to return to main menu";
		getch();
	    } 
	}
	void updatespecifcation()
	{
	char t_name[] = "Enter Game Name You Want :";
	char t_name1[] ="To update data about : "; 	
	char ch[80];
	int i,k=0;
	system("cls");
	fun_ssquare();
	fflush(stdin);
	gotoxy(25,16);
	STYLE1(t_name,strlen(t_name));
	gotoxy(25,17);
	STYLE1(t_name1,strlen(t_name1));
	fflush(stdin);
	gets(ch);
	fstream file;
	ofstream file1;
	file1.open("Temp1.dat",ios_base::app|ios_base::binary);
	file.open("popo.dat",ios_base::in|ios_base::out|ios_base::app|ios_base::ate|ios_base::binary);
	if(!file.is_open() && !file1.is_open())
	{
		system("cls");
		fun_ssquare();
		gotoxy(25,16);
		cout<<"file not found";
		gotoxy(25,17);
		cout<<"press any key to return to main menu";
		getch();
	}
	else
	{
	file.seekg(0);
	file.read((char*)(this),sizeof(*this));
	while(!file.eof())
	{
		if(!strcmp(ch,name))
		{
		k=1;
		setspecification();
		file1.write((char*)(this),sizeof(*this));
		file.read((char*)(this),sizeof(*this));
		}
		else
		{
		file1.write((char*)(this),sizeof(*this));	
		file.read((char*)(this),sizeof(*this));	
		}
	}
}
	file.close();
	file1.close();
	remove("popo.dat");
	rename("Temp1.dat","popo.dat");
	if(k==1)
	{
		gotoxy(25,23);
		cout<<"Record updated!!";
		gotoxy(25,24);
		cout<<"press any key to return to main menu";
		getch();
	}
	else
	{
	gotoxy(25,23);
    cout<<"Record not found!!";
	gotoxy(25,24);
	cout<<"press any key to return to  menu";
	getch();
	}
}
void delspecification()
{
	char t_name[] = "Enter Game Name You Want :";
	char t_name1[] = "Want to delete : ";
	int y=0;
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
	char ch[80];
	fflush(stdin);
	STYLE1(t_name,strlen(t_name));
	gotoxy(25,18);
	STYLE1(t_name1,strlen(t_name1));
	fflush(stdin);
	gets(ch);
	ofstream sout;
	ifstream sin;
	sin.open("popo.dat",ios_base::in|ios_base::binary);
	if(!sin.is_open())
	{
			system("cls");
			fun_ssquare();
			gotoxy(25,16);
			cout<<"file not found";
			gotoxy(25,17);
			cout<<"press any key to return to  menu";
			getch();
	}
	else
	{
	sout.open("temp.dat",ios::app|ios::binary);
	sin.read((char*)this,sizeof(*this));
	sin.seekg(0,ios_base::beg);	
	while(!sin.eof())
	{
		sin.read((char*)this,sizeof(*this));
		int c=strcmp(ch,name);
		if(c==0)
		{
		y=1;
		}
        else
        {
        sout.write((char*)this,sizeof(*this));	
		}
    }
	sin.close();
	sout.close();
	remove("popo.dat");
	rename("temp.dat","popo.dat");
	}
	if(y==0)
	{
	gotoxy(25,22);
	cout<<"Record Not deleted!!";
	gotoxy(25,23);
	cout<<"press any key to return to menu";
	getch();
    }
    else
    {
	    gotoxy(25,22);
	    cout<<"Record deleted!!";
	    gotoxy(25,23);
	    cout<<"press any key to return to menu";
	    getch();
	}
}
private:
	void showspecification()
	{
	char temp[]=" Maximum Amount OF Players : ";
	char temp1[]=" That Can Play This Game : ";	
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
	cout<<"GAME NAME : ";
	STYLE1(name,strlen(name));
	gotoxy(25,17);
	cout<<"GAME STORAGE :"<<storage<<" GB";
	gotoxy(25,18);
	if(!strcmp(network_requirements,"both")||!strcmp(network_requirements,"BOTH"))
	cout<<network_requirements<<" Online and Offline"<<endl;
	else
	cout<<network_requirements<<endl;
	gotoxy(25,19);
	STYLE1(temp,strlen(temp));
	gotoxy(25,20);
	STYLE1(temp1,strlen(temp1));
	cout<<amplayer<<endl;
	getch();
	}
};
int v_menu()
{
	    char speci[]= "1 Enter specifiaction ";
		char view[]= "2 View Particular Game Specification "; 
		char update[]="3 Updtae Specifiaction ";
		char delet[]="4 Delete Specifcation ";
		char menu[] = "5 Return TO Main Menu ";
		int choice;
		gotoxy(25,16);
		STYLE1(speci,strlen(speci));
		gotoxy(25,18);
		STYLE1(view,strlen(view));
		gotoxy(25,20);
		STYLE1(update,strlen(update));
		gotoxy(25,22);
		STYLE1(delet,strlen(delet));
		gotoxy(25,24);
		STYLE1(menu,strlen(menu));
		gotoxy(25,26);
		cout<<"Enter yout choice:";
		cin>>choice;
		return choice;
	}

void game_menu()
{
	specification s;
	while(1){
		system("cls");
		fun_ssquare();
		switch(v_menu())
		{
			case (1):
			{
			s.setspecification();
			s.storespecification();
			break;
			}
			case (2):
			{
            s.searchspecification();
			break;
			}
			case (3):
			{	
			s.updatespecifcation();
			break;
		    }
			case (4):
			{
			s.delspecification();
			break;
		    }
			case (5):
			{
			main_mnu();
			break;
		    }
			default:
			{
			cout<<"Invalid option selcted";
			break;
			}
		}
	}
}
//-----------------------------------------------------------------------------------------------//
// coding for play game//
class game_user{
	private:
	char name[30];
    char game_name[80];
	public:
		int fees;
	game_user()
	{
	game_name[80] = '\0';
	name[30] = '\0';
	fees=0;
	}
	void disp_game_for_members()
	{
			char game[]="Enter Name OF User : ";
			char pc_game[]="Enter P if you want to play pc games ";
			char con_game[]="Enter C if you want to play Console Games : ";
			char c;
			ssquare();
			gotoxy(25,16);
			STYLE1(game,strlen(game));
			fflush(stdin);
			cin.ignore();
			gets(name);
			a:
			ssquare();
			gotoxy(25,17);
			STYLE1(pc_game,strlen(pc_game));
			gotoxy(25,18);
			STYLE1(con_game,strlen(con_game));
			cin>>c;

			if(c=='P')
		    pc_member();
		    else if(c=='C')
		    co_member();
		    else
		    {
		    	gotoxy(25,16);
		    	cout<<"Enter valid character";
		    	goto a;
			}
		}
		void disp_game_for_nonmembers()
		{
            char game[]="Enter Name OF User : ";
			char pc_game[]="Enter P if you want to play pc games ";
			char con_game[]="Enter C if you want to play Console Games : ";
   			char c;
			fun_ssquare();
			gotoxy(25,16);
			STYLE1(game,strlen(game));
			fflush(stdin);
			gets(name);
			a:
			gotoxy(25,18);
			STYLE1(pc_game,strlen(pc_game));
			gotoxy(25,19);
			STYLE1(con_game,strlen(con_game));
			cin>>c;
			if(c=='P')
		    pc_nonmember();
		    else if(c=='C')
		    co_nonmember();
		    else
		    {
		    	gotoxy(25,16);
		    	cout<<"Enter valid character";
		    	goto a;
			}

		}
void store_game_user()
{

		ofstream out;
		out.open("gameuser.dat",ios_base::out|ios_base::app|ios_base::binary);
		out.write((char*)(this),sizeof(*this));
	    out.close();
}

void view_game_user()
{
		ifstream in;

		in.open("gameuser.dat",ios::in|ios::binary);
		if(!in)
		{
			fun_ssquare();
			gotoxy(25,16);
			cout<<"File not found";
			gotoxy(25,17);
			cout<<"Press any key to continue";
			getch();
		}
		else
		{
			    in.seekg(0);
				while(!in.eof())
				{
				in.read((char*)this,sizeof(*this));	
				disp_game_user();
				}
		}
	}
    private:
	void pc_member()
	{
	char name1[80];	
	char sel[]="Select the game you want to play ";
	char man[]="From Given Menu ";	
    int l=17;
    vector<string> prevs;
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
	STYLE1(sel,strlen(sel));
	gotoxy(25,17);
	STYLE1(man,strlen(man));
	specification obj;
	ifstream ing;
	ing.open("popo.dat",ios_base::in|ios_base::binary);
	if(!ing.is_open())
	{
		system("cls");
		fun_ssquare();
		gotoxy(25,16);
		cout<<"File Not Found!!";
		gotoxy(25,17);
		cout<<"press any key to return to  menu";
		getch();	
	}
    int ol = 0;
    bool flag = true;
    while (!ing.eof()) {
    ing.read((char*)&obj, sizeof(obj));
    if (prevs.size()) {
        for (int i = 0; i < prevs.size(); i++) {
            if (prevs[i] == obj.name) {
               flag = false;
            }
        }
    }
    if (flag)
    {
    gotoxy(25,l+=2);
    cout << obj.name;	
	}
    prevs.push_back(obj.name);
    flag = true;
}
	ing.close();
	gotoxy(25,35);
	cout<<"Choose ";
	cin>>game_name;
	fees = 400;
}
void co_member()
{
        char sel[]="Select the game you want to play ";
	    char man[]="From Given Menu ";	
		fees=0;
		int l=17;
		vector<string> prevs;
		system("cls");
		fun_ssquare();
		gotoxy(25,16);
		STYLE1(sel,strlen(sel));
		gotoxy(25,17);
		STYLE1(man,strlen(man));
        specification obj;
	    ifstream ing;
	    ing.open("popo.dat",ios_base::in|ios_base::binary);
	    if(!ing.is_open())
	    {
			system("cls");
			fun_ssquare();
			gotoxy(25,16);
			cout<<"File Not Found!!";
			gotoxy(25,17);
			cout<<"press any key to return to  menu";
			getch();	
	       }
	    int ol = 0;
    bool flag = true;
    while (!ing.eof()) {
    ing.read((char*)&obj, sizeof(obj));
    if (prevs.size()) {
        for (int i = 0; i < prevs.size(); i++) {
            if (prevs[i] == obj.name) {
               flag = false;
            }
        }
    }
    if (flag)
    {
    gotoxy(25,l+=2);
    cout << obj.name;	
	}
    prevs.push_back(obj.name);
    flag = true;
}
	ing.close();
	gotoxy(25,35);
	cout<<"Choose ";
	cin>>game_name;
	fees = 500;
}
			void pc_nonmember()
			{
                char sel[]="Select the game you want to play ";
	            char man[]="From Given Menu ";	
				fees=0;
				int l=17;
				vector<string> prevs;
				system("cls");
				fun_ssquare();
				gotoxy(25,16);
				STYLE1(sel,strlen(sel));
				gotoxy(25,17);
				STYLE1(man,strlen(man));
			    specification obj;
	            ifstream ing;
	    ing.open("popo.dat",ios_base::in|ios_base::binary);
	    if(!ing.is_open())
	    {
			system("cls");
			fun_ssquare();
			gotoxy(25,16);
			cout<<"File Not Found!!";
			gotoxy(25,17);
			cout<<"press any key to return to  menu";
			getch();	
	       }
	       int ol = 0;
    bool flag = true;
    while (!ing.eof()) {
    ing.read((char*)&obj, sizeof(obj));
    if (prevs.size()) {
        for (int i = 0; i < prevs.size(); i++) {
            if (prevs[i] == obj.name) {
               flag = false;
            }
        }
    }
    if (flag)
    {
    gotoxy(25,l+=2);
    cout << obj.name;	
	}
    prevs.push_back(obj.name);
    flag = true;
}
	ing.close();
	gotoxy(25,35);
	cout<<"Choose ";
	cin>>game_name;
	fees = 500;
}
void co_nonmember()
{
                char sel[]="Select the game you want to play ";
	            char man[]="From Given Menu ";	
			    fees=0;
				int l=17;
				vector<string> prevs;
				system("cls");
				fun_ssquare();
				gotoxy(25,16);
				STYLE1(sel,strlen(sel));
				gotoxy(25,17);
				STYLE1(man,strlen(man));
                specification obj;
	            ifstream ing;
	    ing.open("popo.dat",ios_base::in|ios_base::binary);
	    if(!ing.is_open())
	    {
			system("cls");
			fun_ssquare();
			gotoxy(25,16);
			cout<<"File Not Found!!";
			gotoxy(25,17);
			cout<<"press any key to return to  menu";
		getch();	
	    }
	         int ol = 0;
    bool flag = true;
    while (!ing.eof()) {
    ing.read((char*)&obj, sizeof(obj));
    if (prevs.size()) {
        for (int i = 0; i < prevs.size(); i++) {
            if (prevs[i] == obj.name) {
               flag = false;
            }
        }
    }
    if (flag)
    {
    gotoxy(25,l+=2);
    cout << obj.name;	
	}
    prevs.push_back(obj.name);
    flag = true;
}
	ing.close();
	gotoxy(25,35);
	cout<<"Choose ";
	cin>>game_name;
	fees = 650;
}

void disp_game_user()
{

				fun_ssquare();
				gotoxy(25,16);
				cout<<"Name OF User : ";
				STYLE1(name,strlen(name));
				gotoxy(25,18);
				cout<<"Game User Played : ";
				STYLE1(game_name,strlen(game_name));
				gotoxy(25,20);
				cout<<"Amount user paid : "<<fees;
				getch();
				system("cls");
				}
};
int g_menu()
{
	char say[]="1 Play Game ";
	char say1[]="2 View Game User Info";
	char say2[]="3 To Return To Main Menu ";
	int i;
    gotoxy(25,16);
    STYLE1(say,strlen(say));
	gotoxy(25,18);
	STYLE1(say1,strlen(say1));
	gotoxy(25,20);
	STYLE1(say2,strlen(say2));
	gotoxy(25,22);
	cout<<"Enter your choice:";

	cin>>i;
	return i;
}
void play_menu()
{
	game_user g;

	while(1){
		ssquare();
		switch(g_menu())
		{
			case (1):
			{
				char r;
				int k;
			    ssquare();
			    gotoxy(25,16);
			    cout<<"If you are member press Y";
			    gotoxy(25,17);
			    cout<<"other wise press N:";
			    r= getch();
			    if(r=='Y')
			    {
			    int k=input_username_password();
				if(k==1)
				{
				g.disp_game_for_members();
				g.store_game_user();
				fun_ssquare();
				g_menu();
				break;
			    }
				else
				{
				char say[]="YOU ARE NOT A MEMBER";	
				fun_ssquare();
				gotoxy(25,16);
				STYLE1(say,strlen(say));
				g.disp_game_for_nonmembers();
				g.store_game_user();
				break;
			    }
		    }
			else if(r=='N')
			{
			g.disp_game_for_nonmembers();
			g.store_game_user();
			fun_ssquare();
			g_menu();
			break;
			}
			else
			{
			fun_ssquare();
			gotoxy(25,16);
			cout<<"Invalid Key Press Any Key To Continue";
			getch();
			break;
		    }
	        }
			case (2):
			{
            g.view_game_user();
            g_menu();
			break;
			}
			case (3):
			{	
			system("cls");
            main_mnu();
			break;
		    }
			default:
			{	
			cout<<"Invalid option selcted";
			break;
		    }
		}
	}
}
//-----------------------------------------------------------------------------------------------//
// coding for gaming machine//

void number_menu();
class gamingmachine
{
	public:
	static int no_of_g;
	public:
    gamingmachine(){
    	no_of_g=0;
	}
	static void update_game(){
    	no_of_g++;
	}
	static void delete_game(){
		no_of_g--;
	}
	protected:
	float price;
	virtual void set_price()=0;
};
int gamingmachine::no_of_g=0;
class cpu
{
	protected:
	float ram;
	float ram_price;
	float storage;
	float storage_price;
	char processor[80];
	char processor_manufacture[80];
	float processor_price;
	char graphics_card[80];
	char graphics_cardmanufacture[80];
	float graphic_cardprice;
	char  power_supply[80];
	float output;
	char powersupply_manufacture[80];
	float powersupply_price;
	char mother_board[80];
	char mother_board_manufacture[80];
	float mother_board_price;
	char fan[80];
	char fan_manufacture[80];
	int quantity;
	float fan_price;
	
	void set_cpu_specification()
	{
	char mod[]=" Enter Model OF Mother Board : ";
    char manu[]="Enter Manufacture OF Motherboard : ";
    char board[]="Enter Mother Board Price : ";
    char mod_fan[]="Enter Model Cooling Fan : ";
    char manu_fan[]="Enter Manufacture OF Fan : ";
    char quant_fan[]="Enter Qantity OF Fan : ";
    char price_fan[]="Enter Price OF Fan : ";
    char amo[]="Enter Amount OF Ram : ";
    char price_ram[]="Enter Ram Price : ";
    char amo_storage[]="Enter Amount Storage : ";
    char price_stor[]="Enter Storage Price : ";
    char proce[]="Enter Processor : ";
    char price_proce[]="Price OF Proceesor : ";
    char graph[]="Enter Garphic Card Model : ";
    char graph_manu[]="Enter Garphics Card Manufacture : ";
    char price_graph[]="Enter Garphic Card Price : ";
    char power[]="Enter Power Supply : ";
    char power_out[]="Enter Powersupply Output : ";
    char power_manu[]="Enter Powersupply Manufacture : ";
    char price_power[]="Enter Power supply price : ";
		
		try{
		gotoxy(25,18);
		STYLE1(mod,strlen(mod));
		fflush(stdin);
		gets(mother_board);
		gotoxy(25,19);
		STYLE1(manu,strlen(manu));
		fflush(stdin);
		gets(mother_board_manufacture);
		gotoxy(25,20);
		STYLE1(board,strlen(board));
		cin>>mother_board_price;
		gotoxy(25,21);
		STYLE1(mod_fan,strlen(mod_fan));
		fflush(stdin);
		gets(fan);
		gotoxy(25,22);
		STYLE1(manu_fan,strlen(manu_fan));
		fflush(stdin);
		gets(fan_manufacture);
		gotoxy(25,23);
		STYLE1(quant_fan,strlen(quant_fan));
		cin>>quantity;
		if(quantity<0)
		throw range_error("Quantity Cannot be Negative!!");
		
		gotoxy(25,24);
		STYLE1(price_fan,strlen(price_fan));
		cin>>fan_price;
		if(fan_price<=0 && quantity>0)
		throw range_error("Price Cannot be Zero and Negative !!");
		
		fflush(stdin);
		system("cls");
		fun_ssquare();
		gotoxy(25,16);
		STYLE1(amo,strlen(amo));
		cin>>ram;
		if(ram<0)
		throw range_error("Amonut Cannot be Negative !!");
		gotoxy(25,17);
		STYLE1(price_ram,strlen(price_ram));
		fflush(stdin);
		cin>>ram_price;
		if(ram_price<=0 && ram>0)
		throw range_error("Price Cannot be Zero and Negative !!");
		
		gotoxy(25,18);
		STYLE1(amo_storage,strlen(amo_storage));
		fflush(stdin);
		cin>>storage;
		if(storage<=0)
		throw range_error("Storage Cannot be Zero and Negative !!");
		gotoxy(25,19);
		STYLE1(price_stor,strlen(price_stor));
		fflush(stdin);
		cin>>storage_price;
		if(storage_price<=0)
		throw range_error("Price Cannot be Zero and Negative !!");
		
		fflush(stdin);
		gotoxy(25,20);
		STYLE1(proce,strlen(proce));
		fflush(stdin);
		gets(processor);
		fflush(stdin);
		gotoxy(25,21);
		STYLE1(price_proce,strlen(price_proce));
		fflush(stdin);
		cin>>processor_price;
		if(processor_price<=0)
		throw range_error("Price Cannot be Zero and Negative !!");
		gotoxy(25,22);
		STYLE1(graph,strlen(graph));
		fflush(stdin);
		gets(graphics_card);
		fflush(stdin);
		gotoxy(25,23);
		STYLE1(graph_manu,strlen(graph_manu));
		fflush(stdin);
	    gets(graphics_cardmanufacture);
	    fflush(stdin);
	    gotoxy(25,24);
	    STYLE1(price_graph,strlen(price_graph));
	    fflush(stdin);
	    cin>>graphic_cardprice;
	    if(graphic_cardprice<=0)
		throw range_error("Price Cannot be Zero and Negative !!");
	    fflush(stdin);
	    gotoxy(25,25);
	    STYLE1(power,strlen(power));
	    fflush(stdin);
	    gets(power_supply);
	    fflush(stdin);
	    gotoxy(25,26);
	    STYLE1(power_out,strlen(power_out));
	    fflush(stdin);
	    cin>>output;
	    if(output<0)
		throw range_error("Power Supply Electricity can not be Negative !!");
	    gotoxy(25,27);
	    STYLE1(power_manu,strlen(power_manu));
	    fflush(stdin);
	    gets(powersupply_manufacture);
	    fflush(stdin);
	    gotoxy(25,28);
	    STYLE1(price_power,strlen(price_power));
	    fflush(stdin);
	    cin>>powersupply_price;
	    if(powersupply_price<=0 && output>0)
		throw range_error("Price Cannot be Zero and Negative !!");
	    fflush(stdin);
	    gotoxy(25,29);
	    }
	    catch(exception en)
	    {   
		system("cls");
		cout<<en.what()<<endl;
		cout<<typeid(en).name()<<endl;
		exit(0);
	    }
	}

};
class leddisplay{
	protected:
	char resolution[80];
	int refreshrate;
	char manufacture_model[80];
	float size;
	float disp_price;
	void set_monitor_specification()
	{
		char reso[]="Enter Resolution OF Display : ";
		char rate[]="Enter Refresh Rate OF Display : ";
		char manu[]="Enter Manufacture And Model OF Display : ";
		char size[]="Enter Size OF Display : ";
		gotoxy(25,16);
		STYLE1(reso,strlen(reso));
		fflush(stdin);
		gets(resolution);
		fflush(stdin);
		gotoxy(25,17);
		STYLE1(rate,strlen(rate));
		fflush(stdin);
		cin>>refreshrate;
		gotoxy(25,18);
		STYLE1(manu,strlen(manu));
		fflush(stdin);
		gets(manufacture_model);
		gotoxy(25,19);
		STYLE1(size,strlen(size));
		fflush(stdin);
		cin>>size;
		gotoxy(25,20);
		cout<<"Enter price : ";
		fflush(stdin);
		cin>>disp_price;
}
};
class keyboard
{
	protected:
	char type[80];
	char model[80];
	char manufacture[80];
	char colour[80];
	float keyboard_price;
	void set_keyboard_specification(){
		char t_type[]="Enter type of keyboard : ";
		char t_type1[]="Mechanical or Normal = ";
		char key[]="Enter Manufacture OF Keyboard : ";
		char mod[]="Enter Model OF Keyboard : ";
		char col[]="Enter Keyboard Colour : ";
		char price_key[]="Enter Price OF Keyboard : ";
		gotoxy(25,16);
		STYLE1(t_type,strlen(t_type));
		gotoxy(25,17);
		STYLE1(t_type1,strlen(t_type1));
		fflush(stdin);
		gets(type);
		gotoxy(25,18);
	    STYLE1(key,strlen(key));
		fflush(stdin);
		gets(manufacture);
		gotoxy(25,19);
		STYLE1(mod,strlen(mod));
		fflush(stdin);
		gets(model);
		gotoxy(25,19);
		STYLE1(col,strlen(col));
		fflush(stdin);
		gets(colour);
		gotoxy(25,20);
		STYLE1(price_key,strlen(price_key));
		cin>>keyboard_price;
	}

};
class mouse{
	protected:
	char mouse_model[80];
	char mouse_manufacture[80];
	float mouse_price;
	void set_mouse_specification(){
	char mod[]="Enter Model OF Mouse : ";
	char manu[]="Enter Manufacture OF Mouse : ";
	char price_mou[]="Enter Price OF Mouse : ";
	gotoxy(25,16);
	STYLE1(mod,strlen(mod));
	fflush(stdin);
	gets(mouse_model);
	gotoxy(25,17);
	STYLE1(manu,strlen(manu));
	fflush(stdin);
	gets(mouse_manufacture);
	gotoxy(25,18);
	STYLE1(price_mou,strlen(price_mou));
	cin>>mouse_price;
}
};
class pc:public gamingmachine,public mouse,public keyboard,public cpu,public leddisplay
{
int pc_no;
	public:
	static int total_pc;
	pc()
	{
	total_pc++;
	}
    void set_pc_specification()
    {
	gotoxy(25,16);
	cout<<"Enter PC Number : "; cin>>pc_no;
	gotoxy(25,17);
	cout<<"PC Number  = "<<pc_no<<endl;
	set_cpu_specification();
	system("cls");	
	fun_ssquare();
	set_monitor_specification();
	system("cls");	
	fun_ssquare();
	set_keyboard_specification();
	system("cls");	
	fun_ssquare();
	set_mouse_specification();
	set_price();
    }
private:
void set_price(){
	price=graphic_cardprice+storage_price+mouse_price+keyboard_price+storage_price+ram_price+processor_price+disp_price+(quantity*fan_price)+mother_board_price;
}
public:
void store_pc_specification()
{
	ofstream out;
	out.open("pc specification.dat",ios::out|ios::app|ios::binary);
	out.write((char*)(this),sizeof(*this));
	out.close();
}
void update_specification()
{
	int no,i,p;
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
	cout<<"Enter ID Number of pc you want";
	gotoxy(25,17);
	cout<<" To change specification about:";
	cin>>no;
	fstream bin;
    ofstream bin1;
	bin1.open("Temp2.dat",ios::app|ios::binary);
	bin.open("pc specification.dat",ios::app|ios::ate|ios::in|ios::out|ios::binary);
	if(!bin && !bin1)
	{
		system("cls");
        ssquare();
		gotoxy(25,16);
		cout<<"File not found";
		gotoxy(25,17);
		cout<<"Press any key to return to main menu";
		getch();
	    }
	    else
	    {
	    bin.seekg(0);
	    bin.read((char*)(this),sizeof(*this));
	    while(!bin.eof())
	    {
		if(no==pc_no)
		{
		p=1;
		system("cls");
		fun_ssquare();
		gotoxy(25,16);
	    cout<<" Press 1 to update pc specification ";
	    gotoxy(25,18);
		cout<<" Press 2 to update leddisplay specification";
		gotoxy(25,20);
		cout<<" Press 3 to update keyboard specification";
		gotoxy(25,22);
		cout<<" Press 4 to update mouse ";
		gotoxy(25,24);
		cout<<" Enter your choice:";
		fflush(stdin);
		cin>>i;
		switch(i)
		{
			case (1):
			{
			system("cls");
			fun_ssquare();	
			set_cpu_specification();
			set_price();
			break;
            }
			case (2):
			{
			system("cls");
			fun_ssquare();	
			set_monitor_specification();
		    set_price();
		    break;
			}
		    case (3):
		    {
		    system("cls");
			fun_ssquare();	
		    set_keyboard_specification();
		    set_price();
		    break;
            }
		    case (4):
		    {
		    system("cls");
			fun_ssquare();	
		    set_mouse_specification();
		    set_price();
			break;
            }
		    default:
		    break;
            }
			bin1.write((char*)(this),sizeof(*this));
			bin.read((char*)(this),sizeof(*this));
		    }
		   else
		   {
		   	bin1.write((char*)(this),sizeof(*this));
			bin.read((char*)(this),sizeof(*this));
		   }
	}
}
	    bin.close();
	    bin1.close();
	    remove("pc specification.dat");
	    rename("Temp2.dat","pc specification.dat");
	if(p==1)
	{
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
	cout<<"Record updated!!";
	gotoxy(25,17);
	cout<<"press any key to return to main menu";
	getch();
	}
	else
	{
	system("cls");	
	fun_ssquare();
	gotoxy(25,16);
	cout<<"Record not found!!";
	gotoxy(25,17);
	cout<<"press any key to return to main menu";
	getch();
	}
}
void disp_pc_specification()
{
	int i,k;
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
	cout<<"Enter ID Number of pc you want";
	gotoxy(25,17);
	cout<<" to view specification about:";
	cin>>i;

	ifstream vin;
	vin.open("pc specification.dat",ios::in|ios::binary);
	if(!vin)
	{
	system("cls");	
    fun_ssquare();
	gotoxy(25,16);
	cout<<"File not found";
	gotoxy(25,17);
	cout<<"Press any key to return to main menu";
	getch();
	}
	else
	{
	vin.seekg(0);	
    vin.read((char*)(this),sizeof(*this));
	while(!vin.eof())
	{
	if(i==pc_no)
	{
	k=1;
	show_pc_specification();
	vin.close();
	break;
	}
	else
	vin.read((char*)(this),sizeof(*this));
    }
	vin.close();
}
if(k==1)
{
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
	cout<<"Record displayed!!";
	gotoxy(25,17);
	cout<<"Press any key to return to main menu";
	getch();
}
}
void del_pc_specification()
{
	int y=0;
    int no;
    system("cls");
    fun_ssquare();
    gotoxy(25,16);
	cout<<"Enter ID Number of pc you";
	gotoxy(25,17);
	cout<<" want  to delete about : ";
	cin>>no;


	ifstream pin;
	ofstream pout;
	pin.open("pc specification.dat",ios::in|ios::binary);
	pout.open("DATA2.dat",ios::app|ios::binary);
	if(!pin)
	{
	system("cls");	
	fun_ssquare();
	gotoxy(25,16);
	cout<<"File not found";
	gotoxy(25,17);
	cout<<"Press any key to return to main menu";
	getch();
	}
	else
	{
	pin.seekg(0);	
	pin.read((char*)(this),sizeof(*this));		
	while(!pin.eof())
	{
	pin.read((char*)(this),sizeof(*this));	
	if(no==pc_no)
	pin.read((char*)(this),sizeof(*this));
	else{
	y=1;	
    pout.write((char*)(this),sizeof(*this));
    }
    }
	pin.close();
	pout.close();
	remove("pc specification.dat");
	rename("DATA2.dat","pc specification.dat");
}
if(y==1)
{
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
	cout<<"Record deleted!!";
	gotoxy(25,17);
	cout<<"Press any key to return to main menu";
	getch();
    }
	else
	{
	system("cls");	
	fun_ssquare();
	gotoxy(25,16);
	cout<<"Record not found!!";
	gotoxy(25,17);
	cout<<"press any key to return to main menu";
	getch();
    }
}
private:
void show_pc_specification()
{   
    system("cls");
    fun_ssquare();
	gotoxy(25,16);
    cout<<"PC Number : "<<pc_no;
    gotoxy(25,17);
    cout<<"Model OF Motherboard : "<<mother_board;
    gotoxy(25,17);
    cout<<"Manufacture OF Motherboard : "<<mother_board_manufacture;
    gotoxy(25,18);
	cout<<"Price OF Motherborad : "<<mother_board_price;
    gotoxy(25,19);
	cout<<"Model OF Fan : "<<fan;
    gotoxy(25,20);
	cout<<"Manufacture OF Fan : "<<fan_manufacture;
    gotoxy(25,21);
	cout<<"Quantity OF Fans Used : "<<quantity;
	gotoxy(25,22);
    cout<<"Fan Price : "<<fan_price;
    gotoxy(25,23);
	cout<<"Model OF Ram : "<<ram;
    gotoxy(25,24);
	cout<<"Price OF Ram : "<<ram_price;
    gotoxy(25,26);
	cout<<"Storage Installed : "<<storage;
    gotoxy(25,27);
	cout<<"Price OF Storage Installed : "<<storage_price;
	getch();
	system("cls");
	fun_ssquare();
    gotoxy(25,16);
	cout<<"Model OF Processor : "<<processor;
    gotoxy(25,17);
	cout<<"Manufacturer OF Processor : "<<processor_manufacture;
    gotoxy(25,18);
	cout<<"Price OF Processor : "<<processor_price;
    gotoxy(25,19);
	cout<<"Model OF Graphic Card : "<<graphics_card;
    gotoxy(25,20);
	cout<<"Manufacture OF Graphic Card : "<<graphics_cardmanufacture;
    gotoxy(25,21);
	cout<<"Price OF Graphic Card : "<<graphic_cardprice;
    gotoxy(25,22);
	cout<<"Model OF Powersupply : "<<power_supply;
    gotoxy(25,23);
	cout<<"Output Given By Powersupply : "<<output;
    gotoxy(25,24);
	cout<<"Maunfacture OF Powersupply : "<<powersupply_manufacture;
	gotoxy(25,25);
	cout<<"Resolution OF Display : "<<resolution;
	gotoxy(25,26);
    cout<<"Refresh Rate OF Display : "<<refreshrate;
    gotoxy(25,27);
    cout<<"Manufacture And Model OF Display : "<<manufacture_model;
    gotoxy(25,28);
    cout<<"Size OF Display : "<<size;
    getch();
    system("cls");
	fun_ssquare();
    gotoxy(25,17);
    cout<<"Enter Model OF Mouse : "<<mouse_model;
    gotoxy(25,18);
	cout<<"Enter Manufacture OF Mouse : "<<mouse_manufacture;
	gotoxy(25,19);
	cout<<"Enter Price OF Mouse : "<<mouse_price;
	gotoxy(25,21);
	cout<<"Enter type of keyboard : "<<type;
	gotoxy(25,22);
	cout<<"Enter Manufacture OF Keyboard : "<<manufacture;
	gotoxy(25,23);
	cout<<"Enter Model OF Keyboard : "<<model;
	gotoxy(25,24);
	cout<<"Enter Keyboard Colour : "<<colour;
	gotoxy(25,25);
	cout<<"Enter Price OF Keyboard : "<<keyboard_price;
	gotoxy(25,26);
    cout<<"Price : "<<disp_price;
    gotoxy(25,28);
    cout<<"Total price of computer is  = "<<price;
    getch();
}
};
int pc::total_pc = 0;
class ps4:public gamingmachine
{
	int ps4_no;
	float ps4_storage;
	char  ps4_model[80];
	float ps4_price;
	public:
	static int total_no_of_ps4;
	ps4()
	{
	total_no_of_ps4++;
	}
	void set_ps4_details()
	{
	system("cls");	
	fun_ssquare();
	gotoxy(25,16);
	cout<<"Enter Ps4 Number : "; cin>>ps4_no;
	gotoxy(25,17);
	cout<<"Specification For Ps4 number : "<<ps4_no;
	gotoxy(25,18);
	cout<<"Enter model of ps4 : ";
	fflush(stdin);
	gets(ps4_model);
	gotoxy(25,19);
	cout<<"Enter Storage OF That Model : ";
	cin>>ps4_storage;
	gotoxy(25,20);
	cout<<"Enter Price OF That model : ";
	cin>>ps4_price;
	set_price();
}
void store_ps4_details()
{
	ofstream kout;
	kout.open("ps4 specification.dat",ios::out|ios::app|ios::binary);
	kout.write((char*)(this),sizeof(*this));
	kout.close();
}
void update_ps4_specification()
{
	system("cls");
	fun_ssquare();
	int no,i,m,k=0;
	gotoxy(25,16);
	cout<<"Enter ID Number of ps4 you want";
	gotoxy(25,17);
	cout<<" to change specification about : ";
	cin>>no;
	fstream gin;
	fstream gin1;
	gin.open("ps4 specification.dat",ios_base::app|ios_base::ate|ios_base::in|ios_base::out|ios_base::binary);
	gin1.open("Temp3.dat",ios_base::app|ios_base::ate|ios_base::in|ios_base::out|ios_base::binary);
	if(!gin.is_open() && !gin1.is_open())
	{
		system("cls");
		fun_ssquare();
		gotoxy(25,16);
		cout<<"file not found";
		gotoxy(25,17);
		cout<<"press any key to return to main menu";
		getch();
	}
	else
	{
	gin.seekg(0);
	gin.read((char*)(this),sizeof(*this));
	while(!gin.eof())
	{
		if(ps4_no==no)
		{
		k=1;
		set_ps4_details();
		gin1.write((char*)(this),sizeof(*this));
		gin.read((char*)(this),sizeof(*this));
		}
		else
		{
	    gin1.write((char*)(this),sizeof(*this));	
		gin.read((char*)(this),sizeof(*this));	
		}
	}
}
	gin.close();
	gin1.close();
	remove("ps4 specification.dat");
	rename("Temp3.dat","ps4 specification.dat");
	if(k==1)
	{
		gotoxy(25,23);
		cout<<"Record updated!!";
		gotoxy(25,24);
		cout<<"press any key to return to main menu";
		getch();
	}
	else
	{
	gotoxy(25,23);
    cout<<"Record not found!!";
	gotoxy(25,24);
	cout<<"press any key to return to  menu";
	getch();
	}
}
void disp_ps4_specification()
{
	int i,k;
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
	cout<<"Enter ID Number of ps4 you want";
	gotoxy(25,17);
	cout<<" to view specification about : ";
	cin>>i;

	ifstream jin;
	jin.open("ps4 specification.dat",ios::in|ios::binary);
	if(!jin)
	{
		system("cls");
		fun_ssquare();
		gotoxy(25,16);
		cout<<"File not found";
		gotoxy(25,17);
		cout<<"Press any key to continue";
		getch();
	}
	else
	{
	jin.seekg(0,ios_base::beg);	
	jin.read((char*)(this),sizeof(*this));
	while(!jin.eof())
	{
	if(i==ps4_no)
	{
	k=1;
	show_ps4_details();
	break;
	}
	else
	jin.read((char*)(this),sizeof(*this));
    }
    }
	jin.close();
	if(k==1)
	{
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
    cout<<"Record displayed!!";
	gotoxy(25,17);
	cout<<"Press any key to return to main menu";
	getch();
	}
	else
	{
	system("cls");	
	fun_ssquare();
	gotoxy(25,16);
    cout<<"Record not found!!";
	gotoxy(25,17);
	cout<<"Press any key to return to main menu";
	getch();
	}
}
void del_ps4_specification()
{
	system("cls");
	fun_ssquare();
    int no,l=0;
    gotoxy(25,16);
	cout<<"Enter number of ps4";
	gotoxy(25,17);
	cout<<" you want to delete about : ";
	cin>>no;


	ifstream hin;
	ofstream hout;
	hin.open("ps4 specification.dat",ios::in|ios::binary);
	hout.open("DATA1.dat",ios::app|ios::binary);
	if(!hin)
	{
		system("cls");
		fun_ssquare();
		gotoxy(25,16);
		cout<<"File not found";
		gotoxy(25,17);
		cout<<"Press any key to continue";
		getch();
	}
	else
	{
    hin.seekg(0);
	hin.read((char*)(this),sizeof(*this));
	while(!hin.eof())
	{
	if(no!=ps4_no)
	{
	l=1;
	hout.write((char*)(this),sizeof(*this));
	hin.read((char*)(this),sizeof(*this));
    }
    else
    hin.read((char*)(this),sizeof(*this));
    }
	hin.close();
	hout.close();
	remove("ps4 specification.dat");
	rename("DATA1.dat","ps4 specification.dat");
}
if(l==0)
{
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
	cout<<"Record deleted!!";
	gotoxy(25,17);
	cout<<"Press any key to return to main menu";
	getch();
	}
	else
	{
	system("cls");	
	fun_ssquare();
	gotoxy(25,16);
    cout<<"Record not found!!";
	gotoxy(25,17);
	cout<<"press any key to return to main menu";
	getch();
	}
}
protected:
show_ps4_details()
{
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
	cout<<"Ps4 no : "<<ps4_no;
	gotoxy(25,17);
	cout<<"Model of Ps4 : "<<ps4_model;
	gotoxy(25,18);
	cout<<"Storage OF That Model : "<<ps4_storage;
	gotoxy(25,19);
	cout<<"Price OF Ps4 : "<<price;
	getch();
}
void set_price()
{
	price=ps4_price;
}
};
int ps4::total_no_of_ps4=0;
int n_menu()
{

	int p;
	gotoxy(25,16);
	cout <<"press 1 to PC specification";
	gotoxy(25,18);
	cout <<"press 2 to set console specification";
	gotoxy(25,20);
	cout <<"press 3 for search secification";
	gotoxy(25,22);
	cout <<"press 4 for update specification";
	gotoxy(25,24);
	cout <<"press 5 for delete specification";
	gotoxy(25,26);
	cout<< "press 6 for view gaming machines";
	gotoxy(25,28);
	cout <<"press 7 to return to main menu:";
	gotoxy(25,30);
	cout<<"enter your choice:";
	cin >> p;
	return p;
}
void number_menu()
{
	pc p1;
	ps4 p;
	while(1)
	{
	ssquare();
	switch(n_menu())
	{
			case(1):
			{
			system("cls");
			fun_ssquare();	
			p1.set_pc_specification();
			p1.store_pc_specification();
			gamingmachine::update_game();
			break;
		    }
			case(2):
			{
			system("cls");
			fun_ssquare();	
			p.set_ps4_details();
			p.store_ps4_details();
			gamingmachine::update_game();
			break;
			}
			case(3):
			{
			char s;
			Ok:
			system("cls");	
			fun_ssquare();
			gotoxy(25,16);
			cout <<"Enter your choice between Ps4 and PC";
			gotoxy(25,17);
			cout<<"Enter P for pc";
			gotoxy(25,18);
			cout<<"C for ps4";
			gotoxy(25,19);
			cout<<"Enter your choice:";
			cin >>s;
			if(s=='p'||s=='P')
			{
			p1.disp_pc_specification();
			break;
			}
			else if(s=='c'||s=='C')
			{
			p.disp_ps4_specification();
			break;
			}
			else
			{
			goto Ok;
			}
		    case(4):
			{
			char up;
			updat:
			system("cls");	
			fun_ssquare();
			gotoxy(25,16);
			cout <<"Enter your choice between ps4 and pc";
			gotoxy(25,17);
			cout<<"Enter P for pc";
			gotoxy(25,18);
			cout<<"C for ps4";
			gotoxy(25,19);
			cout<<"Enter your choice:";
			cin >> up;
			if(up=='P' || up=='p'){
			p1.update_specification();
			break;
			}
			else if(up=='C'|| up=='c')
			{
			p.update_ps4_specification();
			break;
			}
			else
			goto updat;
			}
			case(5):
			{
			char del;
			delet:
			system("cls");	
			fun_ssquare();
			gotoxy(25,16);
			cout <<"Enter your choice between Ps4 and PC ";
			gotoxy(25,17);
			cout<<"Enter P for pc";
			gotoxy(25,18);
			cout<<"C for ps4";
			gotoxy(25,19);
			cout<<"Enter your choice:";
			cin >> del;
			if(del=='P'||del=='p'){
			p1.del_pc_specification();
			if(gamingmachine::no_of_g>0)
			gamingmachine::delete_game();
			break;
			}
			else if(del=='C'||del=='c')
			{
			p.del_ps4_specification();
			if(gamingmachine::no_of_g>0)
			gamingmachine::delete_game();
			break;
			}
			else
			goto delet;
			}
			case (6):
			{
			system("cls");	
			fun_ssquare();
			gotoxy(25,16);
			cout<<"total number of gaming machine are: "<<gamingmachine::no_of_g;
			getch();
			break;
			}
			case (7):
			{
			system("cls");
			main_mnu();
			break;
			}
			default:
			{
			break;
			}
		    }
	    }
	}
}
//-----------------------------------------------------------------------------------------------//
// coding for tournament//
class team{

	 public:int key;
	 private:
	  bool p;
	int n;
	 char *Team_member[5];
	 char team_name[80];
	 public:
	 int count;
	 void input_teams(){
	 	int h=16,num;
		ofstream tn,pn;
		again:
		tn.open("Team_name.dat",ios::app);
		pn.open("Player_names.dat",ios::app);
	 	fun_ssquare();
	 	int i,k=0;
		char str[5][80];key=0;
	 	gotoxy(25,12);
	 	a:
	 	cout<<"Enter Team Name : ";
	 	fflush(stdin);
	 	gets(team_name);
	 
			for(int j=0;j<5;j++)
			{
				gotoxy(25,++h);
		 		cout<<"Enter Username OF Team Member "<<++k<<":";
	 			fflush(stdin);
	 			gets(str[j]);
	 			Team_member[j] = new char[strlen(str[j])+1];
	 			*(Team_member+j) = str[j];
			}
	     
	
	for(i=0;i<5;i++)
	{
	for(int j=0;j<5;j++)
	{
		int c = strcmp(Team_member[i],Team_member[j]);
		if(c==0 && i!=j)
		{
		fun_ssquare();
	 	gotoxy(25,16);
	 	cout<<"Team members can't have same members";
	 	getch();
	 	gotoxy(25,17);
	 	goto a;
		}
     }
	}
	ssquare();
	gotoxy(25,14);
	cout <<"Enter the status of payment";
	gotoxy(25,15);
	cout<<"if payment is paid enter 1 ";
	gotoxy(25,16);
	cout<<"otherwise enter 0:";
	cin >> p;
	if(p==1)
	{
		gotoxy(25,25);
    	cout<<"Payment Paid NO Dues!!";
		getch();
    }
    else if(p==0)
    {
    	cout<<"Payment not Paid";
    	goto again;
	}
	tn<<team_name;
	tn<<"\n";
		for(i=0;i<5;i++)
	{
		pn<<str[i];
		pn<<"\n";
	}
	tn.close();
	pn.close();
}
void display_team_details(){
int i,m=0;
fun_ssquare();
gotoxy(25,16);
ifstream tmn;
ifstream pn;
tmn.open("Team_name.dat",ios::in);
pn.open("Player_names.dat",ios::in);
char strc[5][80];
string gn,t;
int h=15;
if(!tmn && !pn)
{
	fun_ssquare();
	gotoxy(25,16);
	cout<<"file not found";
	gotoxy(25,17);
	cout<<"press any key to return to  menu";
	getch();
	tournament_menu();
}
else
{
	int j = 0 ;
	tmn.seekg(0);
	pn.seekg(0);
	while(getline(tmn,gn) && getline(tmn,t))
	{
		if(j==2)
		{
			getch();
			h=15; 
			fun_ssquare();
		}
		h+=2;
		gotoxy(25,h);
		cout<<"Game : "<<gn;
		h++;
		gotoxy(25,h);
		cout<<"Team Name : "<<t;
		for(i=0;i<5;i++)
		{
			h++;
			pn>>strc[i];
			gotoxy(25,h);
			cout<<"Player "<<i+1<<": "<<strc[i];
		}
		j++;
	}
	tmn.close();
	pn.close();
}
//cout<<"Name of team:"<<team_name;
	
}

void disp_team()
{
	display_team_details();
}
};

class tournament{

  private:
  	int fee;
//	int no_of_teams=0;
	int t_date;//date of tournament//
	int t_month;//month of tournament//
	int t_year;//year of tournamenr
	int  amount_win_team;//amount that is to be to given to winning//

	char gname[80];//name of game//
	char tournament_win[80];//winnesc of tournament//
	public:
	tournament()
	{
		fee=8000;
		amount_win_team=15000;
	}
	int amount_zone;//amount that is to be given to gaming zone//
	void input_tournament_teams()
	{
	team t;
	char ch;
	fun_ssquare();
//	no_of_teams=0;
	gotoxy(25,16);
	cout<<"Instructions\n";
	gotoxy(25,17);
	cout<<" 1) your team member can only include 5 members\n";
	gotoxy(25,18);
	cout<<" 2) Winning team will get 70% of amount\n";
	gotoxy(25,19);
	cout<<"3) your payment must be paid at the time of registration";
	gotoxy(25,20);
	getch();
	cout<<"\nPress enter key to continue";
	
	
	int n;
	system("cls");
	t.input_teams();
	tournament_menu();
	}
void store_tournament_details()
{
    
    ofstream tk;
    tk.open("tournament_details.dat",ios::app);
	tk<<gname;
	tk<<"\n";
	tk<<t_date;
	tk<<"\n";
	tk<<t_month;
	tk<<"\n";
	tk<<t_year;
    gotoxy(25,22);
    cout<<"Details Added Successfully!!";
    getch();
    tk.close();
	}
	void tournament_details()
	{
		ssquare();
		int g,p,q,r;
		ofstream tn;
		tn.open("Team_name.dat",ios::app);
		enter:
		fun_ssquare();
		gotoxy(25,16);
		cout<<"Enter game whose tournament will be held:";
		fflush(stdin);
		gets(gname);
		g=check_game();
		if(g==0)
		{
			gotoxy(25,15);
			cout<<"game is not registered";
			gotoxy(25,16);
			cout<<"enter game again";

			gotoxy(25,14);
			goto enter;
		}
	//	tn<<"\n";
		tn<<gname;
		tn<<"\n";
		tn.close();
		gotoxy(25,16);
		cout<<"enter date of the tournament";
		gotoxy(25,17);
		cout<<" in form of number seperately";

			gotoxy(25,18);
				date:
		cout<<"enter day of tournamnet:";
		cin>>t_date;

			gotoxy(25,19);
				month:
		cout<<"enter month of tournamnet:";
		cin>>t_month;

			gotoxy(25,20);
			year:
		cout<<"enter year of tournament:";
		cin>>t_year;
		p=check_month(t_month);
		if(p==0)
		{
		goto month;
		ssquare();
		gotoxy(25,19);
		}
		q=check_date(t_date);
		if(q==0)
		{
		ssquare();
		goto date;
		gotoxy(25,18);
		}
		r=check_year(t_year);
		if(r==0)
        {
		ssquare();
		goto year;
		gotoxy(25,20);
	}
	store_tournament_details();
}
void show_tournament_details()
{
		int d,m,y;
		string g;
		ifstream i;
		i.open("tournament_details.dat",ios_base::in);
		if(!i)
		{
		fun_ssquare();
		gotoxy(25,16);
		cout<<"file not found";
		gotoxy(25,17);
		cout<<"press any key to return to  menu";
		getch();
		tournament_menu();
		}
		else
		{
		int t = 16;
		fun_ssquare();
		gotoxy(25,t);
		while(getline(i,g))
		{
			gotoxy(25,++t);
			cout<<"This is held for following game:"<<g;
			gotoxy(26,++t);
			i>>d;
			cout<<"This Tournament was date:"<<d<<"/";
			i>>m;
			cout<<m<<"/";
			i>>y;
			cout<<y;
			getline(i,g);
			
			getch();
				
			gotoxy(25,++t);
		}
		disp_tournamnet_details();
	}
		i.close();
	}
	private:
	void disp_tournamnet_details()
	{
		team t;
		t.disp_team();
		fun_ssquare();
		gotoxy(25,16);
		calculate_win();
		gotoxy(25,21);
		cout<<"Amount that will be given to";
		gotoxy(25,22);
		cout<<"the winning team is: " <<amount_win_team;
		gotoxy(25,23);
		getch();
	}

		void calculate_win()
		{
			float n;
			ifstream e;
			e.open("Earning.dat",ios::in);
			if(!e)
			{
				gotoxy(25,17);
				cout<<"FILE NOT FOUND";
				getch();
			}
			else
			{
				while(!e.eof())
				{
					e>>n;
				}
			}
			e.close();
			amount_zone=0;
			amount_zone=(30*fee)/100;
			n+=amount_zone;
			ofstream e1;
			e1.open("Earning.dat",ios::out);
			e1<<n;
			e1.close();
		}
	int check_game(){
	specification s1;
	int flag=0;
	ifstream fin;
	fin.open("popo.dat",ios::in|ios::binary);
	if(!fin)
	{
	system("cls");
	fun_ssquare();
	gotoxy(25,16);
	cout<<"File not found";
	gotoxy(25,17);
	cout<<"Press any key to continue";
	getch();
	}
			
	else
	fin.read((char*)(&s1),sizeof(s1));
	while(!fin.eof()){
		if(!strcmp(gname,s1.name))
		{
			flag++;
			fin.close();
			break;
		}
			else
			fin.read((char*)(&s1),sizeof(s1));
		}
		return flag;
	}
	int check_date(int n)
	{
	if(n>=1 && n<=31)
	return 1;
	else
	return 0;
	}
	int check_month(int n)
	{
	if(n>=1 && n<=12)
	return 1;
	else
	return 0;
	}
	int check_year(int n)
	{
	if(n>=1000)
	return 1;
	else
	return 0;
}

public:
	void set_winner()
	{ 
	int i=0,p,q,r;
	team t;
	int day;
	int month;
	int year;
	string g;
	fun_ssquare();
	gotoxy(25,16);
	cout<<"enter date of the tournament";
	gotoxy(25,17);
	cout<<" in form of number seperately";
	gotoxy(25,18);
	da:
		cout<<"enter day of tournamnet:";
		cin>>day;
		gotoxy(25,19);
		q=check_date(day);
		if(q==0)
		{
		system("cls");
		fun_ssquare();
		gotoxy(25,16);
		goto da;
	    }
		mon:
		cout<<"enter month of tournamnet:";
		cin>>month;
        gotoxy(25,20);
        p=check_month(month);
		if(p==0)
		{
		system("cls");
		fun_ssquare();
		gotoxy(25,17);
		goto mon;
	    }
		y:
		cout<<"enter year of tournament:";
		cin>>year;
		r=check_year(year);
		if(r==0)
		{	
		system("cls");
		fun_ssquare();
		gotoxy(25,20);
		goto y;
	    }
	    ofstream tn;
		tn.open("winner_team.dat",ios_base::binary|ios::app);
		ifstream tin;
		tin.open("tournament_details.dat",ios::in);
		if(!tin)
		{
			fun_ssquare();
			gotoxy(25,16);
			cout<<"file not found";
			gotoxy(25,17);
			cout<<"press any key to return to  menu";
			getch();
			tournament_menu();
		}
		else
		{
		tin.seekg(0,ios::beg);
		gotoxy(25,16);
		while(getline(tin,g))
		{
		tin>>t_date;
		tin>>t_month;
		tin>>t_year;
		if(year==t_year && month==t_month && day==t_date)
		{
			    i=1;
		        gotoxy(25,21);
				cout<<"Enter winner of that tournament:";
				fflush(stdin);
				gets(tournament_win);
				tn<<tournament_win<<"\n";
				tn<<g<<"\n";
				tn<<day<<"\n";
				tn<<month<<"\n";
				tn<<year<<"\n";
				break;
			}
			else
             getline(tin,g);

		}
		tn.close();
	}
		tin.close();
		if(i==0)
		{
		fun_ssquare();
		gotoxy(25,22);
		cout<<"can't enter winner invalid date";
		gotoxy(25,23);
		cout<<"press any key to return to menu";
		getch();
		tournament_menu();
        }
}
void check_winner()
{
	int dy,mth,yr,f=0,p,q,r;
	string n,n1;
	fun_ssquare();
	gotoxy(25,16);
	cout<<"enter date of the tournament";
	gotoxy(25,17);
	cout<<" in form of number seperately";
	gotoxy(25,18);
	da:
		cout<<"Enter Day OF Tournamnet:";
		cin>>dy;
		gotoxy(25,19);
		q=check_date(dy);
		if(q==0)
		{
		system("cls");
		fun_ssquare();
		gotoxy(25,16);
		goto da;
	    }
		mon:
		cout<<"Enter Month of tournamnet:";
		cin>>mth;
        gotoxy(25,20);
        p=check_month(mth);
		if(p==0)
		{
		system("cls");
		fun_ssquare();
		gotoxy(25,16);
		goto mon;
	    }
		y:
		cout<<"Enter Year of tournament:";
		cin>>yr;
		r=check_year(yr);
		if(r==0)
		{	
		system("cls");
		fun_ssquare();
		gotoxy(25,21);
		goto y;
	    }
	    ifstream tn;
		tn.open("winner_team.dat",ios_base::in);
		if(!tn)
		{
			fun_ssquare();
			gotoxy(25,16);
			cout<<"file not found";
			gotoxy(25,17);
			cout<<"press any key to return to  menu";
			getch();
			tournament_menu();
		}
		else
		{
		tn.seekg(0,ios::beg);
		gotoxy(25,16);
		while(getline(tn,n))
		{
		getline(tn,n1);	
		tn>>t_date;
		tn>>t_month;
		tn>>t_year;
		if(yr==t_year && mth==t_month && dy==t_date)
		{
			    fun_ssquare();
			    f=1;
		        gotoxy(25,17);
		        cout<<"GAME : "<<n1;
		        gotoxy(25,18);
				cout<<"WINNER TEAM : ";
				fflush(stdin);
				cout<<n;
				gotoxy(25,19);
				cout<<"DATE OF WINNING TOURNAMENT = "<<dy<<"/"<<mth<<"/"<<yr;
				getch();
				break;
		}
		else
        getline(tn,n);
		}
		tn.close();
	    }
		if(f==0)
		{
		fun_ssquare();
		gotoxy(25,22);
		cout<<"can't enter winner invalid date";
		gotoxy(25,23);
		cout<<"press any key to return to menu";
		getch();
		tournament_menu();
        }
}
};
int  t_menu()
{

		int ch;
	    gotoxy(25,16);
		cout <<"press 1 to set tournament details";
		gotoxy(25,18);
		cout <<"press 2 to all view tournament details";
        gotoxy(25,20);
		cout <<"press 3 for set winner of the tournament ";
		gotoxy(25,22);
		cout <<"press 4 for Viewing Winning Team ";
		gotoxy(25,24);
		cout <<"press 5 for returning to main menu";
		gotoxy(25,26);
		cout<<"enter your choice:";
		cin >> ch;
		return ch;
}
void tournament_menu()
{
	tournament t1;
	while(1){
		ssquare();
		switch(t_menu())
		{
			case (1):
			{
            t1.tournament_details();
			t1.input_tournament_teams();
		//	t1.store_tournament_details();
			break;
			}
			case (2):
			{
			t1.show_tournament_details();
			break;
			}
			case (3):
			{
			t1.set_winner();
			break;	
			}	
			case(4):
			{
			t1.check_winner();
			break;		
			}
			case (5):
			{
			system("cls");
			ssquare();
			main_mnu();
			break;
			}
			default:
			{
			cout<<"invalid option selcted";
			break;
			}
		}
	}
}
//-----------------------------------------------------------------------------------------------//
// coding for earning//

void show_earning()
{
	int c_t=0,c_g=0;
	tournament tj;
	float n;
			ifstream e;
			e.open("Earning.dat",ios::in);
			if(!e)
			{
				cout<<"\nFILE NOT FOUND";
				
			}
			else
			{
				while(!e.eof())
				{
					e>>n;
				}
			}
			e.close();
            game_user ge;
	        ifstream fin;
			fin.open("gameuser.dat",ios::in|ios::binary);
			if(!fin)
			{
				fun_ssquare();
				gotoxy(25,12);
			cout<<"file not found";
			gotoxy(25,13);
			cout<<"press any key to return to main menu";
			getch();
			}
			else
			{
			fin.seekg(0,ios_base::beg);
			fin.read((char*)(&ge),sizeof(ge));
			while(!fin.eof()){
				c_g+=ge.fees;
				fin.read((char*)(&ge),sizeof(ge));
			}
			fin.close();
		}
		//tj.calculate_win();
		ssquare();
		gotoxy(25,18);
		cout<<"Earnings from tournament:"<<n;
		gotoxy(25,24);
		cout<<"Earnings from games:"<<c_g;
		getch();
		system("cls");
		main_mnu();
}
