// EXAMPLES PROVIDED BY CLAUDIA NALON
// EXAMPLE 1
set subsum(set s, int target, int cur_sum, set ans) {
    if(target == cur_sum) return ans;
    else if (s == EMPTY) return EMPTY;
    else {
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
}

//EXAMPLE 2

int main() {
    set s;
    s = EMPTY;

    add(1 in s);
    add(2 in s);
    add(5 in s);
    add(8 in s);

    add(1 in add(2 in add(5 in add(8 in s))));

    set possibleSums;
    possibleSums = EMPTY;
    int x;
    
    forall (x in s) {
        set sumsWithX;   
        sumsWithX = EMPTY;
        int val;
        forall (val in possibleSums) add((x + val) in sumsWithX);
        forall (val in sumsWithX) add (val in possibleSums);
        if (13 in possibleSums) writeln('y'); else writeln('n');
    }
}


// EXAMPLE 3

set add_int(set s) {
    return add(2 in add(1 in s));
    // {1,2}
}

set add_float(set s) {
    return add(5.4 in add(1.5 in s));
}

set add_set(set s) {
    set newset;
    newset = EMPTY;
    return add(add_int(newset) in s);
    //{{1,2}}
}

int main() {
    set s;
    s = EMPTY;

    add_set(s);

    // s = {{1,2}}
    elem el;
    
    exists(el in s);
    // el is the set {1,2}
    
    add_float(s);
    // {1.5,5.4,{1,2}}

    exists(el in s);
    // el can be any of 1.5, 5.4 or {1,2}
   
    add_int(s);
    // add_int always returns {1,2} thus the set remains unchanged
    // {1.5,5.4,{1,2}}

    int acc; float accf;
    acc = 0; accf = 0;
    elem x;
    
    forall(x in s) {
        acc = acc + x; // when x is {1,2} the behaviour is undefined; this may raise an exception at runtime
    accf = accf + x;
    }

    // this fixes the above
    
    forall(x in s) {
        if (!is_set(x)) {
           acc = acc + x;
       accf = accf + x;
    }   
    }

   // acc is 6; accf is 6.9

    return 0;
}

// EXAMPLE 4

set copy_set(set s) {
    set ans;
    ans = EMPTY;
    forall(x in s) add(x in ans);
    return ans;
}

set succ(set n) {
    set next;
    next = copy_set(n);
    return add(n in next);
}

int main() {
    set zero; set one; set two; set three;
   
    zero = EMPTY;
    one = succ(zero);
    two = succ(one);
    three = succ(two);
}