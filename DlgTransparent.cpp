// DlgTransparent.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "OCXDemo.h"
#include "DlgTransparent.h"
//#include "afxdialogex.h"
#include "cmsv6ocx.h"
#include "OCXDemoDlg.h"


// CDlgTransparent �Ի���

IMPLEMENT_DYNAMIC(CDlgTransparent, CDialog)

CDlgTransparent::CDlgTransparent(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgTransparent::IDD, pParent)
	, m_strParam(_T(""))
	, m_strResult(_T(""))
{
	m_pOCX = NULL;
}

CDlgTransparent::~CDlgTransparent()
{
}

void CDlgTransparent::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_ET_PARAM, m_strParam);
	DDX_Text(pDX, IDC_ET_PARAM2, m_strResult);
}


BEGIN_MESSAGE_MAP(CDlgTransparent, CDialog)
	ON_BN_CLICKED(IDOK, OnBnClickedOk)
END_MESSAGE_MAP()


// CDlgTransparent ��Ϣ�������


void CDlgTransparent::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//CDialog::OnOK();


	COCXDemoDlg *pDlg = reinterpret_cast<COCXDemoDlg *>(AfxGetMainWnd());
	if ( m_pOCX != NULL && pDlg != NULL )
	{
		UpdateData();
		
		long lRet = m_pOCX->TransparentConfig(pDlg->m_strDevIDNO, 0, m_strParam, m_strParam.GetLength());
		if ( lRet == 0 )
		{
			m_strResult = _T("�����ɹ�");
		}
		else
		{
			m_strResult.Format(_T("����ʧ��:%d"), lRet);
		}
		UpdateData(FALSE);

	}
}
