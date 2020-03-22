//
//  CalculatedShare.hpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/21/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#ifndef CalculatedShare_hpp
#define CalculatedShare_hpp

#include <stdio.h>
#include <string>

using namespace std;

class CalculatedShare {
private:
    string symbol;
    long int maxTimeStamp;
    int totalVolume;
    int maxTradePrice;
    int weighedAvgPrice;
public:
    CalculatedShare();
    void setSymbol(string m_symbol);
    string getSymbol();
    void setMaxTimeStamp(long int m_maxTimeStamp);
    long int getMaxTimeStamp();
    void setTotalVolume(int m_totalVolume);
    int getTotalVolume();
    void setMaxTradePrice(int m_maxTradePrice);
    int getMaxTradePrice();
    void setWeighedAvgPrice(int m_weighedAvgPrice);
    int getWeighedAvgPrice();
    ~CalculatedShare();
};

#endif /* CalculatedShare_hpp */
