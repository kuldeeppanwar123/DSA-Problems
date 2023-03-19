void helper(queue<int>&q){
    if(q.empty())return;
    int x = q.front();
    q.pop();
    helper(q);
    q.push(x);
}
queue<int> rev(queue<int> q)
{
    // add code here.
    helper(q);
    return q;
}
