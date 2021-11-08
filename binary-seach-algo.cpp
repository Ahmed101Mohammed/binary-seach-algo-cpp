int binarysearch(vector <int> arr, int x)
{
    int size_o = arr.size();
    int size = size_o;
    int half = 2;
    int start = (size % 2 == 0)? (size / half) : ((size + 1) / half) ;
    int add;
    int pre_start;
    int sum = 0;
    int count = 0;
    int pre_sum;
    
    while (true)
    {
       
        pre_start = start;
        
        if (start < 0) 
        {
            start =  0;
        }
        else if (start > size_o - 1)
        {
            start = size_o - 1;
        }

        if (arr[start] == x)
        {
            cout << "\n";
            return start;
        }
        else if(arr[start] > x)
        {
            
            size -=  start;
            add = size / 2 > 0 ? size / 2 : 1;
            start -= add;
        }
        else if(arr[start] < x)
        {
    
            size -=  start;
            add = size / 2 > 0 ? size / 2 : 1;
            start += add;
        }

        if (pre_start - start == 1 || start - pre_start == 1)
        {
            pre_sum = sum;
            sum = pre_start + start;
            if (pre_sum == sum)
            {
                count += 1;
            }
        }
        if (count == 2)
        {
            return -1;
        }
    }    
    
}

int main() 
{    
    vector <int> a = {1,4,7,9,22,111,223,500,890,1200,7505}; 
    cout << binarysearch(a,1209);
}
