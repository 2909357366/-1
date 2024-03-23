#pragma warning (disable:4996)
#include <fstream>
#include "Tourism.h"
#include "Graph.h"
#include <string.h>


Vex vex[7];
Edge edge[7];
CGraph m_Graph;
using namespace std;
void CreatGraph()
{	 
	Init();
	string filename = "C:\\Users\\yangbin\\Desktop\\qqdocument\\数据结构实验\\Edge.txt";
	string filename2 = "C:\\Users\\yangbin\\Desktop\\qqdocument\\数据结构实验\\Vex.txt";
	ifstream ifs;
	//cout << "请输入要打开的文件名！" << endl;
	//cin >> filename2;
	ifs.open(filename2, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
		return;
	}

	char v[1024];
	int n = 0;
	int k = 0;
	while (ifs >> v)
	{
		if (n == 0) {
			for (int i = 0; i < sizeof(v); i++) {
				vex[k].num[i] = v[i];
			}
			cout << vex[k].num << endl;
			n++;
		}
		else if (n == 1) {
			for (int i = 0; i < sizeof(v); i++) {
				vex[k].name[i] = v[i];
			}
			//strcpy(vex.name, v);
			cout << vex[k].name << endl;
			n++;
		}
		else if (n == 2) {
			for (int i = 0; i < sizeof(v); i++) {
				vex[k].desc[i] = v[i];
			}
			//strcpy(vex.desc, v);
			cout << vex[k].desc << endl;
			k++;
			n = 0;
		}
	}
	ifs.close();
	m_Graph.InsertVex(vex);



	//cout << "请输入要打开的文件名！" << endl;
	//cin >> filename;
	ifs.open(filename,ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
		return ;
	}
	int c;
	int m = 0;
	while (ifs >> c)
	{
		int h = 0;
		if (m == 0) {
			edge[h].vex1 = c;
			cout << edge[h].vex1 << endl;
			m++;
		}
		else if(m == 1){
			edge[h].vex2 = c;
			cout << edge[h].vex2 << endl;
			m++;
		}
		else if (m == 2) {
			edge[h].weight = c;
			cout << edge[h].weight << endl;
			m_Graph.InsertEdge(edge[h]);
			m = 0;
			h++;
		}

	}
	ifs.close();
	

	////////////////// 1 初始化图

	///////////////////// 2 设置图的顶点
	//…

	/////////////////////// 3 设置图的边
	//…
	//m_Graph.InsertEdge(edge);

	cout << "==== 创建景区景点图 ====" << endl;
	cout << "顶点个数：7" << endl;
	m_Graph.ViewFormation();
	m_Graph.ViewFromation1();
}




void GetSpotInfo()
{
	cout << "==== 查询景点信息 ====" << endl;
	int figer = 0;
	cout << "请输入想要查询的景点编号：";
	cin >> figer;
	int k = m_Graph.FindEdge(figer,edge);
	m_Graph.ShowVex(figer);
	m_Graph.ShowAround(figer);
//	m_Graph.PrintMatrix();
}


void TravelPath()
{

}