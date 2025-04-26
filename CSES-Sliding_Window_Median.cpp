#include <iostream>
#include <set>
#include <iomanip>
using namespace std;

int main() {
    set<int> s;
    set<int>::iterator it = s.end(); // 初始化為結尾
    int x;

    while (cin >> x) {
        if (s.empty()) {
            s.insert(x);
            it = s.begin();
        } else {
            s.insert(x);
            // 插入前集合大小（插入後為 size+1）
            if (x < *it) {
                if (s.size() % 2 == 1) --it; // 新增前是偶數，新增後是奇數，要往左移
            } else {
                if (s.size() % 2 == 0) ++it; // 新增前是奇數，新增後是偶數，要往右移
            }
        }

        // 輸出中位數
        if (s.size() % 2 == 1) {
            cout << fixed << setprecision(6) << *it * 1.0 << endl;
        } else {
            auto next_it = next(it);
            cout << fixed << setprecision(6) << (*it + *next_it) / 2.0 << endl;
        }
    }

    return 0;
}
