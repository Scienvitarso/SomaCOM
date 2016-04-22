// Soma.cpp : Implementation of CSoma

#include "stdafx.h"
#include "Soma.h"

// CSoma

HRESULT CSoma::setPrimeiroValor(int valor) {
	iPrimeiroValor = valor;
	return S_OK;
}


HRESULT CSoma::setSegundoValor(int valor) {
	iSegundoValor = valor;
	return S_OK;
}


HRESULT CSoma::getSoma(int *soma) {
	(*soma) = iPrimeiroValor + iSegundoValor;
	return S_OK;
}


/*

//IUnknown interface 
HRESULT CSoma::QueryInterface(REFIID riid, LPVOID *ppvObj) {

	if (!ppvObj) {
		return E_INVALIDARG;
	}

	*ppvObj = NULL;

	if (riid == IID_IUnknown || riid == IID_ISoma) {
		*ppvObj = (LPVOID) this;
		AddRef();
		return NOERROR;
	}

	return E_NOINTERFACE;

}

ULONG   CSoma::AddRef() {
	InterlockedIncrement(&m_cRef);
	return m_cRef;
}

ULONG   CSoma::Release() {
	ULONG ulRefCount = InterlockedDecrement(&m_cRef);
	if (0 == m_cRef)
	{
		delete this;
	}
	return ulRefCount;
}*/
