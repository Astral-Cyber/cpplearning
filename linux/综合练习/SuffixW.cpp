#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <string>
#include <vector>
#include <fstream>
#include <cstring>
#include <errno.h>
#include <cstdio>
#include <dirent.h>
#include <map>
#include "IPlugin.h"

using namespace std;

char FUNC_NAME[] = "cssw"; //count the special suffix file word

class Plugin :
	public IPlugin
{
public:
	Plugin()
	{
	}
	virtual ~Plugin()
	{
	}
	virtual void Print()
	{
		cout << "Count the specific suffix file word of the directory ! Use 'cssw'" << endl;
	}
	virtual void Help()
	{
		cout << "Func id:4 " << "This func will count the specific suffix file word" << endl;
	}
	virtual int GetID()
	{
		return 4;
	}
	virtual char *GetName()
	{
		return FUNC_NAME;
	}
	int FuncLine(const char *szLine)
	{
		int nWords = 0;
		int i = 0;
		for (; i < strlen(szLine); i++)
		{
			if (*(szLine + i) != ' ')
			{
				nWords++;
				while ((*(szLine + i) != ' ') && (*(szLine + i) != '\0'))
				{
					i++;
				}
			}
		}
		return nWords;
	}
	void Func(char *File)
	{
		int nWords = 0;//�ʼ�����������ʼֵΪ0
		FILE *fp; //�ļ�ָ��
		char carrBuffer[1024];//ÿ���ַ����壬ÿ�����1024���ַ�
		if ((fp = fopen(File, "r")) == NULL)//���ļ�
		{
			cout << "fopen error" << endl;
			exit(-1);
		}
		while (!feof(fp))//���û�ж����ļ�ĩβ 
		{
			//���ļ��ж�һ��
			if (fgets(carrBuffer, sizeof(carrBuffer), fp) != NULL)
				//ͳ��ÿ�д���
				nWords += FuncLine(carrBuffer);
		}
		fclose(fp);//�ر��ļ�
		cout << "word numbers: " << nWords << endl;
	}
	virtual void Func(string path, string suffix) {
		DIR *dir;
		struct dirent *ptr;
		if ((dir = opendir(path.c_str())) == nullptr) {
			perror("Open directory error...");
			exit(1);
		}
		while ((ptr = readdir(dir)) != nullptr) {
			if (strcmp(ptr->d_name, ".") == 0 || strcmp(ptr->d_name, "..") == 0)
				continue;
			else if (ptr->d_type == 8) {
				string filename = ptr->d_name;
				string suffixStr = filename.substr(filename.find_last_of('.') + 1);//��ȡ�ļ���׺
				if (suffixStr == suffix) {
					//files.push_back(path + "/" + ptr->d_name);
					char p[100];
					strcpy(p, (path + "/" + ptr->d_name).c_str());
					Func(p);
				}
			}
			else if (ptr->d_type == 4) //directory
			{
				Func(path + "/" + ptr->d_name, suffix); //�ݹ�
			}
		}
		closedir(dir);
	}
};
extern "C" void GetInterface(IPlugin **ppPlugin)
{
	static Plugin plugin;
	*ppPlugin = &plugin;
}
