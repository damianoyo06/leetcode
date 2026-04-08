class Solution {
public:
    int pivotInteger(int n) {
      
        int sum = 0;
        for(int i=0; i<=n; i++){
            sum += i;
        }
       
        int pivot = sqrt(sum);

        if(pivot * pivot == sum){
            return pivot;
        } else {
            return -1;
        }


    }
};