#include<cstdio>
#include <ctime>
//////////////////////////////////////////////////////o2�󷨺� 
//#pragma GCC optimize(2)
//////////////////////////////////////////////////////


/////��������
/////�������촫
/////������ħ¼
/////������ʱ��
/////����������
/////�������̸
/////������ħ��
/////����������
/////������ҹ��
/////������ӳ�V
/////��������¼
/////���������
/////����������
/////����������
/////���������
/////������鴫
/////��������


inline int f1(int a)
{
	int b=a;
	a=b;
}

int f2(int a)
{
	int b=a;
	a=b;
}

inline int read1()
{
	char c;bool f=false;int a=0;
	for (;!((((c=getchar())>='0')&&(c<='9'))||(c=='-')););
	if (c=='-')	f=true;
		else	{a=c-'0';}
	for (;(c=getchar())>='0'&&c<='9';)
	{a=a*10+c-'0';}
	return f?-a:a;
}

int read2()
{
	char c;bool f=false;int a=0;
	for (;!((((c=getchar())>='0')&&(c<='9'))||(c=='-')););
	if (c=='-')	f=true;
		else	{a=c-'0';}
	for (;(c=getchar())>='0'&&c<='9';)
	{a=a*10+c-'0';}
	return f?-a:a;
}

int main()
{
	double t1,t2,t;
	
/*	t1=clock();
	for (register int i=1;i<=100000000;i++);
	t2=clock();
	t=(t2-t1)/1000;
	printf ("register ������%.4lf\n",t);
	t1=clock();
	for (int i=1;i<=100000000;i++);
	t2=clock();
	t=(t2-t1)/1000;
	printf ("register ������%.4lf\n",t);
	
	t1=clock();
	for (int i=1;i<=100000000;++i);
	t2=clock();
	t=(t2-t1)/1000;
	printf ("++ǰ�� ������%.4lf\n",t);
	t1=clock();
	for (int i=1;i<=100000000;i++);
	t2=clock();
	t=(t2-t1)/1000;
	printf ("++���� ������%.4lf\n",t);
	
	bool a1=false;
	int a2=1;
	t1=clock();
	for (int i=1;i<=100000000;i++)	a1?1:2;
	t2=clock();
	t=(t2-t1)/1000;
	printf ("bool �Ƚ� ������%.4lf\n",t);
	t1=clock();
	for (int i=1;i<=100000000;i++)	a2?1:2;
	t2=clock();
	t=(t2-t1)/1000;
	printf ("int  �Ƚ� ������%.4lf\n",t);
	
	t1=clock();
	for (int i=1;i<=100000000;i++)	f1(i);
	t2=clock();
	t=(t2-t1)/1000;
	printf ("inline ���� ������%.4lf\n",t);/////��֮���� 
	t1=clock();
	for (int i=1;i<=100000000;i++)	f2(i);
	t2=clock();
	t=(t2-t1)/1000;
	printf ("inline ���� ������%.4lf\n",t);
	*/
	
	int a;
	freopen("test.txt","r",stdin);
	t1=clock();
	for (int i=1;i<=10000000;i += 4)
	{
		a = i;
		a = i+1;
		a = i+2;
		a = i+3;
	}
	t2=clock();
	t=(t2-t1)/1000;
	printf ("inline ���� ������%.4lf\n",t);
	freopen("test.txt","r",stdin);
	t1=clock();
	for (int i=1;i<=10000000;i++)	a=i;
	t2=clock();
	t=(t2-t1)/1000;
	printf ("inline ���� ������%.4lf\n",t);
}
