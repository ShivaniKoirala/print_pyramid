# include <iostream>
using namespace std;

int main ()
{
	int n,k;
	cout <<"Enter the number of layer"<<endl;
	cin>>n;
	n=n*(-1);
	k=2*n-1;
	//cout<<k/2<<"test";
/*	for (int i=0;i<n;i++)
	{
		for (int j=1;j<=k;j++)
		{
			if ( j<n-i||j>n+i)
			cout<<" "; 
			else if(j==n)
			cout<<"1";
			else if (j>=n-i && j<n)
			cout<<n-j+1;
			else 
			cout<<j-n+1;	
		}
		cout<<endl;*/
		for (int i=n-1;i>=0;i--)
     	{
		for (int j=1;j<=k;j++)
		{
			if ( j<n-i||j>n+i)
			cout<<" "; 
			else if(j==n)
			cout<<"1";
			else if (j>=n-i && j<n)
			cout<<n-j+1;
			else 
			cout<<j-n+1;	
		}
		cout<<endl;
	}
	return 0;
}