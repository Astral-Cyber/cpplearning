#pragma once
#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<dirent.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<cstdio>
#include <pwd.h>
#include <grp.h>
#include <iomanip>

using namespace std;

void getDirFile(char* path, vector<string>& files);//�õ�Ŀ¼�µ��ļ�
void getDirType(char* path, vector<string>&types);//�õ�Ŀ¼���ļ�������
void file_type(const struct stat* file_message); //�õ��ļ�������
void file_nlink(const struct stat *file_message);//�õ��ļ���Ӳ������
void file_power(const struct stat *file_message); //����ļ�Ȩ��
void file_id(const struct stat*file_message);//�õ��ļ������ߣ�������
void file_size(const struct stat*file_message); //��ȡ�ļ���С
void file_mtime(const struct stat*file_message); //��ȡ�ļ����һ���޸�ʱ��