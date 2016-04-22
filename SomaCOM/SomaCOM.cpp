// SomaCOM.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "SomaCOM_i.h"


using namespace ATL;

#include <stdio.h>

class CSomaCOMModule : public ATL::CAtlServiceModuleT< CSomaCOMModule, IDS_SERVICENAME >
{
public :
	DECLARE_LIBID(LIBID_SomaCOMLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SOMACOM, "{CAF16259-6C4F-4EF3-894D-A844B4BE7B8F}")
		HRESULT InitializeSecurity() throw()
	{
		// TODO : Call CoInitializeSecurity and provide the appropriate security settings for your service
		// Suggested - PKT Level Authentication, 
		// Impersonation Level of RPC_C_IMP_LEVEL_IDENTIFY 
		// and an appropriate Non NULL Security Descriptor.

		return S_OK;
	}
	};

CSomaCOMModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

