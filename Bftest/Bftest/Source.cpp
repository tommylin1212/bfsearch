#include "agent.h"
#include "frontier.h"
#include "exploredset.h"
#include "node.h"
#include "problem.h"
using namespace std;

int main(int argc, char** argv) {
	if (argc < 4) {
		cout << "Usage: ./program [filename] [start] [finish]"<<endl;
		return 23;
	}
	else {
		Problem p;
		if (!p.init(argv[1]))return 24;
		Agent a(&p);
		Node * answer = a.bsearch(argv[2], argv[3]);
		if (answer) {
			answer->traceBack(true);
			cout<<endl;
		}
		else{
			cout<<"No route from "<<argv[2]<<" to "<<argv[3]<<endl;		
		}
	}
	return 0;
}
