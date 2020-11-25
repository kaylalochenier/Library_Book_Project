#include "a5_book.hpp"

Book::Book(string new_title, string new_authors, string new_dop) :
	book_title(new_title),
	book_authors(new_authors),
	date_of_publication(new_dop) {}

void Book::print() {
	cout << "\nTitle: " <<book_title << "\nAuthor: "
		<< book_authors << "\nDate of Pubilcation: "
		<< date_of_publication << endl; 
}
