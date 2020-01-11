#include <iostream>
using namespace std;

void check_sum(int arr[], int n, int sum){
    
    int start = 0, i;
    int curr_sum = arr[0];
    
    for ( i = 1; i <= n; i++ ){
        
      
        while ( curr_sum > sum && start < i-1){
            curr_sum -= arr[start];
            start++;
        }
        
        if (curr_sum == sum ){
            cout<<"start = "<<start<<" end => "<<i<<endl;
            break;
        }
        
        
        if ( i < n )
            curr_sum += arr[i];
        
    }
}

int main() {
	
	int arr[5] = {1,2,3,7,5};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int sum = 12;
	
	check_sum(arr, n, sum);
	
	return 0;
}
