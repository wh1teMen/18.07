#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<type_traits>
#include<string>
using namespace std;

struct Coord
{
	int a;
	int b;
	bool operator==(const Coord& other)const {
		return a == other.a&& b == other.b;
	}

};
namespace std {
	template<>
	struct less<Coord>
	{
		bool operator()(const Coord& a, const Coord& b)const {
			return (a.a < b.b)&& (a.b < b.b);
		}

	};

	template<>
	struct hash<Coord> {
		size_t operator()(const Coord& coord)const {
			return hash<int>()((coord.a)<<1)^
				hash<int>()(coord.b);
		}

	};
}
class unit {
public:
	unit(){}
	unit(string name, string type, int size) {
		name_ = name;
		type_ = type;
		size_ = size;
	}
	void set_name(string name) {
		name_ = name;
	}
	string get_name() {
		return name_;
	}
	void set_type(string type) {
		type_ = type;
	}
	string get_type() {
		return type_;
	}
	void set_size(int size) {
		size_ = size;
	}
	int get_size() {
		return size_;
	}
private:
	string name_;
	string type_;
	int size_;
};




int main() {
	system("chcp 1251>null");
	//set<int>set{ 1,12,4,3,54,345,34 };
	/*for (const auto& el : set) {
		cout << el << "\n";
	}*/
	//for (const auto& el : set) {
	//	cout << el << "\n";
	//}
	//std::unordered_set <Coord> set_{
	//		{2,5},
	//		{4,6},
	//		{1,4},
	//		{9,1},
	//		{11,53}
	//};
	//less<Coord>()(Coord(), Coord());
	////set_.insert({ 3,6 });
	////set_.erase({4, 6});
	//
	//for (auto&& [a, b] : set_) {
	//	cout << a << "\t" << b << "\n";
	//}
	//vector<Coord> vec(set.begin(), set.end());


	unordered_set<unit>one("Имя", "Воин", 21);

	unordered_set<unit>two("Имя2", "Стрелок", 43);
	

	




	system("pause>nul");
	return 0;
}