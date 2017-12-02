int Solution::maxSubArray(const vector<int> &A) {
    int max_sofar = INT_MIN;
    int curr = 0;
    for( int i =0;i<A.size();i++){
        curr = curr + A[i];
        if(max_sofar < curr)
        max_sofar = curr;
        if( curr < 0 )
        curr =0;
       
        
    }
    return max_sofar;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}