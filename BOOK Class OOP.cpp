#include <iostream>
using namespace std;
class Book {
private:
    string title;
    string author;
    float price;
public:
    Book() {
        title;
        author;
        price;
    }
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }
    void input() {
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
        cout << "Enter Book Price: ";
        cin >> price;
    }
    void display() {
        cout<<"\nBook Title is: "<< title<<"\nBook Author is: "<<author<<"\nBook Price is: " << price<<"\n\n";
    }
    float getPrice() {
        return price;
    }
};
int main() {
    Book books[5];
    cout << "Enter details for 5 books:\n";
    for (int i = 0; i < 5; i++) 
	{
        cout << "\nBook " << i+1 << ":\n";
        books[i].input();
    }
    cout << "\nAll Books Information\n";
    for (int i = 0; i < 5; i++) 
	{
        books[i].display();
    }
    cout << "\nBooks with Price Greater Than 500\n";
    int found = 0; 
    for (int i = 0; i < 5; i++) 
	{
        if (books[i].getPrice() > 500)
		 {
            books[i].display();
            found = found + 1;
        }
    }
    if (found == 0) {
        cout << "\nNo books found with price greater than 500.";
    }
    return 0;
}
