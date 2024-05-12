int strStr(char* haystack, char* needle) {
    int length_haystack = strlen(haystack);
    int length_needle = strlen(needle);
    int index=0;
    int count=0;
    for (int i=0; i<length_haystack; i++) {
        for (int j=0; j<length_needle; j++) {
            if (needle[j] == haystack[i]) {
                i++;
                count++;
                index = i-count;
                if (j == length_needle-1) {
                    return index;
                    break;
                }
            }else {
                if (j <= length_needle-1 && i < length_haystack-1) {
                    i = i-count;
                    count = 0;
                    break;  
                }else {
                    return -1;
                }

            } 
        }
    }
    return -2;
}