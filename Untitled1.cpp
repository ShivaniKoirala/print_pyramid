# include <iostream>
//# include <typeinfo>
 using namespace std;
 
 class pyramid
 {
 	int int_layer;
 	public:
 		void set_layer(int n);
 		int get_layer();
 		void print_pyramid();
 		void print_reverese_pyramid();
 		
 		//int check_valid_input(int n);		
 };
 
 void pyramid :: set_layer(int n)
 {
 	int_layer=n;
 }
 
 int pyramid :: get_layer()
 {
 	return int_layer;
 }
 
 void pyramid :: print_pyramid()
 {
 	for (int i=0;i<n;i++)
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
 }
 void pyramid :: print_reverse_pyramid()
 {
 	for (int i=n;i<0;i--)
	{
		for (int j=k;j<=1;j++)
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
 }
 
 int main()
 {
 	int n,i;
 	char x;
 	pyramid p ;
 	cout<<"				Pyramid printing with numbers 		\n\n";
 	cout<<" USER GUIDE:"<<endl;
 	cout<<"\t\t\t1.Pyramid can have minimum 1 and maximum 9 layers \n\t\t\t2.Give your input in integers only"<<endl;
 		i=1;
 	
 	while (i>=1)
 	{    
 	    cout<<"\n\n Enter the number of layers: \t";
		cin >>n;
    	//n=p.check_valid_input(n);
 		p.set_layer(n);
 		cout<<"The number of layers of pyramids are :"<<p.get_layer()<<endl;
 		while(p.get_layer()>9 || p.get_layer()<-9 )
 		{
	 		if (p.get_layer()>9 || p.get_layer()<(-9) )
	 		{
 				cout<<"pyramid will be distorted please provide number of layers between -9 to 9"<<endl;
 				cin>>n;
 				p.set_layer(n);
			} 
    	}
 	
 		if ( p.get_layer()>0 && p.get_layer()<10)
 		{
 		p.print_direct_pyramid();
		}
		else if ( p.get_layer()<0 && p.get_layer()>(-10))
		{
		p.print_reverse_pyramid();
		}
		else 
		cout<<"pyramid without any layer..not able to create required pyramid '"<<endl;
	
		cout<<" Do you want to print more pyramids (Y/N) ";
		
		cin>>x;
		if (x=='Y')
		{
			i++;
		}
		else 
		{
			i=0;
	 		cout<<"Logout";
		}
	}
 	
 	
 	
 }