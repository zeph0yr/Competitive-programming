#include <iostream>
using namespace std;
int main()
{
     int d,w,x;
     int arr[1000];
     int ar[1000];
     cin>>d>>w;
     for(int i=0;i<d;i++)
     {
         cin>>arr[i]>>ar[i];
     }
     for(int i=0;i<w;i++)
     {
         cin>>x;
         for(int j=0;j<d;j++)
         {
         if(x==arr[j])
         {
          break;
         }
         }
            cout<<ar[j];
        cout<<endl;
     }

    return 0;
}
