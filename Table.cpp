#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Table{

public:
	
	int tablearr[20][20];
	
};

int main(){
	
	int i,j;
	
	Table obj;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			
			obj.tablearr[i][j] = rand() % 2;
		}
	}
	
	int temp;
	
	temp = i*j;
	
	
	
	for(i = 0; i < temp; i++){
		cout<<"_";
	}
	
	
	for(i = 0; i < 5; i++){
		cout<< endl;
		for(j = 0; j < 5; j ++){
			cout << "| " << obj.tablearr[i][j] << " |";
		}
	}
	
	cout << endl;
	
	for(i = 0; i < temp; i++){
		cout<<"_";
	}
	
}
