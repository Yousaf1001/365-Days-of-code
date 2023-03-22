void sortedAccordingPosition(stack<int> & sortStack,int temp)
{
    if(sortStack.empty() || sortStack.top()<=temp)
    {
        sortStack.push(temp);
        return;
    }
    int temporary=sortStack.top();
    sortStack.pop();
    sortedAccordingPosition(sortStack,temp);
    sortStack.push(temporary);
}
void SortedStack :: sort()
{
   if(s.empty())
       return ;
    int temp=s.top();
    s.pop();
    sort();
    sortedAccordingPosition(s,temp);
}
