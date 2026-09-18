class Solution {
public:

    int doCalc(char op, int a, int b) {
        switch(op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b; 
            case '/': return a / b; 
        }

        return 0;
    }
    
    int evalRPN(vector<string>& tokens) {

        stack<int> calc;
        string ops = "+-*/";
        int a, b;

        for(string tok: tokens) {

           if(ops.contains(tok)) {
            
              b = calc.top(); 
              calc.pop();

              a = calc.top(); 
              calc.pop();

              calc.push(doCalc(tok[0], a, b));        

              continue; 
           } 

            calc.push(stoi(tok));

        }

        return calc.top();

    }
};
