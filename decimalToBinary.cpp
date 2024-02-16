#include <iostream>
#include <math.h>
using namespace std;
int main(){
    //decimal to binary
    int n;
    cin>>n;
    int ans =0;
    int i =0;
    while(n!=0){
        int digit= n & 1;

         ans=(digit * pow (10, i))+ ans;

        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
    //binary to decimal
    int main(){
	int n;
	cin >> n;
	int i=0; ans=0;
	while(n!=0){
		int digit = n%10;
		if(digit==1){
		ans = ans+ pow(2,i);
		}
		n=n/10;
		i++;
	}
	cout<< ans <<endl;
}
//Negative to decimal
}