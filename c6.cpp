#include<iostream>
using namespace std;

int n;
int x[100];
bool check[100];

void hoanvi(int i)
{
   for(int j = 1; j <= n; j++)
   {
      if(!check[j])
      {
         x[i] = j;
         check[j] = true;
         if(i == n)
         {
            for(int k = 1; k <= n; k++)
               cout<<x[k];
            cout<<endl;
         }
         else hoanvi(i + 1);

         check[j] = false;
      }
   }
}

int main()
{
   cin>>n;
   hoanvi(1);

   return 0;
}

