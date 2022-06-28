class Solution {
public:
    int maxProduct(vector<int>& nums) {
	auto m1 = 0, m2 = 0;
	for (auto n: nums) {
		if (n > m1)
            m2 = exchange(m1, n);
		else
			m2 = max(m2, n);
	}
	return (m1 - 1) * (m2 - 1);
    }
};

/*   
        priority_queue <int,vector<int>,greater<int>> minh;
        int n=nums.size(),product=1;
        for(int i=0;i<n;i++){
            minh.push(nums[i]);
            if(minh.size()>2){
                minh.pop();
            }
        }
        while(!minh.empty()){
            product=product*(minh.top()-1);
            minh.pop();
        }
        return product;
*/
