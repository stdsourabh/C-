#include<iostream>
using namespace std;

int main()
{
      int a=0,n=5,k=0;
      int s=12;
      int arr[]={1,2,3,7,5};

        for(int i=0;i<n;i++)
        {
            k=0;
            for(int j=i;j<n;j++)
            {
                a=arr[j]+a;
                k=k+j;
                cout<<k<<endl;
                if(a==s)
                {
                    break;
                }
            }
            if(a==s)
            {
                break;
            }
        }
        cout<<k;
}