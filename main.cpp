#include <iostream>

using namespace std;

int main(){
    for (int i = 100; i < 1000; i++) {
        long temp_i = i;
        long jam = 0;

        for(int count_digit = 0; count_digit < 3;count_digit++)
            {
            int digit = temp_i % 10;
            long factor_digit = 1;

            for(long c_digit = 1; c_digit <= digit; c_digit++ )
            {
                factor_digit = c_digit  * factor_digit;

            }
            jam = jam + factor_digit;
            if (jam == i)
            {
                cout << jam << endl;
            }
            temp_i = temp_i / 10;
           }


    }

}
