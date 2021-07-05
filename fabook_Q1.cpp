#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    ifstream in ("travel_restrictions_input.txt");
    ofstream out ("travel_restrictions_sample_output.txt");
    int T;
    in >> T;

    int N;
    string I, O;
    for (int tc = 1; tc <= T; ++tc) {
        in >> N;
        in >> I >> O;

        vector<string> allowed(N);
        out << "Case #" << tc << ":" << endl;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (i == j)
                    allowed[i].push_back('Y');
                else if (i < j) {
                    if (O[i] == 'Y' && I[j] == 'Y' && allowed[i][j-1] == 'Y' && O[j-1] == 'Y')
                        allowed[i].push_back('Y');
                    else
                        allowed[i].push_back('N');
                } else {
                    if (O[i] == 'Y' && I[i-1] == 'Y' && allowed[i-1][j] == 'Y')
                        allowed[i].push_back('Y');
                    else
                        allowed[i].push_back('N');
                }
            }
            out << allowed[i] << endl;
        }
    }
    return 0;
}