#include "a5_library.hpp"

using namespace std;

Library::Library(vector<Book> my_new_books) :
	my_books(my_new_books) {}

bool Library::insert(Book new_book)
{
	my_books.push_back(new_book);
	return true;
}

void Library::print() {
	my_books[0].print();
}





