//First Approach using Recursion
class Solution{
public:
    void insert_Bottom(stack<int>&St,int num)
    {
        if(St.empty())
        {
            St.push(num);
            return;
        }
        int secondNumber=St.top();
        St.pop();
        insert_Bottom(St,num);
        St.push(secondNumber);
    }
    void Reverse(stack<int> &St){
        if(St.empty())
            return ;
        int num=St.top();
        St.pop();
        Reverse(St);
        insert_Bottom(St,num);
    }
};

//Second Approach simple using While Loop and assignment method.
class Solution{
public:
    void Reverse(stack<int> &St){
        stack<int>result;
        while(!St.empty()){
            result.push(St.top());
            St.pop();
        }
        St=result;
    }
};