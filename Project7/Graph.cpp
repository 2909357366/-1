#include "Graph.h"
#include <iostream>
#define MAX_VERTEX_NUM  7

CGraph cgraph;
PathList p[7];

void Init(void)
{
	for (int i = 0; i < 32; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			if (i == j) cgraph.m_aAdjMatrix[i][j] = 0;
			else cgraph.m_aAdjMatrix[i][j] = INF;
		}
	}
	cgraph.m_nVexNum = 0;
}

void CGraph::CreatPath()
{
	for (int i = 0; i < cgraph.m_nVexNum; i++)
	{
		for (int j = 0; j < cgraph.m_nVexNum; j++)
		{
			if (j >= i)
			{
				
			}
		}
	}
}

bool CGraph::InsertVex(Vex sVex[])
{
	//int p = 0;
	while(m_nVexNum < MAX_VERTEX_NUM)
	{
		m_aVexs[m_nVexNum] = sVex[m_nVexNum];
		//cout << m_nVexNum << endl;
		m_nVexNum++;
		//p++;
		//顶点已满
	}
	//cout << m_nVexNum << endl;
	return true;
	 //插入顶点信息
	//cout << m_nVexNum << endl;
}



bool CGraph::InsertEdge(Edge sEdge)
{
	if (sEdge.vex1 < 0 || sEdge.vex1 >= m_nVexNum || sEdge.vex2 < 0 || sEdge.vex2 >= m_nVexNum)
	{
		// 下标越界
		return false;
	}
	// 插入边的信息
	m_aAdjMatrix[sEdge.vex1][sEdge.vex2] = sEdge.weight;
	m_aAdjMatrix[sEdge.vex2][sEdge.vex1] = sEdge.weight;
	return true;
}


int CGraph::FindEdge(int v, Edge aEdge[])
{
		int k = 0;
		for (int i = 0; i < m_nVexNum; i++)
		{
			// 得到边的消息
			if (k == v)
			{
				return k;
			}
				k++;
		}
		return k; // 返回边的条数
}

/*void DFS(int nVex, bool bVisted[], int& nIndex, PathList& pList)
{
	aVisited[nVex] = true; // 改为已访问
	pList->vexs[nIndex++] = nVex; //访问顶点 nVex
	for (…) //搜索 v 的所有邻接点
	{
		if (i 是 nVex 的邻接点 && ！bVisited[i])
		{
			DFS(i, aVisited, nIndex, pList); //递归调用 DFS
		}
	}
}*/


void CGraph::DFSTraverse(int nVex, PathList* pList)
{
	int nIndex = 0;

//	DFS(nVex, aVisited, nIndex, *pList);
}