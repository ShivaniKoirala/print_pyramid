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
 		int check_valid_input(int n);		
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
		for (int j=1;j<=2*int_layer-1;j++)
		{
			if (j<=(int_layer-loop_iterator_1)||j>=(int_layer+loop_iterator_1-1))
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
 	if(isdigit(n)==false)
	{
		cout<<"Provided input type is not supported yet........give another input!!"<<endl;
		return n;	
	}
	else 
	   cout<<"input is valid ";
	   return n;
 
 }*/
 
 
 int main ()
 {
 	int n;
 	pyramid p;
 	cout<<"Enter the number of layers and number should be in the range of -9 to 9 and intergers \n for positive integers upwards pyramind will be created \n for negative integers downward pyramid will get printed \n" ;
 	cin >>n;
   
 	if (n>9 || n<(-9))
	{
 		cout<<"pyramid will be distorted please provide number of layers between 1-9"<<endl;
 		cin>>n;
	}
 	
 	p.set_layer(n);
 	cout<<"The number of layers of pyramids are :"<<p.get_layer()<<endl;
 	if ( p.get_layer()>0 && p.get_layer()<10)
 	{
 	//	p.print_direct_pyramid();
	}
	else if ( p.get_layer()<0 && p.get_layer()>(-10))
	{
		p.print_reverse_pyramid();
	}
	else 
	cout<<"pyramid without any layer"<<endl;
   
	return 0;
	
 }