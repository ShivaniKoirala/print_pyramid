 #include <iostream>
 using namespace std;
 
 class pyramid
 {
 	int row;
 	int column;
 	public:
 		void set_row_and_column(int n);
 		int get_row();
 		int get_column();
 		void print_direct_pyramid();
 		void print_reverse_pyramid();	
 };
 
 void pyramid :: set_row_and_column(int n)
 {
 	row=n;
 	column=2*n-1;
 }
 
 int pyramid :: get_row()
 {
 	return row;
 }
 int pyramid :: get_column()
 {
 	return column;
 }
 
 void pyramid :: print_direct_pyramid()
 {
 	for (int i=0;i<row;i++)
	{
		for (int j=1;j<=column;j++)
		{
			if ( j<row-i||j>row+i)
			cout<<" "; 
			else if(j==row)
			cout<<"1";
			else if (j>=row-i && j<row)
			cout<<row-j+1;
			else 
			cout<<j-row+1;	
		}
		cout<<endl;
	}
 }
 void pyramid :: print_reverse_pyramid()
   {
   	    row=row*(-1);
   	    column=column*(-1);
   	    
 		for (int i=row-1;i>=0;i--)
     	{
			for (int j=1;j<=column;j++)
			{
				if ( j<row-i||j>row+i)
				cout<<" "; 
				else if(j==row)
				cout<<"1";
				else if (j>=row-i && j<row)
				cout<<row-j+1;
				else 
				cout<<j-row+1;	
			}
		cout<<endl;
    	}	
	}		
 
 
 
 
 int main ()
 {
 	int n;
 	char x='N';
 	pyramid p;
 	cout<<"				Full-Pyramid printing with numbers			\n\n\n\n";
 	cout<<" USER GUIDE: \n\t\t\t1.Pyramid can have minimum 1 and maximum 9 layers \n\t\t\t2.If you give a positive number upward pyramid will get printed\n\t\t\t3.If you give a negative number reverse pyramid will get prited\n\t\t\t4.Only integer inputs are accepted ";	    
 	//cout<<"Enter the number of layers and number should be in the range of -9 to 9 and intergers \n -> for positive integers upwards pyramind will be created \n -> for negative integers downward pyramid will get printed \n" ;
 	//cout<<"\n\n Enter the number of layers: \t";
 
 	
 	do
 	{   
	    string str=" " ;
 	    cout<<"\n\n Enter the number of layers: \t";
		cin >>str;
    	int n = atoi(str.c_str());
 		p.set_row_and_column(n);
 		
 		cout<<"The number of layers of pyramids are :"<<p.get_row()<<endl;
 		while(p.get_row()>9 || p.get_row()<-9 )
 		{
	 		if (p.get_row()>9 || p.get_row()<(-9) )
	 		{
 				cout<<"pyramid will be distorted please provide number of layers between -9 to 9"<<endl;
 				cin>>str;
 				int n = atoi(str.c_str());
 				p.set_row_and_column(n);
			} 
    	}
 	
 		if ( p.get_row()>0 && p.get_row()<10)
 		{
 		p.print_direct_pyramid();
		}
		else if ( p.get_row()<0 && p.get_row()>(-10))
		{
		p.print_reverse_pyramid();
		}
		else 
		cout<<"pyramid without any layer..not able to create required pyramid '"<<endl;
	
		cout<<" Do you want to print more pyramids (Y/N) ";
		
		cin>>x;
		
	}
	while(x=='Y');
	return 0;
	
 }