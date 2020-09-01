#include <vector>
#include <iostream>
#include <math.h>

class Stats {
    public: 
    
    double Average;
    double Max;
    double Min;
    
    
    Stats(){
        Average = nan("null");
        Max = nan("null");
        Min = nan("null");
    }
    
};


namespace Statistics {
    Stats ComputeStatistics(const std::vector<double>& );
    Stats FindStats(const std::vector<double>&);
    
    Stats FindAverage(const std::vector<double>&);
    Stats FindMax(const std::vector<double>&);
    Stats FindMin(const std::vector<double>&);
    
}
