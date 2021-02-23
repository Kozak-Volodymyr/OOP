#include<iostream>
#include<cmath>
#include<Windows.h>
using namespace std;
class Kvadrat2D {
private:
	 double x;
	 double x1;
	 double y;
	 double y1;
public:
	 Kvadrat2D(double a, double a1, double b, double b1) {//�����������

		  x = a;
		  y = b;
		  x1 = a1;
		  y1 = b1;
	 };
	 ~Kvadrat2D() {}//����������
	 double St(double a, double a1, double b, double b1)//�������� �������
	 {
		  double St;
		  St = sqrt(pow((a1 - a), 2) + pow((b1 - b), 2)) / sqrt(2);
		  return St;
	 }
	 double Pl(double St)//�����
	 {
		  double k;
		  k = pow(St, 2);
		  return k;
	 }
	 double Pe(double St)//���������
	 {
		  double g;
		  g = 4 * St;
		  return g;
	 }
	 double SetX(double a)
	 {
		  x = a;
		  return x;
	 }
	 double SetX1(double a1)
	 {
		  x1 = a1;
		  return x1;
	 }
	 double SetY(double b)
	 {
		  y = b;
		  return y;
	 }
	 double SetY1(double b1)
	 {
		  y1 = b1;
		  return y1;
	 }
	 double GetX() {
		  return x;
	 }

	 double GetX1() {
		  return x1;
	 }
	 double GetY() {
		  return y;
	 }
	 double GetY1() {
		  return y1;
	 }
};
int main() {
	 double st;
	 double pl;
	 double a;
	 double a1;
	 double b;
	 double b1;
	 SetConsoleOutputCP(1251);
	 cout << "������ x:";
	 cin >> a;
	 cout << "������ x1:";
	 cin >> a1;
	 cout << "������ y:";
	 cin >> b;
	 cout << "������ y1:";
	 cin >> b1;
	 SetConsoleOutputCP(1251);
	 Kvadrat2D obj(a,a1,b,b1);
	 st = obj.St(obj.GetX(), obj.GetX1(), obj.GetY(), obj.GetY1());//��������� �������
	 cout << "������� ��������:" << st << endl;
	 pl = obj.St(obj.SetX(a), obj.SetX1(a1), obj.SetY(b), obj.SetY1(b1));//���� ������� 
	 
	 cout << "������� ��������(�������� ����� ���� ����):" << pl << endl;
	 if (st != pl) {
		  cout << "�������";
		  return 0;
	 }
	 cout << "����� ��������:" << obj.Pl(st) << endl;
	 cout << "��������� ��������:" << obj.Pe(st) << endl;
	 return 0;
}