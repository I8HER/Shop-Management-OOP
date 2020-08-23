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
    std::vector<double> pricelist;
    std::vector<int>stock;

public:
    std::string getName() {
        return itemName;
    }
    void setName(std::string name) {
        this->itemName = name;
        itemlist.push_back(itemName);
    }
    double getPrice() {
        return price;
    }
    void setPrice(double price) {
        this->price = price;
        pricelist.push_back(price);
    }
    double getnumberofItem() {
        return numberofItem;
    }
    void setnumberofItem(int numberofItem) {
        this->numberofItem = numberofItem;
        stock.push_back(numberofItem);
    }
    void setAll(std::string, double, int);
    void buyItem(int,std::string);
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
    pricelist.push_back(price);
    this->numberofItem = numberofItem;
    stock.push_back(numberofItem);
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

void shopManagment::buyItem(int number, std::string item) {
    std::vector<std::string>::iterator index;
    index = std::find(itemlist.begin(), itemlist.end(), item);
    if (index != itemlist.end()) {
        this->stock[index - itemlist.begin()] = stock[index - itemlist.begin()] - number;
    }
    
}


void shopManagment::showItem() {  
    for (int i = 0; i< itemlist.size(); i++) {
        std::cout << this->itemlist[i] << " is " << this->pricelist[i] << " , there is " << this->stock[i] << " left.\n";
    }
}










int main()
{
    shopManagment techStore;
    techStore.setAll("computer", 1500, 100);
    techStore.setAll("CPU", 500, 10);
    techStore.setAll("RAM", 100, 150);
    techStore.setAll("GPU", 1000, 20);

    techStore.buyItem(5, "computer");
    techStore.showItem();



    
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
