#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int B[5],n=0;
    char P[5],x;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the job name ";
        cin>>P[i];
        cout<<"Enter the Burst time for job "<<P[i]<<" ";
        cin>>B[i];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4-i;j++)
        {
             if(B[j]>B[j+1])
             {
               n=B[j];
               B[j]=B[j+1];
               B[j+1]=n;
               x=P[j];
               P[j]=P[j+1];
               P[j+1]=x;
             }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<"job"<<P[i]<<" "<<B[i];
    }
    return 0;
    getch();
}
