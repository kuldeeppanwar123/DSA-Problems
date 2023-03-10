vector<int> prevGreater(vector<int> arr)
{
  stack<int> st;
  vector<int> ans(arr.size());
  ans[0] = -1;
  st.push(arr[0]);

  for (int i = 1; i < arr.size(); i++)
  {
    while (!st.empty() && st.top() <= arr[i])
      st.pop();
    ans[i] = st.empty() ? -1 : st.top();
    st.push(arr[i]);
  }
  return ans;
}

vector<int> nextGreater(vector<int> arr)
{
  stack<int> st;
  vector<int> ans(arr.size());
  ans[arr.size() - 1] = -1;
  st.push(arr[arr.size() - 1]);

  for (int i = arr.size() - 2; i >= 0; i--)
  {
    while (!st.empty() && st.top() <= arr[i])
      st.pop();
    ans[i] = st.empty() ? -1 : st.top();
    st.push(arr[i]);
  }
  return ans;
}
