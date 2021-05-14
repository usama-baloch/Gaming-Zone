#include "iostream"
#include "windows.h"
using namespace std;
void STYLE (char *string_a, int length)
{
	cout<<"\n\n\n\n\n\t\t\t    ";
    int i; char ch = 179;
    
	for(i = 0; i < 10; i++)
        cout<<ch;
    ch--;
    for(i = 0; i < 10; i++)
        cout<<ch;
    ch--;
    for(i = 0; i < 10; i++)
        cout<<ch;
    fflush(stdout);
    for (i = 0; i < length; i++) {
        cout<<(*(string_a + i));
        Sleep(50);
    }

    for(i = 0; i < 10; i++)
        cout<<ch;

    ch++;
    for( i = 0; i < 10; i++)
        cout<<ch;

    ch++;
    for( i = 0;i < 10; i++)
        cout<<ch;

}
void STYLE1 (char *string_a, int length)
{
    int i;

    fflush(stdout);
    for (i = 0; i < length; i++) {
        cout<<(*(string_a + i));
        Sleep(36);
    }
}

