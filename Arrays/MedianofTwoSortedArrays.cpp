class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int tot_len = nums1.size()+nums2.size();
        if(  tot_len %2==0)
        {   cout<<tot_len/2+1;
            return (findkth(tot_len/2+1,nums1,nums2,0,0)+findkth(tot_len/2,nums1,nums2,0,0))/2.0;
        }
        else return findkth(tot_len/2+1,nums1,nums2,0,0);
        
        
    }
    int findkth(int k, vector<int>& nums1, vector<int>& nums2, int start1, int start2)
    {
        if(start1>=nums1.size())
        return nums2[start2+k-1];
        if(start2>=nums2.size())
        return nums1[start1+k-1];
        if(k==1)
        {
            return min(nums1[start1],nums2[start2]);
        }
        int mid1=start1+k/2-1;
        int mid2 =start2+k/2-1;
        int v1 = mid1<nums1.size()?nums1[mid1]:INT_MAX;
        int v2 = mid2<nums2.size()?nums2[mid2]:INT_MAX;
        if(v1<v2)
        {
            return findkth(k-k/2,nums1,nums2,mid1+1,start2);
        }
        else return findkth(k-k/2,nums1,nums2,start1,mid2+1);
        
    }
};