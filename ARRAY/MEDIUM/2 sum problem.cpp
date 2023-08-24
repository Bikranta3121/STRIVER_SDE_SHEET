string read(int n, vector<int> book, int target)
{
    sort(book.begin(),book.end());
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if((book[low]+book[high]) == target) return "YES";
        if((book[low]+book[high])>target)
          high--;
        else
          low++;  
    }
    return "NO";
}
