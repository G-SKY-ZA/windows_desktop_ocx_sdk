#pragma once


// CDlgTransparent �Ի���
class CCMSV6OCX;
class CDlgTransparent : public CDialog
{
	DECLARE_DYNAMIC(CDlgTransparent)

public:
	CDlgTransparent(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgTransparent();

// �Ի�������
	enum { IDD = IDD_TRANSPARENT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
private:
	CCMSV6OCX *m_pOCX;
public:
	afx_msg void OnBnClickedOk();
	CString m_strParam;
	CString m_strResult;
	void SetOCX(CCMSV6OCX * pOCX) { m_pOCX = pOCX; }
};
