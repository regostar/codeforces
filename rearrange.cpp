/* Store alternate digits 
ip:- 456
op:- 46

ip:- 4567
op:- 46
*/
#include <iostream>
#include<cmath>
using namespace std;

int main(void) {
	int n,m=0,fin=0,i=1;
	cout<<"enter a number \n";
	cin>>n;
	//find the no of digits in the number
	int digits=(int)log10(n);
	cout<<"\n No of digits in your number is ="<<digits+1<<endl;
	while(n!=0)
	{
		if(i%2!=0)
		{
		//extract the first digit
		m=(int)(n/pow(10,digits));
		cout<<m<<endl;
    
		//store the first digit
		fin=(fin*10)+m;		
		}
	n=(int)(n%(int)pow(10,digits));//delete the digit
		digits--;
    i++;
	}
	cout<<"\n"<<fin;
	// your code goes here
	return 0;
}
