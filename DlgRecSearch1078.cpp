// DlgRecSearch1078.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "OCXDemo.h"
#include "DlgRecSearch1078.h"
#include "OCXDemoDlg.h"


// CDlgRecSearch1078 �Ի���

IMPLEMENT_DYNAMIC(CDlgRecSearch1078, CDialog)

CDlgRecSearch1078::CDlgRecSearch1078(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgRecSearch1078::IDD, pParent)
{

}

CDlgRecSearch1078::~CDlgRecSearch1078()
{
}

void CDlgRecSearch1078::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CMB_CHANNEL, m_cmbChannel);
	DDX_Control(pDX, IDC_CMB_LOCATION, m_cmbLocation);
	DDX_Control(pDX, IDC_CMB_FILE_TYPE, m_cmbFileType);
	DDX_Control(pDX, IDC_CMB_MEDIA_TYPE, m_cmbMediaType);
	DDX_Control(pDX, IDC_CMB_CODESTREAM_TYPE, m_cmbCodeStreamType);
	DDX_Control(pDX, IDC_CMB_STOREGE_TYPE, m_cmbStorageType);
}


BEGIN_MESSAGE_MAP(CDlgRecSearch1078, CDialog)
	ON_BN_CLICKED(IDC_BTN_REC_SEARCH_1078, &CDlgRecSearch1078::OnBnClickedBtnRecSearch1078)
	ON_BN_CLICKED(IDC_CHK_ALARM_808_ALL, &CDlgRecSearch1078::OnBnClickedChkAlarm808All)
	ON_BN_CLICKED(IDC_CHK_ALARM_1078_ALL, &CDlgRecSearch1078::OnBnClickedChkAlarm1078All)
END_MESSAGE_MAP()


// CDlgRecSearch1078 ��Ϣ�������


BOOL CDlgRecSearch1078::OnInitDialog()
{
	CDialog::OnInitDialog();


	CString strTemp;
	int nIndex = 0;
	for (int i=0; i<4; i++)
	{
		strTemp.Format(_T("ͨ��%d"), i+1);
		m_cmbChannel.InsertString(nIndex++, strTemp);
	}
	m_cmbChannel.InsertString(nIndex++, _T("����ͨ��"));
	m_cmbChannel.SetCurSel(m_cmbChannel.GetCount() - 1);

	nIndex = 0;
	m_cmbLocation.InsertString(nIndex, _T("�豸"));
	m_cmbLocation.SetItemData(nIndex++, GPS_FILE_LOCATION_DEVICE);
	m_cmbLocation.InsertString(nIndex, _T("�洢������"));
	m_cmbLocation.SetItemData(nIndex++, GPS_FILE_LOCATION_STOSVR);
	m_cmbLocation.InsertString(nIndex, _T("���ط�����"));
	m_cmbLocation.SetItemData(nIndex++, GPS_FILE_LOCATION_DOWNSVR);
	m_cmbLocation.SetCurSel(0);

	nIndex = 0;
	m_cmbFileType.InsertString(nIndex, _T("¼��"));
	m_cmbFileType.SetItemData(nIndex++, GPS_FILE_ATTRIBUTE_RECORD);
	m_cmbFileType.SetCurSel(0);

	// 0������Ƶ��1����Ƶ��2����Ƶ��3����Ƶ������Ƶ
	nIndex = 0;
	m_cmbMediaType.InsertString(nIndex, _T("����Ƶ"));
	m_cmbMediaType.SetItemData(nIndex++, 0);
	m_cmbMediaType.InsertString(nIndex, _T("��Ƶ"));
	m_cmbMediaType.SetItemData(nIndex++, 1);
	m_cmbMediaType.InsertString(nIndex, _T("��Ƶ"));
	m_cmbMediaType.SetItemData(nIndex++, 2);
	m_cmbMediaType.InsertString(nIndex, _T("��Ƶ������Ƶ"));
	m_cmbMediaType.SetItemData(nIndex++, 3);
	m_cmbMediaType.SetCurSel(0);

	// 0������������1����������2��������
	nIndex = 0;
	m_cmbCodeStreamType.InsertString(nIndex, _T("��������"));
	m_cmbCodeStreamType.SetItemData(nIndex++, 0);
	m_cmbCodeStreamType.InsertString(nIndex, _T("������"));
	m_cmbCodeStreamType.SetItemData(nIndex++, 1);
	m_cmbCodeStreamType.InsertString(nIndex, _T("������"));
	m_cmbCodeStreamType.SetItemData(nIndex++, 2);
	m_cmbCodeStreamType.SetCurSel(0);


	// 0�����д洢����1�����洢����2���ֱ��洢��
	nIndex = 0;
	m_cmbStorageType.InsertString(nIndex, _T("���д洢��"));
	m_cmbStorageType.SetItemData(nIndex++, 0);
	m_cmbStorageType.InsertString(nIndex, _T("���洢��"));
	m_cmbStorageType.SetItemData(nIndex++, 1);
	m_cmbStorageType.InsertString(nIndex, _T("�ֱ��洢��"));
	m_cmbStorageType.SetItemData(nIndex++, 2);
	m_cmbStorageType.SetCurSel(0);


	CheckDlgButton(IDC_CHK_ALARM_808_ALL, TRUE);
	OnBnClickedChkAlarm808All();

	CheckDlgButton(IDC_CHK_ALARM_1078_ALL, TRUE);
	OnBnClickedChkAlarm1078All();

	CString strAlarmTip;

	for (int i=0; i<32; i++)
	{
		CString strAlarm = theApp.Get808AlarmBitString(i);

		if (!strAlarm.IsEmpty())
		{
			strTemp.Format(_T("808 Check%d:%s\r\n"), i+1, strAlarm);
			strAlarmTip += strTemp;
		}
	}
	strAlarmTip += _T("\r\n\r\n\r\n\r\n");

	for (int i=0; i<32; i++)
	{
		CString strAlarm = theApp.Get1078VideoAlarmBitString(i);

		if (!strAlarm.IsEmpty())
		{
			strTemp.Format(_T("1078 Check%d:%s\r\n"), i+1, strAlarm);
			strAlarmTip += strTemp;
		}
	}

	SetDlgItemText(IDC_ED_ALARM_TIP, strAlarmTip);


	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}

void CDlgRecSearch1078::OnBnClickedBtnRecSearch1078()
{

}

void CDlgRecSearch1078::OnBnClickedChkAlarm808All()
{
	static_assert((IDC_CHK_ALARM_808_32 - IDC_CHK_ALARM_808_1) == 31, "CDlgRecSearch1078::OnBnClickedBtnRecSearch1078()");
	BOOL bCheck = IsDlgButtonChecked(IDC_CHK_ALARM_808_ALL);
	for (int nID = IDC_CHK_ALARM_808_1; nID <= IDC_CHK_ALARM_808_32; nID++)
	{
		CheckDlgButton(nID, bCheck);
	}
}

void CDlgRecSearch1078::OnBnClickedChkAlarm1078All()
{
	static_assert((IDC_CHK_ALARM_1078_32 - IDC_CHK_ALARM_1078_1) == 31, "CDlgRecSearch1078::OnBnClickedChkAlarm808All()");
	BOOL bCheck = IsDlgButtonChecked(IDC_CHK_ALARM_1078_ALL);
	for (int nID = IDC_CHK_ALARM_1078_1; nID <= IDC_CHK_ALARM_1078_32; nID++)
	{
		CheckDlgButton(nID, bCheck);
	}
}
