int firstUniqChar(char * s){
    int* map = calloc(26, sizeof(int));
        
    for (int i = 0; i < strlen(s); i++) map[s[i]-'a'] ++;
        
    for (int i = 0; i < strlen(s); i++) {
        if(map[s[i]-'a'] == 1) return i;
    }
        
    return -1;
}
