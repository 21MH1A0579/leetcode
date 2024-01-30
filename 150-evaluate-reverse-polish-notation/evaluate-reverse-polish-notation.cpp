class Solution {
public:
    int evaluate(int a, int b,string ch)
    {
        if(ch=="+") return b+a;
        else if(ch=="-") return b-a;
        else if(ch=="*") return b*a;
        else return b/a;
    }
    int evalRPN(vector<string>& tokens) 
    {
    	stack<int>s;
       for(int i=0;i<tokens.size();i++)
       {
       	if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
       	{
       		int a=s.top();
       		s.pop();
       		int b=s.top();
       		s.pop();
       		int res=evaluate(a,b,tokens[i]);
       		s.push(res);
       	}
       	else
       	{
       		s.push(stoi(tokens[i]));
       	}
       }
       return s.top();
        
    }
};