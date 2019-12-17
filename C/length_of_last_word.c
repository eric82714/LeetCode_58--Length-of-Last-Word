int lengthOfLastWord(char * s){
    int length = 0;
    bool flag = false;
        
    for(int i = strlen(s)-1; i >= 0; i--){
        if(s[i] != ' '){
            length ++;
            flag = true;
            continue;
        }   
        else{
            if(flag) break;
        }
    }
    return length;
}
