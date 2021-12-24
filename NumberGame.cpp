#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
using namespace std;
class game{
	public : int n,i;
	run(){
	cout<<"How Many Players Are There ? ";
	cin>>n;
	srand(time(0));
	int num = rand() % n+1;
	int a[n];
	string b[n];
	for(i=1;i<=n;i++){
		cout<<"\nPLAYER "<<i<<"\nPick a number from 1-"<<n<<endl;
		cin>>a[i];
		cout<<a[i]<<endl;
		}
	for(i=1;i<=n;i++){
		if(a[i]==num)
		cout<<"\nTHE RANDOM NUMBERS IS = "<<num<<endl<<"PLAYER "<<i<<" is the winner!";
	}
	}
};
int main(){	
	cout<<"WELCOME TO THE NUMBERS GUESSING GAME !\n";
	game a;
	a.run();
	getch();
}

