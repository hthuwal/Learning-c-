#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	srand(50);//seed a random number(withoust srand(which allows to input a random number overselve) same set of random numbers are generated by rand which means they are not random :p//if you give same parameter to srand everytime this generates same set of numbers agai
	for(int i=0;i<25;i++)
	{
	cout<< rand()<<" ";
	}
	cout<<endl<<endl;
	for(int i=0;i<25;i++)
	{
	cout<< (rand()%5)+1<<" ";//no computer or random number generator is truly random
	}
	
	return 0;
}