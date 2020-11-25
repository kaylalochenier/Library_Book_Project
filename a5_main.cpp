#include <iostream>
#include "a5_book.hpp"
#include "a5_library.hpp"

using namespace std;

void test_book_insertion() {
    Book my_book("title test", "author", "date of publication");
    vector <Book> my_books;

    Library my_library(my_books);
    my_library.insert(my_book);
    my_library.print();



}

void test_book_removal() {

}

void execute_tests() {
    test_book_insertion();
}

int main() {
    execute_tests();
}