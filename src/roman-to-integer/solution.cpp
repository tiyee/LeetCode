class Solution {

private:
  int T(char c){
       switch (c){
                case 'I' : return 1;break;
                case 'V' : return 5;break;
                case 'X' : return 10;break;
                case 'L' : return 50;break;
                case 'C' : return 100;break;
                case 'D' : return 500;break;
                case 'M' : return 1000;break;
            }
            return 0;
  }
public:
    int romanToInt(string s) {
        
        int sum = T(s.back());
        for(int i = s.size() - 2; i >= 0; i--)
            sum +=  (T(s[i]) < T(s[i+1]) ? -1*T(s[i]) : T(s[i]));
        return sum;
    }
};