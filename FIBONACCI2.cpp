#include<iostream>

using namespace std;

void fibonacci(int n)
{
   static int n1=0,n2=1,n3;

    if(n>0)
    {
        n3 = n1+ n2;
        n1 = n2;
        n2 = n3;


        cout<<n3<<" ";

        fibonacci(n-1);

    }	var $marker_url = ( is_internetExplorer11 ) ? 'assets/img/location.png' : 'assets/img/location.png';
		
	//define the basic color of your map, plus a value for saturation and brightness
	var	$main_color = '#2d313f',
		$saturation= -20,
		$brightness= 5;

	//we define here the style of the map
	var style= [ 
		{	var $marker_url = ( is_internetExplorer11 ) ? 'assets/img/location.png' : 'assets/img/location.png';
		
	//define the basic color of your map, plus a value for saturation and brightness
	var	$main_color = '#2d313f',
		$saturation= -20,
		$brightness= 5;

	//we define here the style of the map
	var style= [ 
		{

}

int main()
{
cout<<"\n====================================================================\n";
    int n;
    cout<<"ENTER THE NUMBER OF TERMS OF THE FIBONACCI SERIES :-- ";
    while(!(cin>>n)|| (n<=0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";

        }

        cout<<"\n 0 1 ";

        fibonacci(n-2);
cout<<"\n====================================================================\n";

        return 0;

}
		    cout<<"ENTER THE NUMBER OF TERMS OF THE FIBONACCI SERIES :-- ";
    while(!(cin>>n)|| (n<=0))
        {
            cin.clear();
            cin.ignore(100,'\n');
            cout<<"    !!!!!    INVALID INPUT. ENTER AGAIN :-- ";

        }

