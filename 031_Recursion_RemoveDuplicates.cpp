string removeDuplicates(string str ,string newstr , int index, bool* arr){
    if(index==str.length())
    return newstr;

 int i = str[index]-'a';
 if(arr[i]==false){
    newstr+=str[index];
    arr[i] = true;
 }
 return removeDuplicates(str ,newstr , index+1, arr);
}
