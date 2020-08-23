// Shop Management.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class shopManagment {
private:
    std::string itemName;
    double price;
    int numberofItem;
    std::vector<std::string> itemlist;
public:
    std::string getName() {
        return itemName;
    }
    void setName(std::string name) {
        this->itemName = name;
    }
    double getPrice() {
        return price;
    }
    void setPrice(double price) {
        this->price = price;
    }
    double getnumberofItem() {
        return numberofItem;
    }
    void setnumberofItem(int numberofItem) {
        this->numberofItem = numberofItem;
    }
    void setAll(std::string, double, int);
    void buyItem(int);
    shopManagment(std::string, double, int);
    shopManagment();
    int getNumberofItem() {
        return numberofItem;
    }
    void showItem();

};
    
void shopManagment::setAll(std::string itemName, double price, int numberofItem) {
    this->itemName = itemName;
    itemlist.push_back(itemName);
    this->price = price;
    this->numberofItem = numberofItem;
}

shopManagment::shopManagment(std::string itemName, double price, int numberofItem) {
    this->itemName = itemName;
    this->price = price;
    this->numberofItem = numberofItem;
}

shopManagment::shopManagment() {
    this->itemName = " ";
    this->price = 0;
    this->numberofItem = 0;
}

void shopManagment::buyItem(int number) {
    this->numberofItem = numberofItem-number;
}


void shopManagment::showItem() {  
    std::cout << this->itemName << " is " << this->price << " , there is " << this->numberofItem << " left.\n";
}










int main()
{
    shopManagment computer;
    computer.setAll("computer", 1500, 100);
    computer.buyItem(5);
    computer.showItem();




    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
