#include<iostream>
#include<cmath>
using namespace std;
void TOH(int x,int first,int sec,int third)
{
        if(x==1){
        	cout<<first<<" "<<third<<endl;
		}
		else{
		TOH(x-1,first,third,sec);
        cout<<first<<" "<<third<<endl;
        TOH(x-1,sec,first,third);
}}
int main()
 {
   int n;
   cout<<"Enter no.of Disc: ";
   cin>>n;
   TOH(n,1,2,3);
	return 0;
}
