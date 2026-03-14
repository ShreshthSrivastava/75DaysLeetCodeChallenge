

bool isAnagram(char *s, char *t) {

    if (strlen(s) != strlen(t)) {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        int indexS = s[i] - 'a';  
        int indexT = t[i] - 'a'; 

        count[indexS]++;         
        count[indexT]--;         
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}
