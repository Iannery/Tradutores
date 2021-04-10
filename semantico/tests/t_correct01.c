// EXAMPLES PROVIDED BY CLAUDIA NALON
// EXAMPLE 1
set subsum(set s, float target, int cur_sum, set ans) {
    int el;
    remove((exists (el in s)) in s);
    if(subsum(s, target, cur_sum, ans)) return ans;
    cur_sum = cur_sum + el;
    add(el in ans);
    if(subsum(s, target, cur_sum, ans)) return ans;
    add(el in s);
    remove (el in s);
    return EMPTY;
}

//EXAMPLE 2

int main() {
    int a;
    int b;
    float c;

    c = b + a;
}