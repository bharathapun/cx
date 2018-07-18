#include <iostream>
#include <string>
using namespace std;
class AlternateSorting
{ 
    int z,ar[1000],i,j,c=0;
    public:
    void get()
    {
        cout<<"INPUT"<<endl;
    cin>>z;
    cout<<"Elements"<<endl;
    for(i=0;i<z;i++)
    {cin>>ar[i];
    }
    if(z%2)
    {c++;}
    }
    void sort()
    {
        for(i=0;i<z;i++)
        {
                    for(j=i;j<z;j++)
{
    if(ar[i]<ar[j])
{
    int t=ar[i];
    ar[i]=ar[j];
    ar[j]=t;
    }
}
            }
        }
        void disp()
        {
            for(i=0;i<=z/2;i++)
            {
                cout<<"\n"<<ar[i]<<"\t";
                if(c==0)
                {
                    cout<<ar[z-i-1];
                    }
                    else
                    {
                        if(i!=z/2)
                        {
                            
                              cout<<ar[z-i-1];
                  }
                        }
                }
            }
   };
int main()
{
  AlternateSorting as;
  as.get();
  as.sort();
  as.disp();
return 0;
}
