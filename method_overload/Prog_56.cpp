/*------------------------------------------------------------*/
/*    Program ilustruje działanie funkcji przeciążonych       */
/*------------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>


using namespace std;

void pisz (int );
void pisz (int, char);
void pisz (char, int, char *);
void pisz (char, float, char);
void pisz (char, int);
//--------------------------------
int main()
{
  pisz (255);
  pisz (9, 'a');
  pisz ('B', 55, "odleglosc od punktu ");
  pisz ('y', 2.34, 'x');
  pisz ('a', 88);
  _getch();
  return 0;
}
//--------------------------------
void pisz (int L)
{
  cout << L << " dziesienie = " << hex << L << " szesnastkowo" << endl;
}
//--------------------------------
void  pisz (int L, char Z)
{
  cout << Z << "). " << dec << L << endl;
}
//--------------------------------
void pisz (char Z, int L, char *T)
{
  cout << T << Z << " wynosi " << L << endl;
}
//--------------------------------
void pisz (char Z1, float L, char Z2)
{
  cout << Z1 << " = " << L << Z2 << endl;
}
//--------------------------------
void pisz (char Z, int L)
{
  cout << L << Z << endl;
}

