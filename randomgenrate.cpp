#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int randrange(int low,int high)   /* generates a random number within given range*/
{
    return rand()%(high-low+1)+low;     
}

int main()
{
    int num[9]={0},i,j;     
    bool check;                         
    for(i=0;i<9;i++)
    {
        check=false;
        do
        {
            num[i]=randrange(1,9);           
            check = true;
            for( j =0;j<i && check; j++){
                check = num[i]!=num[j];
            }
        } while(check==false);
    }

    // the program is working fine without the repetition  check
    // this section prints out the array elements
    for(i=0;i<9;i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}