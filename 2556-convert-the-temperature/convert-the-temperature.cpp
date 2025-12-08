class Solution {
public:
double r(double value){
    double factor=pow(10,5);
    return ceil(value*factor)/factor;
}
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double k=celsius+273.15;
        double f=celsius*1.80+32;
        r(k);
        r(f);
        ans.push_back(k);
        ans.push_back(f);
        return ans;
        
    }
};