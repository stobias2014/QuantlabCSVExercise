//
//  ShareCalculator.cpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/21/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#include "ShareCalculator.hpp"
#include"InputShare.hpp"
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

ShareCalculator::ShareCalculator() {}

int ShareCalculator::findMaxTradePrice(vector<InputShare> sortedShares) {
    int maxValue = 0;
    
    for(InputShare share : sortedShares) {
        maxValue = share.getPrice();
        if(share.getPrice() > maxValue) {
            maxValue = share.getPrice();
        }
    }
    
    return maxValue;
}

int ShareCalculator::findTotalVolume(vector<InputShare> sortedShares) {
    int totalVolume = 0;
    
    for(InputShare share :sortedShares) {
        totalVolume += share.getQuantity();
    }
    
    return totalVolume;
}

int ShareCalculator::findWeighedAveragePrice(vector<InputShare> sortedShares) {
    int weighedAveragePrice = 0;
    int priceTimesShares = 0;
    int totalVolume = 0;
    
    totalVolume = findTotalVolume(sortedShares);
    
    for(InputShare share : sortedShares) {
        priceTimesShares += share.getQuantity() * share.getPrice();
    }
    
    weighedAveragePrice = priceTimesShares / totalVolume;
    
    return weighedAveragePrice;
}

long int ShareCalculator::findMaxTimeStamp(vector<InputShare> sortedShares) {
    
    
    long int maxTimeStamp;
    vector<InputShare>::iterator itShares;
    
    //maxTimeStamp for share sold at one time stamp is zero
    if(sortedShares.size() == 1) {
        maxTimeStamp = 0;
        return maxTimeStamp;
    }
    
    //sort numerically
    sort(sortedShares.begin(), sortedShares.end(), [](InputShare& lhs, InputShare& rhs) {
        return lhs.getTimeStamp() < rhs.getTimeStamp();
    });
    
   
    maxTimeStamp = sortedShares.at(1).getTimeStamp() - sortedShares.at(0).getTimeStamp();
    
    for(itShares = sortedShares.begin(); itShares != sortedShares.end(); itShares++) {
        
        for(vector<InputShare>:: iterator jtShares = sortedShares.begin() + 1; jtShares != sortedShares.end(); jtShares++)
            if(maxTimeStamp < jtShares->getTimeStamp() - itShares->getTimeStamp()) {
                maxTimeStamp = jtShares->getTimeStamp() - itShares->getTimeStamp();
        }
        
    }
    
    return maxTimeStamp;
}


ShareCalculator::~ShareCalculator() {}

