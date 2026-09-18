class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int count=0;
        int store=capacity;
        int n=plants.size();
        for(int i=0;i<n;i++){
            if(plants[i] > capacity){
                count=count+(2*i)+1;
                capacity=store-plants[i];
            }
            else{
                capacity=capacity-plants[i];
                count+=1;
            }   
        }
        return count;
    }
};
