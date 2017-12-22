#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int i,j,x1[4][4],y1[4][4];
char sea[10][10];
cout<<"   ";
for(i=0,j=0;j<10;j++)
{
	cout<<j<<"  ";

}
cout<<"\n";
for(i=0;i<10;i++)
{	for(j=0;j<10;j++)
	{
	 sea[i][j]='*'
	 ;
	}
}
for(i=0;i<10;i++)
{
	for(j=0;j<10;j++)
	{       if(j==0)
		{	cout<<i<<"  ";

		}

		cout<<sea[i][j]<<"  ";
	}
	cout<<"\n";
}
getch();

}
