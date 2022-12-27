#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
//create namespace
/*Branch name
*
*
*/
//prototype

void showmatrix1(int d[][2],int r,int c);
//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Declare matrix array
int a[3][2] = {{1,2},{3,4},{5,6}};

cout<<"Matrix a Before Transport :"<<endl<<endl;

showmatrix1(a,3,2);

//Seperator
cout<<endl<<"----------------------------------"<<endl;

getch();
}
//function variable
//--------------------------
//functions

//Function for show matrix
void showmatrix1(int d[][2],int r,int c)
{

for(int i = 0; i<r; ++i)
{

    for(int j = 0; j<c; ++j)
    {
        cout<<setw(4)<<d[i][j];
    }
    cout<<endl;
    
}

}