#include<iostream>
using namespace std;
#include<conio.h>
#include <bits/stdc++.h>
#include<cstring>
#include<map>
class MatHang{
	string Id,Ten,Xx,Gia;
	int Sl;
	public:
		void Nhap(){
			cin.ignore(1);
			getline(cin,Id);
			cin.ignore(1);
			getline(cin,Ten);
			cin.ignore(1);
			getline(cin,Xx);
			cin>>Sl;
			cin.ignore(1);
			getline(cin,Gia);
		}
		void Xuat(){
			cout<<Id<<Ten<<Xx<<Sl<<Gia;
		}
};
class MayTinh : public MatHang{
	string CPU,HDH,Can;
	public:
		void Nhap1(){
			MatHang::Nhap();
			cin.ignore(1);
			getline(cin,CPU);
			cin.ignore(1);
			getline(cin,HDH);
			cin.ignore(1);
			getline(cin,Can);
		}
		void Xuat1(){
			MatHang::Xuat();
			cout<<CPU<<HDH<<Can;
		}
};
int main(){
	int i,n;
	MayTinh *a;
	cout<<"Nhap n:";
	cin>>n;
	a=new MayTinh[n];
	for(i=0;i<n;i++){
		a[i].Nhap1();
		cout<<"\na";
	}
	for(i=0;i<n+1;i++){
		a[i].Xuat1();
	}
	








}

