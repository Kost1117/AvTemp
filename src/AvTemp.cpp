#include <iostream>
#include <vector>
using namespace std;

int Avr (vector<int>& v)
{
	int sum = 0;
	for (auto i: v)
	{
		sum += i;
	}
	int av = sum / static_cast<int> (v.size());
	return av;
}

void Output (vector<int> v)
{
	vector<int> res;
	for (int i = 0; i < static_cast<int> (v.size()); i++)
	{
		if (v[i] > Avr(v))
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
