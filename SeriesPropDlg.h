#if !defined(AFX_SERIESPROPDLG_H__EFFE6C6F_39A1_42E7_9B35_1EE66D5AC520__INCLUDED_)
#define AFX_SERIESPROPDLG_H__EFFE6C6F_39A1_42E7_9B35_1EE66D5AC520__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SeriesPropDlg.h : header file
//

#include "ChartString.h"
#include "ColourPicker.h"

/////////////////////////////////////////////////////////////////////////////
// CSeriesPropDlg dialog

class CSeriesPropDlg : public CDialog
{
// Construction
public:
//	std::string GetSeriesName()   const  { return m_strSeriesName; }
//	int			GetSeriesType()   const  { return m_iSeriesType;   }
//	COLORREF	GetSeriesColour() const	 { return m_SeriesColour;  }

	CSeriesPropDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSeriesPropDlg)
	enum { IDD = IDD_SERIESPROP_DLG };
	CComboBox	m_VertAxisCombo;
	CComboBox	m_HorizAxisCombo;
	CColourPicker	m_ColourSelect;
	CComboBox	m_SeriesTypeCombo;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSeriesPropDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSeriesPropDlg)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnSelectLineData();
	afx_msg void OnSelectRandomData();
	afx_msg void OnSelectSineData();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

public:
	TChartString m_strSeriesName;//获取Series name
	int			m_iSeriesType;   //获取Series type
	COLORREF	m_SeriesColour;  //获取 Series colour

	int m_iVertAxis; //获取:Associated vert axis
	int m_iHorizAxis;//获取:Associated horiz axis
	
	int m_iDataType; //设置线型：Line、 Sine wave、Random data
	int m_iPointsNumber;//获取 Number of points

	float m_fMaxXValue;//获取 Maximum X value:
	float m_fMinXValue; //获取 Minimum X value,

	//Line data
	float m_fLineSlope;  //获取 Line Slope 
	float m_fLineOffset;  //获取 Line Offset

	// Sine wave data
	float m_fSineAmplitude; //获取Sine Amplitude 
	float m_fSinePeriod;   //获取Sine Period

	// Random values data:
	int m_iRandMinVal; //获取 Min Y Value
	int m_iRandMaxVal; //获取 Max Y Value
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIESPROPDLG_H__EFFE6C6F_39A1_42E7_9B35_1EE66D5AC520__INCLUDED_)
