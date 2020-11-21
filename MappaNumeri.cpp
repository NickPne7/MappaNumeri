#include <iostream>
#include <conio.h>
using namespace std;

const int altezza = 30;
const int lunghezza = 30;
int X[10];
int Y[10];
int counter = 0;

void mappa()
{
	for(int i = 0; i< lunghezza; i++){
		cout<<"*";
	}
	cout<<endl;
	
	for(int i = 0; i < altezza; i++)
	{
		for(int j = 0; j< lunghezza; j++){
			bool prova = true;
			if(j == 0 || j == lunghezza-1){
				cout<<"*";
			}
			for(int y = 0; y < counter; y++){
				
				if(j == X[y-1] && i == Y[y-1]){ // almeno una volta la condizione è true cazzo !!!!
					cout<<"#";
					prova = false;
				}
			}
			if(prova == true){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	for(int i = 0; i< lunghezza; i++){
		cout<<"*";
	}
}

int main()
{
	while(counter < 10)
	{
		cin>>X[counter];
		cin>>Y[counter];
		mappa();
		counter++;
		cout<<endl;
		system("pause");
		system("cls");
	}
	return 0;
}
