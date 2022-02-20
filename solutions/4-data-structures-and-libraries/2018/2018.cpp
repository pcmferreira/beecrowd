#include <bits/stdc++.h>

using namespace std;

bool country_comp(const pair<string, int *>& lhs, const pair<string, int *> rhs) {
    for (int i = 0; i < 3; ++i) {
        if (lhs.second[i] != rhs.second[i])
            return lhs.second[i] > rhs.second[i];
    }
    return lhs.first < rhs.first;
}

int main() {
    map<string, int *> countries_medals;

    string modality;
    while (getline(cin, modality)) {
        for (int i = 0; i < 3; ++i) {
            string name; getline(cin, name);
            auto it = countries_medals.find(name);
            if (it != countries_medals.end()) {
                ++(it->second[i]);
            } else {
                int *p = (int *) calloc(3, sizeof (int));
                p[i] = 1;
                countries_medals[name] = p;
            }
        }
    }

    vector<pair<string, int *>> countries;
    for (const auto& country : countries_medals) {
        countries.push_back(country);
    }

    sort(countries.begin(), countries.end(), country_comp);

    cout << "Quadro de Medalhas\n";
    for (const auto& [name, medals] : countries) {
        cout << name << ' ' << medals[0] << ' ' << medals[1] << ' ' << medals[2] << '\n';
        free(medals);
    }

    return 0;
}
