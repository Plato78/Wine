#include <iostream>
using namespace std;
class Wine {
private:
	size_t quantity;
	string type;
	string name;
public:
	Wine() {
		quantity = 20;
		type = "Red";
		name = "";
	}
	Wine(int fquantity, string ftype, string fname) {
		quantity = fquantity;
		type = ftype;
		name = fname;
	}
	size_t getQuantity() { return quantity; }
	string getType() { return type; }
	string getName() { return name; }
	float getV() { return quantity * 0.7; }
	void setName(string fname) { name = fname; }
	void setQuantity(size_t fquantity) { quantity = fquantity ; }
	void setType(string ftype) { type = ftype; }
	void print() { cout << "Name: " << name << endl << "Type: " << type << endl << "Quantity: " << quantity << endl << "Volume: " << getV() << endl; }
};

int main() {
	Wine w1;
	w1.setName("Gods Wine");
		w1.setType("Red");
		w1.setQuantity(20);
		Wine w2(10, "Pink", "Wine of Kings");
		Wine w3(8, "White", " De La Heisenburg");
	w1.print();
	//cout << w1.getV() << endl;
	w2.print();
	//cout << w2.getV() << endl;
	w3.print();
	//cout << w3.getV() << endl;
	return 0;
}