#include <iostream>
#include <string>
using namespace std;

// Maximum number of allowed books in the database
const int MAX_BOOKS = 50;

// Booker structure that defines one Book
struct Booker
{
    std::string author;
    double price;
    std::string title;
    int bookNumber;
    int numberOfCopies;
};

// Book class with Book list and their member functions
class Book {
  private:
    Booker books[MAX_BOOKS];
    int bookCount;

  public:
    Book(void)
    {
        bookCount = 1;
    }

    // Inserts a new Book to the books array
    void insertBook(const std::string &author, double price, const std::string &title,
                    int bookNumber, int totalCopies)
    {
        if (bookCount < MAX_BOOKS)
        {
            books[bookCount] = {author, price, title, bookNumber, totalCopies};
            bookCount++;
        }
        else
        {
            std::cout << "Library is full!\n";
        }
    }

    // Displays all books in the books array
    void displayBooks() const
    {
        std::cout << "\n"<< bookCount << " books available.\n";

        if (bookCount > 0)
        {
            for (int i = 0; i < bookCount; ++i)
            {
                std::cout << "\n"
                << i << ")\n"
                << "Author: " << books[i].author << "\n"
                << "Title: " << books[i].title << "\n"
                << "Price: " << books[i].price << "\n"
                << "Copies: " << books[i].numberOfCopies << "\n"
                << "Book Number: " << books[i].bookNumber << "\n"
                << "\n";
            }
        }
    }
};

int main(void)
{
    Book books;

    books.insertBook("Justus", 1200.00, "How to scream", 1, 10);
    books.insertBook("Longerwa", 900.0, "The face that stares", 2, 18);
    books.displayBooks();
    return 0;
}
