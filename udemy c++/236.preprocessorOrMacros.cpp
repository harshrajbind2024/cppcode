//program for preprocessor or macros
#include<bits/stdc++.h>
using namespace std;


#define max(x,y) (x>y?x:y)
#define msg(x) #x
#define pI 3.1425
#define pI 3
#ifndef pI 
#define pI 3
#endif

int main()
{
	cout<<pI<<endl;
	cout<<max(10,12)<<endl;
	cout<<msg(hello)<<endl;
}