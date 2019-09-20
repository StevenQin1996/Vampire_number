 #include <iostream>
 using namespace std;
    
    #include <iostream>
#include <sstream>
using namespace std;

int countDigits(int n) {

	int count = 0;
	while( n != 0){

		n = n / 10;
		count++;
	}
	return count;
}

int length (string s) {

	int count = 0;
	while(s[count] != 0) {

		count++;
	}
	return count;
}

string sort(string& s){
	int low=0;
	int howmany = length(s);
	int number=1;
	int T=0;
	for (int check=0; check<howmany-1; check++)
		{
			int n=check;
			low=s[check];
			for(; number<howmany;number++)
			{
				if(s[number]<low)
				{
					n=number;
					low=s[number];
				}
			}
			s[n]=s[check];
			s[check]=low;
			T++;
			number=1+T;
		}
		return s;
}
string convert(int n){
	string s = "";
	stringstream ss;
	for(int i =countDigits(n); i!=0; i--)
	{
		ss << (n%10);
		s+= ss.str();//s.append(ss.str());
		ss.str(string());
		n = n / 10;
	}
	return s;
}
int isVampire(int n) {

	int count = countDigits(n);
	int f = 1;
	int g = 0;
	int noob=0;
	string s = "";
	string b = convert(n);
	 for ( int c=1; c<count/2; c++)
		{
			f*=10;//find the lowest number with n/2 digits to start as the first g(which will be 1*10to the (n-1)power)
		}
		int end=f*10;
        for ( ; f<end; f++)//need recheck if not work.
			{
				if (n % f == 0)
				{
					g = n / f;
					//cout<< f<<endl;
					//cout<< g<<endl;
					if(f<=g && !(f%10==0 && g%10==0) && countDigits(g) == countDigits(f))
					{
						s = convert(f) + convert(g);
						//cout<< convert(f)<<endl;
						//cout<< convert(g)<<endl;
						sort(s); 
						sort(b);
						//cout << s << "    " << b;
						if(s == b)
						{
							
							noob=f;
							return f;
							break;
						}
					}
				}   							
   			}
   		return noob;
}

int main( )
{
int n;
	cout << "Enter a number: ";
	cin>>n;
	cout<<endl;

	if(isVampire(n) != 0)
	{
		int a=isVampire(n);
		int b=n/a;
		cout << a <<" * "<< b;
	}
	else
		cout<< "No stakes needed";
}