#pragma once


// CDlgRecSearch1078 �Ի���

class CDlgRecSearch1078 : public CDialog
{
	DECLARE_DYNAMIC(CDlgRecSearch1078)

public:
	CDlgRecSearch1078(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgRecSearch1078();

// �Ի�������
	enum { IDD = IDD_DLG_REC_SEARCH_1078 };
	CComboBox m_cmbChannel;
	CComboBox m_cmbLocation;
	CComboBox m_cmbFileType;
	CComboBox m_cmbMediaType;
	CComboBox m_cmbCodeStreamType;
	CComboBox m_cmbStorageType;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();

	afx_msg void OnBnClickedBtnRecSearch1078();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedChkAlarm808All();
	afx_msg void OnBnClickedChkAlarm1078All();
};
