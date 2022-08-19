#include "diff.h"
#include <memory>

using namespace std;

int main(){
    diff d1{1,0,8,0};
    diff d2{1,8,6,1};
    diff d3{1,18,8,2};
    diff d4{1,4,8,3};
  
    diff_list list("sample");
    list.append_diff(d1);
    
    return 0;
}
