// Forward declaration of isBadVersion API.

#include <iostream>
#include<climits>
class Solution {
private:
    int _minBadVersion=  INT_MAX;
    int _maxGoogVersion=0;


    bool isBadVersion(int version){
        return version >= 2147483647;
    }
public:
    int firstBadVersion(int n) {
        std::cout<<_maxGoogVersion<<"xxx"<<_minBadVersion<<"@@@"<<n<<std::endl;

        if(_maxGoogVersion == _minBadVersion){
            return _minBadVersion;
        }
        if(n==_minBadVersion) {
            return _minBadVersion;
        }

        if(isBadVersion(n)) {
            _minBadVersion = (n<_minBadVersion)?n:_minBadVersion;

        } else {
            _maxGoogVersion = (n>_maxGoogVersion)?n:_maxGoogVersion;

        }
        long mid = (long(_minBadVersion)+1+long(_maxGoogVersion))/2;
        std::cout<<"mid"<<_minBadVersion<<std::endl;
        return firstBadVersion(int(mid));

    }
};
