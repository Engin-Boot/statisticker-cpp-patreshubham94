#include "stats.h"
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

Stats Statistics::ComputeStatistics(const std::vector<double>& V ) {
    //Implement statistics here.
  if(V.size() == 0) {
        Stats NoNumber;
      return NoNumber;
  }  
    
   return FindStats(V);
}

Stats FindStats(const std::vector<double>& V){
     Stats result;
    result.Average = FindAverage(V);
    result.Max     = FindMax(V);
    result.Min     = FindMin(V);
    
    return result;
}

double FindAverage(const std::vector<double>&V) {
    double avg = 0;
    avg = accumulate(V.begin(), V.end(), 0);
    avg = avg/V.size();
    return avg;
}

double FindMax(const std::vector<double>&V){
    double max = 0;
    max = *max_element(V.begin(), V.end());
    return max;
}

double FindMin(const std::vector<double>&V){
    double min = 0;
    min = *min_element(V.begin(), V.end());
    return min;
}
