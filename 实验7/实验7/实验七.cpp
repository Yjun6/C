#include"实验7.h"
void Teacher::display(Teacher& teacher)
{
	cout << "Teacher的结构如下：" << endl;
	cout << "name=" << teacher.name << endl;
	cout << "age=" << teacher.age << endl;
	cout << "sex=" << teacher.sex << endl;
	cout << "address=" << teacher.address << endl;
	cout << "telephone=" << teacher.telephone << endl;
	cout << "title=" << teacher.title << endl;
}
void Cadre::display(Cadre& Cadre)
{
	cout << "Cadre的结构如下：" << endl;
	cout << "name=" << Cadre.name << endl;
	cout << "age=" << Cadre.age << endl;
	cout << "sex=" << Cadre.sex << endl;
	cout << "address=" << Cadre.address << endl;
	cout << "telephone=" << Cadre.telephone << endl;
	cout << "post=" << Cadre.post << endl;
}
void Teacher_Cadre::show(Teacher_Cadre&tc)
{
	tc.Teacher::display(tc);
	cout << "wages=" << tc.wages << endl;
}