#include <iostream>
using namespace std;
  
int main(){
    float wt_pig = 4.0;
    float wt_sheep = 3.5;
    float total_wt = 36;

    for (int num_pigs = 0; num_pigs * wt_pig <= total_wt;num_pigs++){
        float remain_wt = total_wt - num_pigs * wt_pig;
        int num_sheeps = remain_wt/ wt_sheep;
        remain_wt -= num_sheeps * wt_sheep;

        if (remain_wt == 0)
            cout << num_pigs << "*" << wt_pig << "+" << num_sheeps << "*" << wt_sheep << "=" << total_wt << '\n';


    }
   return 0; 

}
