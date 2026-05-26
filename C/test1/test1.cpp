#include <iostream>
using namespace std;

typedef int datatype;
const int maxsize=100;
struct sqlist{
	datatype data[maxsize];
	int n;
}; 

void inverse(sqlist *L, int n){
	int i,j;
	datatype x;
	for(i=1,j=n;i<j;i++,j--){
		x=L->data[i-1];
		L->data[i-1]=L->data[j-1];
		L->data[j-1]=x;
	}
}

void print(sqlist *L){
	cout<<"The sqlist is:"<<endl;
	for(int i=0;i<L->n;i++){
		cout<<L->data[i]<<"";
	}
	cout<<endl;
}

int main(){
	sqlist *sq=new sqlist;
	int n,i;
	cout<<"How many elements of the sqlist?"<<endl;
	cin>>n;
	sq->n=n;
	cout<<"Input the "<<n<<" elements of the sqlist:"<<endl;
	for(i=0;i<n;i++){
		cin>>sq->data[i];
	}
	inverse(sq,n);
	cout<<"New sqlist:"<<endl;
	print(sq);
	return 0;
}