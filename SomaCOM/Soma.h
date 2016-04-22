// Soma.h : Declaration of the CSoma

#pragma once
#include "resource.h"       // main symbols



#include "SomaCOM_i.h"



using namespace ATL;


// CSoma

class ATL_NO_VTABLE CSoma :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CSoma, &CLSID_Soma>,
	public ISoma
{
public:
	CSoma()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SOMA)

DECLARE_NOT_AGGREGATABLE(CSoma)

BEGIN_COM_MAP(CSoma)
	COM_INTERFACE_ENTRY(ISoma)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	// 
	HRESULT __stdcall setPrimeiroValor(int valor);
	HRESULT __stdcall setSegundoValor(int valor);
	HRESULT __stdcall getSoma(int *soma);
/*
	//IUnknown interface 
	HRESULT __stdcall QueryInterface(REFIID riid, LPVOID *ppObj);
	ULONG   __stdcall AddRef();
	ULONG   __stdcall Release();
	*/
private:
	int iPrimeiroValor, iSegundoValor;
	//long m_cRef;

};

OBJECT_ENTRY_AUTO(__uuidof(Soma), CSoma)
