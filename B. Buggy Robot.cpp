/* finding 2*min(l,r)+2*min(u,d)

http://codeforces.com/problemset/problem/888/B
*/


#include <iostream>
using namespace std;

int main() {
    int n,l=0,r=0,u=0,d=0,max=0;
    string str;
    cin>>n>>str;
    for(int i=0;i<n;i++)
     {
         switch(str[i])
         {
             case 'L':l++;break;
             case 'R':r++;break;
             case 'U':u++;break;
             case 'D':d++;break;
         }
         
     }
     cout<<"l= "<<l<<" r= "<<r<<" u= "<<u<<" d= "<<d<<endl;
     if((l>0)&&(r>0))
      { if(l<=r)
         max+=2*l;
        else
         max+=2*r;
      }
     if((u>0)&&(d>0))
       {if(u<=d)
         max+=2*u;
        else
         max+=2*d;
       }
     cout<<max;
	// your code goes here
	return 0;
}
