#include<iostream>
#include<map>
#include<vector>
#include<queue>
#include<list>
#include<string>
using namespace std;
Class TestResult{
	int studentId;
	string testdate;
	int testScore;
}
Class StudentScore{
	public:
	map<int,priority_queue<int>> id_score;
	map<int,double> calculateFinalScores(list<TestResult> results){
	if(results==NULL||results.size()==0)
	return null;
	for(auto res:results)
	{
	priority_queue<int> que;
	if(id_score.find(res.studentID)!=id_score.end())
	{
		if(que.size()<5)
		q.push(res.testScore);
	}
	else{
	que=new priority_queue(5)
	}
	}
	}
}
