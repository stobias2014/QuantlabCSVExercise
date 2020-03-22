//
//  ShareCalculator.hpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/21/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#ifndef ShareCalculator_hpp
#define ShareCalculator_hpp

#include <iostream>
#include <vector>
#include <string>
#include "InputShare.hpp"

class ShareCalculator {
    
public:
    ShareCalculator();
    int findMaxTradePrice(vector<InputShare> sortedShares);
    int findTotalVolume(vector<InputShare> sortedShares);
    long int findMaxTimeStamp(vector<InputShare> sortedShares);
    int findWeighedAveragePrice(vector<InputShare> sortedShares);
    ~ShareCalculator();
};

#endif /* ShareCalculator_hpp */
