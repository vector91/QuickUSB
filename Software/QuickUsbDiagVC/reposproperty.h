#if !defined(AFX_REPOSPROPERTY_H__EC8BCC9C_5370_442F_82B9_C8CF8BA9A4BF__INCLUDED_)
#define AFX_REPOSPROPERTY_H__EC8BCC9C_5370_442F_82B9_C8CF8BA9A4BF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CReposProperty wrapper class

class CReposProperty : public COleDispatchDriver
{
public:
	CReposProperty() {}		// Calls COleDispatchDriver default constructor
	CReposProperty(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CReposProperty(const CReposProperty& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	VARIANT GetType();
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_REPOSPROPERTY_H__EC8BCC9C_5370_442F_82B9_C8CF8BA9A4BF__INCLUDED_)
