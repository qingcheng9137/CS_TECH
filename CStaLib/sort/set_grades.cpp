///*************************************************************************************/
///*************************************** 2018.4.14 ***********************************/
///*****************************          jerry zheng           ************************/
///**************************** beijing insititute of technology ***********************/
///*************************************************************************************/
//
////�����������bug��vectorԽ��,iterator + offset
//
//#include "stdafx.h"
//
//struct Student
//{
//	int NO;
//	string name;
//	int chinese;
//	int math;
//public:
///*��δ��룬ʹ��set_union�ڵ���<��ͬʱ����ǡ���ĵ��޸��˽��������ֵ��
//	��Ϊset_unionͨ��operator<����ֻ�ܹ�����v1��������v2������һ��Ԫ��*/
//	bool operator<(const Student &s)
//	{
//		if (NO == s.NO)
//		{
//			math = s.math;
//		}
//		return NO < s.NO;
//	}
//};
//
//int main()
//{
//	vector<Student>v1;	//���ĳɼ�����
//	vector<Student>v2;	//��ѧ�ɼ�����
//
//	ifstream in1("d:\\set_grades_chin.txt");	//�����ĳɼ��ļ�
//	ifstream in2("d:\\set_grades_math.txt");	//����ѧ�ɼ��ļ�
//
//	while (!in1.eof())	//�������ĳɼ����Ҵ�������
//	{
//		Student s;	//�Ҳ�ȷ�����Ƿ��Ǵ�����̬�������õķ���,��������Ϊs������֮���û����
//		in1 >> s.NO >> s.name >> s.chinese;
//		v1.push_back(s);
//	}
//	while (!in2.eof())	//������ѧ�ɼ����Ҵ�������
//	{
//		Student s;	
//		in2 >> s.NO >> s.name >> s.math;
//		v2.push_back(s);
//	}
//
//	in1.close();
//	in2.close();
//
//	set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v1.begin());	//�ϲ�
//
//	for (int ni = 0; ni < v1.size(); ni++)
//	{
//		Student&s = v1.at(ni);
//		cout << s.NO << "\t" << s.name << "\t" << s.chinese << "\t" << s.math << endl;
//	}
//
//	system("pause");
//	return 0;
//}