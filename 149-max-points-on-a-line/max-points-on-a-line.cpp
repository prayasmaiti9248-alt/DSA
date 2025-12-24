class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int total;
        int m=2;
        if(points.size()<=2){
            return points.size();
        }
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                total=2;
                for(int k=0;k<points.size();k++){
                    if(j!=k && i!=k){
                        if(((points[j][1]-points[i][1])*(points[k][0]-points[i][0]))==((points[k][1]-points[i][1])*(points[j][0]-points[i][0])))
                        total++;
                    }
                }
                m=max(m,total);
            }
        }
        return m;
    }
};