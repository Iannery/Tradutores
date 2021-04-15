set scope_zero_num1_look_at_this_beauty_of_an_ellipsis;
int test_scopes(int param1, float param2, set param3){
    int shouldbe1;
    if(shouldbe1){
        float shouldbe2;
    }
    int also1;
    {
        set shouldbe2;
        for(shouldbe2 = 0; shouldbe2 < 1; shouldbe2 = shouldbe2 + 1){
            float this_is_4;
        }
        float also3;
    }
    float wow_also1;
}
set scope_zero_num2_look_at_this_beauty_of_an_ellipsis;
set scope_zero_num3_look_at_this_beauty_of_an_ellipsis;
int main(){
    set b;
    float a;
    a = test_scopes(10, 10.1, b);
    return 0;
}