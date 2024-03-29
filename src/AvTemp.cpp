#include <iostream>
#include <vector>
using namespace std;

int Avr (const vector<int>& v)
{
	int64_t sum = 0;
	for (auto i: v)
	{
		sum += i;
	}
	int av = sum / static_cast<int> (v.size());
	return av;
}

void Output (const vector<int>& v)
{
	vector<int> res;
	int av = Avr(v);
	for (unsigned i = 0; i < v.size(); i++)
	{
		if (v[i] > av)
		{
			res.push_back(i);
		}
	}
	cout << res.size() << endl;
	for (auto i : res)
	{
		cout << i << " ";
	}
}

int main() {
	int K;
	cin >> K;
	vector<int> t;
	t.assign(K, 0);
	for (auto& i : t)
	{
		cin >> i;
	}
	Output(t);
	return 0;
}
