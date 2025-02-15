#if !defined(AFX_REPOSITORY_H__899F093D_1BC9_49B7_AD2C_843DE3ED2CFB__INCLUDED_)
#define AFX_REPOSITORY_H__899F093D_1BC9_49B7_AD2C_843DE3ED2CFB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CRepositoryObject;
class CRepositoryTransaction;

/////////////////////////////////////////////////////////////////////////////
// CRepository wrapper class

class CRepository : public COleDispatchDriver
{
public:
	CRepository() {}		// Calls COleDispatchDriver default constructor
	CRepository(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CRepository(const CRepository& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CRepositoryObject Create(LPCTSTR Connect, LPCTSTR User, LPCTSTR Password, long fFlags);
	CRepositoryObject Open(LPCTSTR Connect, LPCTSTR User, LPCTSTR Password, long fFlags);
	CRepositoryObject CreateObject(const VARIANT& sTypeID, const VARIANT& sObjID);
	CRepositoryObject GetRootObject();
	CRepositoryObject GetObject(const VARIANT& sObjID);
	void Refresh(long iMilliseconds);
	VARIANT ObjectIDToInternalID(const VARIANT& sObjID);
	VARIANT InternalIDToObjectID(const VARIANT& sIntID);
	CRepositoryTransaction GetTransaction();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_REPOSITORY_H__899F093D_1BC9_49B7_AD2C_843DE3ED2CFB__INCLUDED_)
