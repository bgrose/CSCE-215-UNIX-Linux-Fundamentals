#define LAST	"GROSE"
#define MI	"P."
#define FIRST	"BRADLEY"

class name {

	private:
	string first;
	string middle;
	string last;
	
	public:
	void SetFirst(string str);
	void GetFirst(string str);
	
	void SetMiddle(string str);
	void GetMiddle(string str);
	
	void SetLast(string str);
	void GetLast(string str);

	void PrintLast();
	void PrintMiddle();
	void PrintFirst();
	
};

