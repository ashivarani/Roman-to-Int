int romanToInt(char* s) {
    int result = 0;
    int map[26] = {0};
    map['I'-'A'] = 1;
    map['V'-'A'] = 5;
    map['X'-'A'] = 10;
    map['L'-'A'] = 50;
    map['C'-'A'] = 100;
    map['D'-'A'] = 500;
    map['M'-'A'] = 1000;
    int i = 0;
    while(s[i]) {
        int current = map[s[i] - 'A'];
        int next = s[i + 1] ? map[s[i + 1]  - 'A']:0;
        if( next > current) {
            result-=current;
        } else {
            result+=current;
        }
        i++;
    }
    return result;
}
