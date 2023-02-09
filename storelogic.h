#ifndef STORELOGIC_H
#define STORELOGIC_H
#include <string>

using namespace std; 

class Store {
    private: //TODO: Use the Singleton pattern design to only create one instance of the shop in the program. 
        string name; 
        string location;
        int itemCount;

    public:
        Store(string storeName);
        ~Store();

        string GetName();
        string GetLocation();
        void AddNewItem(string item);
        void RemoveItem(string item);
        void SetLocation(string storeLocation);
        void SetName(string storeName);

};

class Item {
    public: 
        string name; 
        string type; 
        int price;
        int reference; 

        Item(string itemName, int itemNumber);
        ~Item();
};

#endif