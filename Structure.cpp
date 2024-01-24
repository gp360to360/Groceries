#include <iostream>
#include <string>

using namespace std;


class Product {
protected:
    string name;
    int quantity;
    double price;

public:
   
    Product(const string& n, int q, double p) : name(n), quantity(q), price(p) {
        
        if (quantity < 1) {
            cerr << "Error: Quantity should be 1 or more for " << name << endl;
        }
    }

    
    virtual void displayInfo() const {
        cout << "Product: " << name << ", Quantity: " << quantity << ", Price: $" << price << endl;
    }

    
    virtual ~Product() {}
};

// Derived class for Masala products
class Masala : public Product {
private:
    int spiceLevel;

public:
   
    Masala(const string& n, int q, double p, int s) : Product(n, q, p), spiceLevel(s) {}

   
    void displayInfo() const override {
        Product::displayInfo();
        cout << "Spice Level: " << spiceLevel << endl;
    }
};

// Derived class for Oils products
class Oils : public Product {
private:
    string oilType;

public:
   
    Oils(const string& n, int q, double p, const string& ot) : Product(n, q, p), oilType(ot) {}

   
    void displayInfo() const override {
        Product::displayInfo();
        cout << "Oil Type: " << oilType << endl;
    }
};

// Derived class for Grains products
class Grains : public Product {
private:
    string grainType;

public:
    
    Grains(const string& n, int q, double p, const string& gt) : Product(n, q, p), grainType(gt) {}

   
    void displayInfo() const override {
        Product::displayInfo();
        cout << "Grain Type: " << grainType << endl;
    }
};

// Derived class for ClothingProduct products
class ClothingProduct : public Product {
private:
    string size;

public:
 
    ClothingProduct(const string& n, int q, double p, const string& s) : Product(n, q, p), size(s) {}

   
    void displayInfo() const override {
        Product::displayInfo();
        cout << "Size: " << size << endl;
    }
};

// Main function
int main() {
    // 
    Masala masala("Garam Masala", 2, 5.99, 3);
    Oils oil("Soyabeen Oil", 0, 9.99, "Extra Virgin");  
    Grains rice("Basmati Rice", 5, 2.99, "Long Grain");
    ClothingProduct shirt("Casual Shirt", 3, 29.99, "Large");

    masala.displayInfo();
    oil.displayInfo();
    rice.displayInfo();
    shirt.displayInfo();

   
    return 0;
}
