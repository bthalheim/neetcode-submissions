class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

       stack<int> buffer;
       vector<int> res(temperatures.size()); 

       for(int i = 0; i < temperatures.size(); i++) {

           if(buffer.empty()) {
               buffer.push(i);
               continue;
           }

           while(!buffer.empty() &&
                 temperatures[buffer.top()] < temperatures[i]) {

                 res[buffer.top()] = i - buffer.top(); 
                 buffer.pop();
           }

           buffer.push(i);

       }

       return res;

    }

};
