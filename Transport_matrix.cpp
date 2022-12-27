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
void showmatrix2(int d[][3],int r,int c);
void matrixTransport(int e[][2],int rd,int cd);

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

//Declare matrix array
int b[2][3] = {0};


cout<<"Matrix for result a Transport c:"<<endl<<endl;

showmatrix2(b,2,3);

//Seperator
cout<<endl<<"----------------------------------"<<endl;

cout<<"Matrix result a Transport c:"<<endl<<endl;

matrixTransport(a,3,2);

//Seperator
cout<<endl<<"----------------------------------"<<endl;

getch();
}
//function variable
 int k[2][3] = {0};
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

//-------------------------------------
void showmatrix2(int d[][3],int r,int c)
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

//---------------------------

//Function for Transport matrix

void matrixTransport(int e[][2],int rd,int cd)

{
    
   

    for(int i=0; i<rd; ++i)
    {
        for(int j=0; j<cd; ++j)
        {

             k[j][i] = e[i][j];
             cout<<"k["<<j<<"]"<<"["<<i<<"]"<<" = "<<k[j][i]<<endl;
        }

    }

cout<<endl<<"--------------------------"<<endl;

    //Show transport array

        for(int i=0; i<cd; ++i)
    {
        for(int j=0; j<rd; ++j)
        {
              cout<<setw(4)<<k[i][j];
        }
        cout<<endl;
        
    }
    
}