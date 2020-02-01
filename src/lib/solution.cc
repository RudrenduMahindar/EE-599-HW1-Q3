#include "solution.h"
#include <algorithm>
using namespace std;

/*std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}*/
double Solution::FindMedian(vector<double> &v1)
{
    int temp;
    double result = 0;
    if(v1.size()==0)
      return -1;
      
    sort(v1.begin(),v1.end());
    temp=v1.size()/2;
    if((v1.size())%2==0)
        {
            //cout<<v1.at(temp-1)<<"\t"<<v1.at(temp)<<endl;
            result=(v1.at(temp-1)+v1.at(temp))/2;
        }
    else
      result=v1.at(temp);

    return result;
}