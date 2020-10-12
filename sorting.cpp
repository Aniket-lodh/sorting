#include<iostream>
using namespace std;
/*void checksort(int sorting[5])
{   int temp=0;
    for(int i=0; i<5; i++)
    {
        if(sorting[i]>sorting[i+1])
        {

            temp=sorting[i+1];
            sorting[i+1]=sorting[i];
            sorting[i]=temp;
            //cout<<endl<<sorting[i];}
        }
    }
    for (int i=0; i<5; i++)
    {
        cout<<endl<<sorting[i];
    }
}*/


/*void swap(int sorting[a],[b])
{   int temp;
    temp=sorting[b];
    sorting[b]=sorting[a];
    sorting[a]=temp;

}*/

int main()
{
    int no[5];
    int temp;
    int n=5;
    cout<<"Insert 5 no. to sort them"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>no[i];
    }
  
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(no[j]>no[j+1])
            {
                
                temp=no[j+1];
                no[j+1]=no[j];
                no[j]=temp;

            }
        }
    }
    cout<<endl<<"after sorting::"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<endl<<no[i];
    }
    return 0;
}
