#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<fstream>
#include<string>
#include<iostream>
#include<ctime>
#include<cctype>

inline int read()
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
	for (int i=1;i<=10000;i++)
	{
		system("test.exe");/////��������
		int a;double t1,t2,t;
		t1=clock();
		system("!!!!!!!!���ɱ.exe");/////����֤����
		t2=clock();
		t=(t2-t1)/1000;
	    	printf ("%d  %.4f\n",i,t);
		if (t>=1.0){
	        puts("TLE\n");/////ʱ�䳬ʱ
//	    	return 1;
		}
		for (;(t2-t1)/1000<1;t2=clock());
		
		
		system("!!!!!!!!���ɱ____����.exe");/////��������
		std::ifstream op;
	    std::string str1,str2;
	    op.open("ni.out");/////��������ļ�
	    while(!op.eof())
	        str1+=op.get();
	    op.close();
	    op.open("ni1.out");/////��������ļ�
	    while(!op.eof())
	        str2+=op.get();
	    op.close();
	    if(str1!=str2){
	        puts("NO\n");/////�𰸴���
	    	return 1;
		}
	}
	printf ("art");
	return 0;
}
