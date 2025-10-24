class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        int p=INT_MAX;
        int k=INT_MIN;
        int count=0;
        //  int sum=0;

        for(int i=0;i<n;i++){
            if(salary[i]<p){
                p=salary[i];
            }
        }
        for(int j=0;j<n;j++){
            if(salary[j]>k){
                k=salary[j];
            }
        }
        for(int r=0;r<n;r++){
            count+=salary[r];
        }
       double sum=(double)(count-p-k)/(n-2);
        return sum;

    }
};