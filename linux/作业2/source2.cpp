#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include<cstring>
#include<errno.h>
#include<cstdio>
#include<dirent.h>

using namespace std;
vector<string>dirs;//���ڴ��Ŀ¼�ļ�����

void getAllFiles(string path, vector<string>& files)
{
	DIR *dir;
	struct dirent *ptr;
	if ((dir = opendir(path.c_str())) == nullptr) {
		perror("Open directory error...");
		exit(1);
	}
	while ((ptr = readdir(dir)) != nullptr) {
		if (strcmp(ptr->d_name, ".") == 0 || strcmp(ptr->d_name, "..") == 0)
			continue;
		else if (ptr->d_type == 0)//unknown file
			files.push_back("unkonwn file " + path + "/" + ptr->d_name);
		else if (ptr->d_type == 1)//FIFO file
			files.push_back("FIFO file  " + path + "/" + ptr->d_name);
		else if (ptr->d_type == 2)//character device
			files.push_back("character device  " + path + "/" + ptr->d_name);
		else if (ptr->d_type == 6)//block device
			files.push_back("block device  " + path + "/" + ptr->d_name);
		else if (ptr->d_type == 10)//Link file
			files.push_back("link file  " + path + "/" + ptr->d_name);
		else if (ptr->d_type == 12)// UNIX domain socket
			files.push_back(" UNIX domain socket  " + path + "/" + ptr->d_name);
		else if (ptr->d_type == 8) //regular file
			files.push_back(path + "/" + ptr->d_name);
		else if (ptr->d_type == 4) //directory
		{
			dirs.push_back(path + "/" + ptr->d_name); //��dirs�д��Ŀ¼�ļ�
			getAllFiles(path + "/" + ptr->d_name, files); //�ݹ�
		}
	}
	closedir(dir);
}
int main(int argc, char **argv) {
	if (argc < 2) {
		cout << "USAGE:./a.out path" << endl;
		exit(-1);
	}
	char * filePath = argv[1];
	vector<string> files; //���ڴ��Ŀ¼����������ļ�
	getAllFiles(filePath, files);
	cout << "subfiles" << endl;
	for (auto i = 0; i < files.size(); i++) //��ӡ��Ŀ¼�ļ�������ļ�
	{
		cout << files[i] << endl;
	}
	cout << endl;
	cout << "dir files" << endl;
	for (auto i = 0; i < dirs.size(); i++) //��ӡĿ¼�ļ�
	{
		cout << dirs[i] << endl;
	}
	return 0;
}

