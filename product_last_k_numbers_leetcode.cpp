class ProductOfNumbers {
public:
    vector<int>result;
    int product =1;
    ProductOfNumbers() {
        result.push_back(1);
    }
    
    void add(int num) {
      if(num==0)
            result.erase(result.begin()+1,result.end());
      else
        {
            result.push_back(result.back()*num);
        }
    }
    
    int getProduct(int k) 
    {
        int n=result.size();
        if(k>=n)
             return 0;
         return result.back()/result[n-k-1];
    }
    //return result1;
};