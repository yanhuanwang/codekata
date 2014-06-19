///* ���⣺̰���㷨֮��С������(Kruskal�㷨)
// * ���ߣ�chinazhangjie
// * ���䣺chinajiezhang@gmail.com
// * �������ԣ�C++
// * ����������Visual Studio 2005
// * ʱ�䣺2010.12.01
// */
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <limits>
//using namespace std;
//
//struct TreeNode {
//public:
//	TreeNode(int nVertexIndexA = 0, int nVertexIndexB = 0, int nWeight = 0) :
//			m_nVertexIndexA(nVertexIndexA), m_nVertexIndexB(nVertexIndexB), m_nWeight(
//					nWeight) {
//	}
//	friend
//	bool operator <(const TreeNode& lth, const TreeNode& rth) {
//		return lth.m_nWeight > rth.m_nWeight;
//	}
//
//public:
//	int m_nVertexIndexA;
//	int m_nVertexIndexB;
//	int m_nWeight;
//};
//
////  ���鼯
//class UnionSet {
//public:
//	UnionSet(int nSetEleCount) :
//			m_nSetEleCount(nSetEleCount) {
//		__init();
//	}
//	// �ϲ�i��j�����i��jͬ�ڼ����У�����false�����򷵻�true
//	bool Union(int i, int j) {
//		int ifather = __find(i);
//		int jfather = __find(j);
//		if (ifather == jfather) {
//			return false;
//			// copy (m_nvFather.begin(), m_nvFather.end(), ostream_iterator<int> (cout, " "));
//			// cout << endl ;
//		} else {
//			m_nvFather[jfather] = ifather;
//			// copy (m_nvFather.begin(), m_nvFather.end(), ostream_iterator<int> (cout, " "));
//			// cout << endl ;
//			return true;
//		}
//
//	}
//
//private:
//	// ��ʼ�����鼯
//	int __init() {
//		m_nvFather.resize(m_nSetEleCount);
//		for (vector<int>::size_type i = 0; i < m_nSetEleCount; ++i) {
//			m_nvFather[i] = static_cast<int>(i);
//			// cout << m_nvFather[i] << " " ;
//		}
//		// cout << endl ;
//		return 0;
//	}
//	// ����indexԪ�صĸ��׽ڵ� ����ѹ��·������
//	int __find(int nIndex) {
//		if (nIndex == m_nvFather[nIndex]) {
//			return nIndex;
//		}
//		return m_nvFather[nIndex] = __find(m_nvFather[nIndex]);
//	}
//
//private:
//	vector<int> m_nvFather;    // ��������
//	vector<int>::size_type m_nSetEleCount;    // �����н�����
//};
//
//class MST_Kruskal {
//	typedef priority_queue<TreeNode> MinHeap;
//public:
//	MST_Kruskal(const vector<vector<int> >& graph) {
//		m_nNodeCount = static_cast<int>(graph.size());
//		__getMinHeap(graph);
//	}
//	void DoKruskal() {
//		UnionSet us(m_nNodeCount);
//		int k = 0;
//		while (m_minheap.size() != 0 && k < m_nNodeCount - 1) {
//			TreeNode tn = m_minheap.top();
//			m_minheap.pop();
//			// �жϺ�����
//			if (us.Union(tn.m_nVertexIndexA, tn.m_nVertexIndexB)) {
//				m_tnMSTree.push_back(tn);
//				++k;
//			}
//		}
//		// ������
//		for (size_t i = 0; i < m_tnMSTree.size(); ++i) {
//			cout << m_tnMSTree[i].m_nVertexIndexA << "->"
//					<< m_tnMSTree[i].m_nVertexIndexB << " : "
//					<< m_tnMSTree[i].m_nWeight << endl;
//		}
//	}
//
//private:
//	void __getMinHeap(const vector<vector<int> >& graph) {
//		for (int i = 0; i < m_nNodeCount; ++i) {
//			for (int j = 0; j < m_nNodeCount; ++j) {
//				if (graph[i][j] != numeric_limits<int>::max()) {
//					m_minheap.push(TreeNode(i, j, graph[i][j]));
//				}
//			}
//		}
//	}
//private:
//	vector<TreeNode> m_tnMSTree;
//	int m_nNodeCount;
//	MinHeap m_minheap;
//};
//
//int main() {
//	const int cnNodeCount = 6;
//	vector<vector<int> > graph(cnNodeCount);
//	for (size_t i = 0; i < graph.size(); ++i) {
//		graph[i].resize(cnNodeCount, numeric_limits<int>::max());
//	}
//	graph[0][1] = 6;
//	graph[0][2] = 1;
//	graph[0][3] = 3;
//	graph[1][2] = 5;
//	graph[1][4] = 3;
//	graph[2][3] = 5;
//	graph[2][4] = 6;
//	graph[2][5] = 4;
//	graph[3][5] = 2;
//	graph[4][5] = 6;
//
//	graph[1][0] = 6;
//	graph[2][0] = 1;
//	graph[3][0] = 3;
//	graph[2][1] = 5;
//	graph[4][1] = 3;
//	graph[3][2] = 5;
//	graph[4][2] = 6;
//	graph[5][2] = 4;
//	graph[5][3] = 2;
//	graph[5][4] = 6;
//
//	MST_Kruskal mst(graph);
//	mst.DoKruskal();
//}
