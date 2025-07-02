#include "request_file_handler.h"
#include <fstream>
#include <iostream>

bool RequestFileHandler::addRequestToFile(const Request& request) {
    std::ofstream file("../requests.txt", std::ios::app); 

    if (file.is_open()) {
        file << "#" << request.getItemName() << ","
                    << request.getPrice() << ","
                    << request.getCategory() << ","
                    << request.getQuantity() << std::endl;
        file.close();
        return true;
    } else {
        return false;
    }
}
