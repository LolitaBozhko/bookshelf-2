#include <iostream>
#include <vector>
#include "Book.h"
#include "PrintBook.h"
#include "Book_shelf.h"
#include "Shelf.h"

using namespace std;

int main (int argc, char ** argv){
	system ("chcp 1251");

	int mode =-1;

	vector <Book_shelf> bshelfs;
	Book_shelf bshelf;
	while (mode!=0){
		cout << "-= МЕНЮ =-"<<endl;
		cout << "1.Добавить шкаф"<< endl;
		cout << "2. Добавить полку в шкаф" <<endl;
		cout << "3. Добавить книгу" << endl;
		cout << "4. Вывод на экран" << endl;
		cout << "0. Выход" <<endl;
		cout << "Введите номер и нажмите <ENTER>: ";
		cin >> mode;
		switch (mode) {
			case 0: continue;
			case 1:
				
				bshelfs.push_back (bshelf);
				cout << "Шкаф добавлен" <<endl<<endl;
				break;
			case 2:
			if (bshelfs.size()>0){
				cout << "Доступно" <<bshelfs.size()<<" шкафов" <<endl;
				cout << "Введите номер шкафа (от 1 до" <<bshelfs.size()<<"): ";
				int n=0;
				cin >>n;
				if (n>0 && n<=bshelfs.size()){
					bshelfs[n-1].addshelf();
					cout<< "Полка добавлена"<<endl<<endl;
				} else{
					cout <<"Ошибка в номере шкафа. Повторите"<<endl<<endl;
					}
				} else {
					cout<<"Доступный шкаф отсутствует"<<endl<<endl;
				}
			}
					break;	
				
			case 3:
				if(bshelfs.size()>0){
					cout <<"Доступно"<< bshelfs.size()<< " шкафов"<<endl;
					cout<< "Введите номер шкафа(от 1 до" <<bshelfs.size()<<"): ";
					int n=0;
					cin>>n;
					if (n>0 && n<=bshelfs.size()){
						cout<< "Введите номер полки: ";
						int m=0;
						cin>>m;
						PrintBook pb;
						cout <<"Введите название книги";
						string name;
						cin>>name;
						cout <<"Введите кол-во страниц";
						int pages;
						cin>>pages;
						pb.setName (name);
						pb.setPages(pages);
						bshelfs[n].addBook (pb, n-1);
		
					} else {
						cout<<"Ошибкав номере шкафа. Повторить"<<endl<<endl;
					}
					}else{
						cout<< "Доступные шкафы отсутствуют"<<endl<<endl;
						}
					break;	
					}
				
	
	cout<<"Пока!";
    return 0;	
			
	}
		
	






