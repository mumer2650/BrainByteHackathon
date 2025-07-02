#ifndef REQUEST_H
#define REQUEST_H
#include <string>

class Request {
private:
    std::string itemName;
    double price;
    std::string category;
    int quantity;

public:
    Request();
    Request(std::string itemName, double price, std::string category, int quantity);

    void setItemName(std::string name);
    void setPrice(double price);
    void setCategory(std::string category);
    void setQuantity(int quantity);

    std::string getItemName() const;
    double getPrice() const;
    std::string getCategory() const;
    int getQuantity() const;

    bool addRequestToFile();
};

#endif
