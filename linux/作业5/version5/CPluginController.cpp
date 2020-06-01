#include "CPluginController.h"
#include "SearchPlugin.h"
#include "IPlugin.h"
#include "dlfcn.h"

CPluginController::CPluginController(void)
{

}

CPluginController::~CPluginController(void)
{

}

bool CPluginController::InitializeController(void)
{
	//������в�����ļ���
	std::vector<std::string> PluginName;
	//���������������
	SearchPlugin ptr;
	//��ȡ���еĲ���ļ���
	if (!ptr.GetPlugin(PluginName))
		return false;
	for (unsigned int i = 0; i < PluginName.size(); i++)
	{
		typedef int(*PLUGIN_CREATE)(IPlugin**);
		PLUGIN_CREATE GetIFC;
		IPlugin *pPlugin = NULL;
		//�򿪶�̬���ӿ��ļ�
		void* handle = dlopen(PluginName[i].c_str(), RTLD_LAZY);
		if (handle != NULL)
		{
			m_vhForPlugin.push_back(handle);
			//��ȡ�����Ľӿڶ���ָ��
			GetIFC = (PLUGIN_CREATE)dlsym(handle, "GetInterface");
			if (NULL != GetIFC)
			{
				(GetIFC)(&pPlugin);
				if (pPlugin != NULL)
				{
					m_vpPlugin.push_back(pPlugin);
				}
			}
		}
	}
	return true;
}

bool CPluginController::UninitializeController()
{
	for (unsigned int i = 0; i < m_vhForPlugin.size(); i++)
	{
		dlclose(m_vhForPlugin[i]);
	}
	return true;
}


bool CPluginController::ProcessRequest(int FunctionID)
{
	for (unsigned int i = 0; i < m_vpPlugin.size(); i++)
	{
		if (m_vpPlugin[i]->GetID() == FunctionID)
		{
			m_vpPlugin[i]->Print();
			break;
		}
	}
	return true;
}

bool CPluginController::ProcessHelp(void)
{
	//������в�����ļ���
	std::vector<std::string> PluginName;
	//���������������
	SearchPlugin ptr;
	//��ȡ���еĲ���ļ���
	if (!ptr.GetPlugin(PluginName))
		return false;
	for (unsigned int i = 0; i < PluginName.size(); i++)
	{
		typedef int(*PLUGIN_CREATE)(IPlugin**);
		PLUGIN_CREATE GetIFC;
		IPlugin *pPlugin = NULL;
		//�򿪶�̬���ӿ��ļ�
		void* handle = dlopen(PluginName[i].c_str(), RTLD_LAZY);
		if (handle != NULL)
		{
			//��ȡ�����Ľӿڶ���ָ��
			GetIFC = (PLUGIN_CREATE)dlsym(handle, "GetInterface");
			if (NULL != GetIFC)
			{
				(GetIFC)(&pPlugin);
				if (pPlugin != NULL)
				{
					pPlugin->Help();
				}
			}
			dlclose(handle);
		}
	}
	return true;
}

bool CPluginController::IfProcess(char *Function)//�жϲ���Ƿ����
{
	unsigned int i;
	for (i = 0; i < m_vpPlugin.size(); i++)
	{
		if (strcmp(Function, m_vpPlugin[i]->GetName()) == 0)
		{
			break;
		}
	};
	if (i < m_vpPlugin.size())//�������
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool CPluginController::ProcessFunction(char *Function, char*File)//ִ�в������
{
	for (unsigned int i = 0; i < m_vpPlugin.size(); i++)
	{
		if (strcmp(Function, m_vpPlugin[i]->GetName()) == 0)
		{
			m_vpPlugin[i]->Func(File);//�������
			break;
		}
	}
	return true;
}



