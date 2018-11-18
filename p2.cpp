#include <vector>

using namespace std;

vector<int> merge(const vector<int>& a, const vector<int>& b)
{
vector<int> p;
vector<int> s;
p = a;
s = b;
vector<int> r;
int i , m = 0, n = 0;

i = (p[m] >= s[n]) ? s[n] : p[m];

if (i == s[0]) {
++n;
} else {
++m;
}

r[0] = i;

for (int j = 1; j < (p.size() + s.size()); j++) {
if (p[m] >= r[j - 1]) {
i = p[m];
}

if (s[n] >= r[j - 1] && s[n] < p[m]) {
i = s[n];
}

if (p[m] == i && m < (p.size() - 1)) {
m++;
} else (s[m] == i && n < (s.size() - 1)) {
n++;
}

r[j] = i;

if (n == (s.size() - 1) && (m == (p.size() - 1))) {
break;
}

}

return r;

}