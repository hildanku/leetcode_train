int lengthOfLongestSubstring(char* s) {
    int first = 0;
    int max = 0;

   int current_chars[255] = {0};
   
    for (int i = 0; s[i] != '\0'; i++) {

        while (current_chars[s[i]] > 0) {
            current_chars[s[first]]--; 
            first++;
        }
        current_chars[s[i]]++;
        // max = max(max, i - first + 1);
        if (i - first + 1 > max) {
            max = i - first + 1;
        }
    }
    return max;
}