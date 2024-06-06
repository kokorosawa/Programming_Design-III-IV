#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 0;
    while(cin >> n){
        if(n == 0){
            break;
        }
        double v[1000];
        double sum = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum += v[i];
        }
        double avg = round((sum / n) * 100 )/ 100;
        double ans_up = 0;
        double ans_down = 0;
        for(int i = 0; i < n; i++){
            if(v[i] > avg){
                ans_up += v[i] - avg;
            }else{
                ans_down += avg - v[i];
            }
        }

        double ans = min(ans_up, ans_down);
        if (ans == 0) ans = (ans_up + ans_down) / 2;
        cout << "$" << fixed << setprecision(2) << ans << endl;
    }
}