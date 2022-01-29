// Slide the pattern over text one by one and check for a match. If a match is found, then slides by 1 again to check for subsequent matches. 

#include <bits/stdc++.h>
using namespace std;
 
void search(char* pat, char* txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
 
    
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
 
        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            cout << "Pattern found at index "
                 << i << endl;
    }
}
 
int main()
{
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";
    search(pat, txt);
    return 0;
}

// Output

// Pattern found at index 0
// Pattern found at index 9
// Pattern found at index 12
