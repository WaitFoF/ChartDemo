#if !defined(AFX_LINEPROPDIALOG_H__8B4BF925_24C6_41B2_8BEB_98E6A52322A8__INCLUDED_)
#define AFX_LINEPROPDIALOG_H__8B4BF925_24C6_41B2_8BEB_98E6A52322A8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LinePropDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLinePropDialog dialog

class CLinePropDialog : public CDialog
{
// Construction
public:
	CLinePropDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CLinePropDialog)
	enum { IDD = IDD_LINEPROP_DLG };

	
	int		m_iLineWidth;//线宽
	int		m_iPenStyle;//线的类型：Solid;Dash;Dot;Dash-Dot;Dash-Dot-Dot;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLinePropDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CLinePropDialog)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LINEPROPDIALOG_H__8B4BF925_24C6_41B2_8BEB_98E6A52322A8__INCLUDED_)
