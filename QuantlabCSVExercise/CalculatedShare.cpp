//
//  CalculatedShare.cpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/21/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#include "CalculatedShare.hpp"
#include <string>

using namespace std;

CalculatedShare::CalculatedShare() {}

void CalculatedShare::setSymbol(string m_symbol) {
    symbol = m_symbol;
}

string CalculatedShare::getSymbol() {
    return symbol;
}

void CalculatedShare::setMaxTimeStamp(long int m_maxTimeStamp) {
    maxTimeStamp = m_maxTimeStamp;
}

long int CalculatedShare::getMaxTimeStamp() {
    return maxTimeStamp;
}

void CalculatedShare::setTotalVolume(int m_totalVolume) {
    totalVolume = m_totalVolume;
}

int CalculatedShare::getTotalVolume() {
    return totalVolume;
}

void CalculatedShare::setMaxTradePrice(int m_maxTradePrice) {
    maxTradePrice = m_maxTradePrice;
}

int CalculatedShare::getMaxTradePrice() {
    return maxTradePrice;
}

void CalculatedShare::setWeighedAvgPrice(int m_weighedAvgPrice) {
    weighedAvgPrice = m_weighedAvgPrice;
}

int CalculatedShare::getWeighedAvgPrice() {
    return weighedAvgPrice;
}

CalculatedShare::~CalculatedShare() {}
