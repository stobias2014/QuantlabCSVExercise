//
//  InputShare.cpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/21/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#include "InputShare.hpp"
#include <iostream>

InputShare::InputShare() {
    //cout << "obj created" << endl;
}

long int InputShare::getTimeStamp() {
    return timeStamp;
}

void InputShare::setTimeStamp(long int m_timeStamp) {
    timeStamp = m_timeStamp;
}

string InputShare::getSymbol() {
    return symbol;
}

void InputShare::setSymbol(string m_symbol) {
    symbol = m_symbol;
}

int InputShare::getQuantity() {
    return quantity;
}

void InputShare::setQuantity(int m_quantity) {
    quantity = m_quantity;
}

int InputShare::getPrice() {
    return quantity;
}

void InputShare::setPrice(int m_price) {
    price = m_price;
}

InputShare::~InputShare() {
    //cout << "object destroyed" << endl;
}
