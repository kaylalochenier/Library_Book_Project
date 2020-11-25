#ifndef SYDE121_A5_LIBRARY_HPP
#define SYDE121_A5_LIBRARY_HPP

#include <vector>
#include "a5_book.hpp"

using namespace std;

class Library {
	Book book;
	vector<Book> my_books;
public:
	Library(vector<Book> my_new_books);
	void print(); 

	bool insert(Book new_book);

};
#endif