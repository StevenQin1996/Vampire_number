#include <iostream>
using namespace std;

r (int a, float b)
{
	int c;
	c=a-b;
	return c;	
};

int main()
{

	string vampire;
	string newvampire;
	int starter =1;
	int factori=0;
	float factorf;=0;
	float factor=0
	int counter =0;
	for (int c=0 ; vampire[c] != 0; c++)
	{
		counter ++; // we know how many digits the input number has;
	}
	int tempstarter=starter;
	
	int valueofvampire=0;
	for (int c=counter ; c != -1; c--)
	{
		int n=0;
		int power=1;
		for (int a=n;a != 0; a-- )
		{
			power*=10;
		}
		valueofvampire+= vampire[c]*power;
		n++;
		power=1;//find the value of the input. because the input is a string, and we can`t use it in caculation. 
	}
	for ( int c=1; c<counter/2; c++)
	{
		starter*=10;//find the lowest number with n/2 digits to start as the first factor(which will be 1*10to the (n-1)power)
	}
	for (starter; starter<tempstarter*10; starter++)
	{
		factor = valueofvampire/starter;//find the second factor;
		factori = factor;
		factorf = factor;
       r = subtract(factori, factorf)
       if (c!=0)
       		{
       			cout<<"No";
       		}
       	else 
       		{
				//use a loop to put starter into array newvampire; (10 minutes)
				//use a loop put factor into array newvampire; (5 minutes)
				//starts with new[0] and sort through the string vampire  
				//when there is a number vampire[x] = newvampire[0], lock vampire[x] and take it out of the string, so when we sort vampire with the next digit in newvampire, vampire[x] will not be in the list we go through. 
				//if there is new[x] does not equal to any digits in the string vampire, break the loop and we know the input is not a vampire number.
				// in the end, if all digits in the newstring find a place in the vampire. than vimpire is a vimpire number. otherwise if is not. (this might take up to 1 hour)

       		}
	}
	
}
