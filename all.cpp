#include <iostream>
#include <string>
#include "book.h"
#include "PrintBook.h"
#include "shelf.h"
#include "Book_shelf.h"
using namespace std;

int main(int argc,char** argv){
	book a;
	a.Print();
	int n;
	cout<<"Enter book number";
	cin>>n;
	PrintBook *books = new PrintBook[n];
	for (int i;i<n;i++){
		cout<<"Enter book"<<i+1<<"Name: \n";
		string name;
		cin>>name;
		cout<<"Enter book"<<i+1<<"Pages: \n";
		int p;
		cin>>p;
		PrintBook pbook;
		pbook.setName(name);
		pbook.setPages(p);
		books[i]=pbook;
	}
	for(int i=0;i<n;i++){
		books[i].Print();
		
	}
	return 0;
}
