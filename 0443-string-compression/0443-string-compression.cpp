class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1, index = 0;

        for (int i = 0; i < chars.size(); i++) {
            if (count == 1) {
                chars[index++] = chars[i];
            }
            if (i != chars.size() - 1 && chars[i] == chars[i + 1])
                count++;

            else {
                if (count > 1) {
                    int st = index;
                    while (count != 0) {
                        int rem = count % 10;
                        chars[index++] = rem + '0';
                        count /= 10;
                    }
                    reverse(chars.begin() + st, chars.begin() + index);
                }
                count = 1;
            }
        }
        return index;
    }
};