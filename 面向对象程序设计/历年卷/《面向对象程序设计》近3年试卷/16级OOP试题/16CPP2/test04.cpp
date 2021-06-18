// test04.cpp	课程及学生成绩类
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Course
{
public:
	Course(const string &Id="", const string &Name="", int Credit=0)
		: id(Id), name(Name), credit(Credit) {}
	friend ostream & operator<<(ostream &out, const Course &c)
	{
		out << c.id << '\t' << setw(20)<< left << c.name << '\t' << c.credit;
		return out;
	}
private:
	string id, name;	// 课程编号、课程名称
	int credit;			// 课程的学分
};

class Student
{
public:
	Student(const string &Id="", const string &Name="", int Num=0, const Course *array=NULL);	// ①构造函数
	Student(const Student &s);										// ②拷贝构造函数
	virtual ~Student();												// ③析构函数
	void Set(const string &Id, const string &Name);					// ④设置（修改）学生的学号、姓名
	void Set(int Num, const Course *array, const double *Score);	// ⑤设置（修改）学生所选课程、各课程成绩

	Student & operator=(const Student &s)							// 赋值运算符函数
	{
		if(&s==this) return *this;
		if(course!=NULL) delete [] course;
		if(score!=NULL) delete [] score;
		id = s.id;
		name = s.name;
		if(s.num==0 || s.course==NULL || s.score==NULL)
		{
			num = 0;
			course = NULL;
			score = NULL;
		}
		else
		{
			num = s.num;
			course = new Course[num];
			score = new double[num];
			for(int i=0; i<num; i++)
			{
				course[i] = s.course[i];
				score[i] = s.score[i];
			}
		}
		return *this;
	}
	friend ostream & operator<<(ostream &out, const Student &s)		// 重载输出运算符（友元）函数
	{
		out << "学号: " << s.id << ", 姓名: " << s.name << endl;
		for(int i=0; i<s.num; i++)
			out << s.course[i] << '\t' << s.score[i] << '\t' << endl;
		return out;
	}
private:
	string id, name;	// 学生的学号、姓名
	int num;			// 本学期所选课程数量
	Course *course;		// 具体的课程信息所占资源空间的地址
	double *score;		// 各课程的成绩
};

int Test04()
{
	Course array[] = {Course("08305121", "面向对象程序设计", 5),
					  Course("08305071", "数字逻辑A", 5),
					  Course("08305072", "数字逻辑实验", 1),
					  Course("01034119", "大学物理(3)", 4),
					  Course("03004403", "大学英语D级(4)", 4)};
	double score[] = {90, 85, 80, 75, 80};
	int n = sizeof(array)/sizeof(*array);
	Student Zhang("16123721", "张三", n, array), Li;

	cout << Zhang << '\n' << Li << "===========" << endl;

	Zhang.Set(n, array, score);
	Li.Set("16127890", "李四");
	Li.Set(3, array, score);
	cout << Zhang << '\n' << Li << endl;
	return 0;
}

// ① 构造函数
Student::Student(const string &Id, const string &Name, int Num, const Course *array)
	: id(Id), name(Name), num(Num), course(NULL), score(NULL)
{
	if(num<=0)
	{
		num = 0;
		return;
	}
	course = new Course[num];
	score = new double[num];
	for(int i=0; i<num; i++)
	{
		course[i] = (array!=NULL ? array[i] : Course(""));
		score[i] = 0;
	}
}

// ②拷贝构造函数
Student::Student(const Student &s) : num(0), course(NULL), score(NULL)
{
	*this = s;
}

// ③析构函数
Student::~Student()
{
	if(course!=NULL) delete [] course;
	if(score!=NULL) delete [] score;
	num = 0;
	course = NULL;
	score = NULL;
}

// ④设置（修改）学生的学号、姓名
void Student::Set(const string &Id, const string &Name)
{
	id = Id;
	name = Name;
}

// ⑤设置（修改）学生所选课程、各课程成绩
void Student::Set(int Num, const Course *array, const double *Score)
{
	Student temp(id, name, Num, array);
	for(int i=0; i<Num; i++)
		temp.score[i] = Score[i];
	*this = temp;
}
