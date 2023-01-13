# include <iostream>
//# include <typeinfo>
 using namespace std;
 
 class pyramid
 {
 	int int_layer;
 	public:
 		void set_layer(int n);
 		int get_layer();
 		void print_direct_pyramid();
 		void print_reverse_pyramid();
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
 
 void pyramid :: print_direct_pyramid()
 {
 	for(int loop_iterator_1=1;loop_iterator_1<=int_layer;loop_iterator_1++)
	{
		/*for(int row_iterator_1=0;row_iterator_1<int_layer-loop_iterator_1;row_iterator_1++)
		{
			cout<<" ";
		}
	
		for(int row_iterator_2=loop_iterator_1;row_iterator_2>=1;row_iterator_2--)
		{
		     cout<<" ";
			cout<<row_iterator_2;
		}*/
		for (int j=1;j<=int_layer;j++)
		{
			if (j<=int_layer-loop_iterator_1)
			{
			cout<<" ";
			}
			else 
			cout<<(int_layer-j+1);	
		}
			cout<<endl;		
	}
 }
 void pyramid :: print_reverse_pyramid()
 {
 	int_layer=int_layer*(-1);
	for(int loop_iterator_1=int_layer;loop_iterator_1>0;loop_iterator_1--)
		{
			/*for(int row_iterator_1=0;row_iterator_1<int_layer-loop_iterator_1;row_iterator_1++)
			{
				cout<<" ";
			}
			for(int row_iterator_2=loop_iterator_1;row_iterator_2>=1;row_iterator_2--)
			{
				cout<<row_iterator_2;
			}*/
			for (int j=1;j<=int_layer;j++)
		    {
				if (j<=int_layer-loop_iterator_1)
				{
				cout<<" ";
				}
				else 
				cout<<(int_layer-j+1);	
			}
			cout<<endl;		
		}		
 }
 /*int  pyramid :: check_valid_input(int n)
 {
 	if(typeid(n).name()=="i")
	{
		cout<<typeid(n).name()<<endl;
		cout<<"Provided input type is not supported yet........give another input!!"<<endl;
		return n;	
	}
	else 
	   cout<<"input is valid ";
	   return n;
 
 }*/
 
 
 int main ()
 {
 	int y,i;
 	char x='N';
 	pyramid p;
 	cout<<"				Half-Pyramid printing with numbers			\n\n\n\n";
 	cout<<" USER GUIDE: \n\t\t\t1.Pyramid can have minimum 1 and maximum 9 layers \n\t\t\t2.If you give a positive number upward pyramid will get printed\n\t\t\t3.If you give a negative number reverse pyramid will get prited\n\t\t\t4.Only integer inputs are accepted ";	    
 	//cout<<"Enter the number of layers and number should be in the range of -9 to 9 and intergers \n -> for positive integers upwards pyramind will be created \n -> for negative integers downward pyramid will get printed \n" ;
 	//cout<<"\n\n Enter the number of layers: \t";
 	i=1;
 	
 	do
 	{    
 		string  str="";
 	    cout<<"\n\n Enter the number of layers: \t";
		cin >>str;
		int n = atoi(str.c_str());
    	//n=p.check_valid_input(n);
 		p.set_layer(n);
 		cout<<"The number of layers of pyramids are :"<<p.get_layer()<<endl;
 		while(p.get_layer()>9 || p.get_layer()<-9 )
 		{
	 		if (p.get_layer()>9 || p.get_layer()<(-9) )
	 		{
 				cout<<"pyramid will be distorted please provide number of layers between -9 to 9"<<endl;
 				cin>>str;
 				int n = atoi(str.c_str());
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
	    cout<<"Shivani x= "<<x<<endl;
	}
	while (x=='Y');
	return 0;
	
 }