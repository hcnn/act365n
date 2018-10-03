#include "act365n.h"

double act365n(int y1, int m1, int d1, 
               int y2, int m2, int d2)
{
    int diff_days = date_to_jd(y2, m2, d2);
    diff_days -= date_to_jd(y1, m1, d1);

    if( diff_days < 0){
        fprintf(stderr, "Newer date y2-m2-d2 is older than previous date y1-m1-d1."); 
        exit(-1); 
    }else if(diff_days == 0){
        return 0e0;
    }else{
        int iLeapYears = 0;

        if( isaleapyear(y1) && (m1 <= 2) ){
            iLeapYears += 1;
        }
        
        if( (y1 != y2)  &&  isaleapyear(y2)  &&  (m2 >= 3) ){
            iLeapYears += 1;
        }
        
        if( (y1+1) < y2 ){
            int now = (y1 + 1);
            while( now < y2 ){
                if( isaleapyear(now) ){
                    iLeapYears += 1;
                }
                now++;
            }
        }
        
        diff_days -= iLeapYears;
        
        if(diff_days <= 0){
            return 0e0;
        }
        
        return (double)(diff_days) / 365e0;
    }
}

