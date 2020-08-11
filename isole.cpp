#include <bits/stdc++.h>

int N, M, P, temp, temp2, index;

int main() {
    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    cin >> N >> M >> P;
    vector <vector<int> > possibili_visite(N);
    vector <bool> visitati(N,false);
    index=N;

    for(i=0;i<M;i++)
    {
        cin >> temp >> temp2;
        possibili_visite[temp].push_back(temp2);
        possibili_visite[temp2].push_back(temp);
    }
    while(index != 0)
    {

    }
    cout << endl;
    fclose(fr);
    fclose(fw);
    return 0;
}
