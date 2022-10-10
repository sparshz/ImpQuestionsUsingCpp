int pivot(vector<int>& arr , int n)
{
        
    
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
             
        }
        
        mid=s+(e-s)/2;  
            
    }
    return s;
}
    
int binarysearch(vector<int>& nums , int s , int e ,int k)
{
    int start=s,end=e;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(nums[mid]==k)
        {
            return mid;
        }
        
        else if(nums[mid]<k)
        {
            start=mid+1;
        }
        
        else
        {
            end=mid-1;
        }
        
        mid=start+(end-start)/2;
    }
        
    return -1;
}
    
    
    
    int search(vector<int>& nums, int target)
    {
        int n=nums.size();
        int p=pivot(nums,n);
        
        if(target>=nums[p] && target<= nums[n-1])
        {
             return binarysearch(nums , p , n-1 ,target);
        }
        
        else
        {
            return binarysearch(nums , 0 , p-1 ,target);
        }
        
    }
