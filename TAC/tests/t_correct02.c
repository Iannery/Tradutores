set scope_zero_num1_look_at_this_beauty_of_an_ellipsis;
int test_scopes(int param1, float param2, set param3){
    int shouldbe2;
    if(shouldbe2){
        float shouldbe3;
    }
    int also1;
    {
        int shouldbe4;
        for(shouldbe4 = 0; shouldbe4 < 1; shouldbe4 = shouldbe4 + 1){
            float this_is_5;
        }
        float also3;
    }
    float wow_also2;
    return 1.5;
}
set scope_zero_num2_look_at_this_beauty_of_an_ellipsis;
set scope_zero_num3_look_at_this_beauty_of_an_ellipsis;
int main(){
    set b;
    float a;
    a = test_scopes(10, 10.1, b);
    return 0;
}