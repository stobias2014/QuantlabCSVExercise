//
//  InputShare.hpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/21/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#ifndef InputShare_hpp
#define InputShare_hpp

#include <string>

using namespace std;

class InputShare {
private:
    long int timeStamp;
    string symbol;
    int quantity;
    int price;
public:
    InputShare();
    long int getTimeStamp();
    void setTimeStamp(long int timeStamp);
    string getSymbol();
    void setSymbol(string symbol);
    int getQuantity();
    void setQuantity(int quantity);
    int getPrice();
    void setPrice(int price);
    ~InputShare();
};

#endif /* InputShare_hpp */
