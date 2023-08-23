vector<int> getSecondOrderElements(int n, vector<int> a) {
    int f=INT_MIN;
    int s=0;
    int fs=INT_MAX;
    int ss=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=f)
        {
          s=f;
          f=a[i];
        }
        else if(a[i]>s)
        {
            s=a[i];
        }
        if(a[i]<=fs)
        {
            ss=fs;
            fs=a[i];
        }
        else if(a[i]<ss)
        {
            ss=a[i];
        }
    }
    return {s, ss};
}
