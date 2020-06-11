// DlgDev3gConfig.cpp : implementation file
//

#include "stdafx.h"
#include "DlgDev3gConfig.h"
#include "resource.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#define WM_MSG_DEVICE_3G_INFO_GET WM_USER + 0x2101
#define WM_MSG_DEVICE_3G_INFO_SET WM_USER + 0x2102

#define WM_MSG_DEVICE_3G_INFO_CLEAR WM_USER + 0x2103
//#define WM_MSG_DEVICE_3G_INFO_ADJUST WM_USER + 0x2104

/////////////////////////////////////////////////////////////////////////////
// CDlgDev3gConfig dialog


CDlgDev3gConfig::CDlgDev3gConfig(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgDev3gConfig::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgDev3gConfig)
	m_strMonthUsed = _T("");
	m_strDayUsed = _T("");
	m_strPayDay = _T("");
	m_strMonthLimit = _T("");
	m_strDayLimit = _T("");
	m_strDayRemind = _T("");
	m_strMonthRemind = _T("");
	//}}AFX_DATA_INIT
	memset(m_szDevIDNO, 0, sizeof(m_szDevIDNO));
	m_lDev3gInfoGet = NULL;
	m_lDev3gInfoSet = NULL;
	m_lDev3gClearStatistic = NULL;    //���3G����ͳ��
}

void CDlgDev3gConfig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgDev3gConfig)
	DDX_Control(pDX, IDC_COMBO_ENABLE_MONITOR, m_CmbEnableMonitorConfig);
	DDX_Text(pDX, IDC_EDIT_MONTH_USED, m_strMonthUsed);
	DDV_MaxChars(pDX, m_strMonthUsed, 7);
	DDX_Text(pDX, IDC_EDIT_DAY_USED, m_strDayUsed);
	DDX_Control(pDX, IDC_CHECK_DAY_REMIND, m_checkDayRemind);
	DDX_Control(pDX, IDC_CHECK_MONTH_REMIND, m_checkMonthRemind);
	DDX_Control(pDX, IDC_BUT_CLEAR, m_btnClear);
	DDX_Control(pDX, IDC_BUT_CORRECT, m_btnCorrect);
	DDX_Control(pDX, IDOK, m_btnOK);
	DDX_Control(pDX, IDCANCEL_REFLESH, m_btnReflesh);
	DDX_Control(pDX, IDCANCEL, m_btnCancel);
	DDX_Text(pDX, IDC_EDIT_PAY_DAY, m_strPayDay);
	DDV_MaxChars(pDX, m_strPayDay, 2);
	DDX_Text(pDX, IDC_EDIT_MONTH_LIMINT, m_strMonthLimit);
	DDV_MaxChars(pDX, m_strMonthLimit, 7);
	DDX_Text(pDX, IDC_EDIT_DAY_LIMINT, m_strDayLimit);
	DDV_MaxChars(pDX, m_strDayLimit, 7);
	DDX_Text(pDX, IDC_EDIT_DAY_REMIND, m_strDayRemind);
	DDV_MaxChars(pDX, m_strDayRemind, 2);
	DDX_Text(pDX, IDC_EDIT_MONTH_REMIND, m_strMonthRemind);
	DDV_MaxChars(pDX, m_strMonthRemind, 2);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgDev3gConfig, CDialog)
	//{{AFX_MSG_MAP(CDlgDev3gConfig)
	ON_BN_CLICKED(IDC_BUT_CLEAR, OnButClear)
	ON_BN_CLICKED(IDC_BUT_CORRECT, OnButCorrect)
	ON_WM_DESTROY()
	ON_BN_CLICKED(IDCANCEL_REFLESH, OnReflesh)
	ON_CBN_SELCHANGE(IDC_COMBO_ENABLE_MONITOR, OnSelchangeComboEnableMonitor)
	//}}AFX_MSG_MAP
	ON_MESSAGE(WM_MSG_DEVICE_3G_INFO_GET, OnGetDevice3gParameterMsg)
	ON_MESSAGE(WM_MSG_DEVICE_3G_INFO_SET, OnSetDevice3gParameterMsg)
	ON_MESSAGE(WM_MSG_DEVICE_3G_INFO_CLEAR, OnClearDevice3gParameterMsg)
//	ON_MESSAGE(WM_MSG_DEVICE_3G_INFO_ADJUST, OnAjustDevice3gParameterMsg)
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CDlgDev3gConfig message handlers

void CDlgDev3gConfig::EnabelCtrl(BOOL bIsEnabel)
{
	GetDlgItem(IDC_EDIT_MONTH_USED_CONFIG)->EnableWindow(bIsEnabel);
	GetDlgItem(IDC_EDIT_MONTH_TELL_TO)->EnableWindow(bIsEnabel);
	GetDlgItem(IDC_EDIT_PAY_DAY)->EnableWindow(bIsEnabel);
	GetDlgItem(IDC_EDIT_EVERY_TELL)->EnableWindow(bIsEnabel);
	GetDlgItem(IDC_EDIT_MONTH_TELL_TO)->EnableWindow(bIsEnabel);
	GetDlgItem(IDC_EDIT_PAY_DAY)->EnableWindow(bIsEnabel);
	GetDlgItem(IDC_EDIT_EVERY_TELL)->EnableWindow(bIsEnabel);
	GetDlgItem(IDC_COMBO_ENABLE_MONITOR)->EnableWindow(bIsEnabel);	
	GetDlgItem(IDC_BUT_CORRECT)->EnableWindow(bIsEnabel);
	GetDlgItem(IDC_BUT_CLEAR)->EnableWindow(bIsEnabel);
	GetDlgItem(IDOK)->EnableWindow(bIsEnabel);
	
	//EnableFlowConfig(bIsEnabel);
	if (!bIsEnabel)
	{
		EnableFlowConfig(bIsEnabel);
	}
	else
	{
		OnSelchangeComboEnableMonitor();
	}
}

// void CDlgDev3gConfig::FUNMCMsgCBGet3gInfo(GPSMCMsg_S* pMsg, void* pUsr)
// {
// 	CDlgDev3gConfig* pThis = (CDlgDev3gConfig*)pUsr;
// 	pThis->DoMCMsgCBGet3gInfo(pMsg);
// }
// 
// void CDlgDev3gConfig::DoMCMsgCBGet3gInfo(GPSMCMsg_S* pMsg)
// {
// 	if (!PostMessage(WM_MSG_DEVICE_3G_INFO_GET, (WPARAM)pMsg))
// 	{
// 		NETCLIENT_MCReleaseMsg(pMsg);
// 	}
// }

BOOL CDlgDev3gConfig::IsRunNian(int nYear)   //�ǲ�������
{
	BOOL bYear = FALSE;        //Ĭ�� ƽ��
	if (((nYear % 4) == 0 && (nYear % 100) != 0) || (nYear % 400) == 0)   //������
	{
		bYear = TRUE;
	}
	
	return bYear;
}

int CDlgDev3gConfig::GetMonthDay(int nMonth,int nYear)
{
	int nMonthDay = 0;

	if (nMonth == 1 || nMonth == 3
		|| nMonth == 5 || nMonth == 7
		|| nMonth == 8 || nMonth == 10 || nMonth ==12 )
	{
		nMonthDay = 31;
	}
	else if (nMonth == 4 || nMonth == 6
		|| nMonth == 9 || nMonth == 11)
	{
		nMonthDay = 30;
	}
	else if (nMonth == 2)
	{
		if (IsRunNian(nYear))                //����
		{
			nMonthDay = 29;			
		}
		else                                //ƽ��
		{
			nMonthDay = 28;	
		}
	}

	return nMonthDay;
}

int CDlgDev3gConfig::GetDistanceDay(int nCurrentDay,int nMonthDay,int nYear)
{
	CTime tm = CTime::GetCurrentTime();
	int nCurrentMonthDayCount = GetMonthDay(tm.GetMonth(),nYear);   //��ȡ��ǰ�·ݵ�����
	int nSurplus = 0;
	if ( nCurrentDay < nMonthDay )             //�ڵ���
	{
		nSurplus = nMonthDay - nCurrentDay + 1;
	}
	else if ( nCurrentDay > nMonthDay )       //����
	{
		nSurplus = nCurrentMonthDayCount - nCurrentDay +  nMonthDay + 1;
	}
	else if (nCurrentDay == nMonthDay)        //��ͬ��
	{
		nSurplus = nCurrentMonthDayCount;
	}

	return nSurplus;
}

LRESULT CDlgDev3gConfig::OnGetDevice3gParameterMsg(WPARAM wParam, LPARAM lParam)
{
	{
		if (GPS_OK == pMsg->nResult)
		{
			GPSNetFlowStatistics_S* pFlowStatistics = (GPSNetFlowStatistics_S*)pMsg->pParam[0];
	
			float fToday = pFlowStatistics->fFlowUsedToday;             //����ʹ��
			m_strDayUsed.Format(_T("%0.2f"),fToday);
			SetDlgItemText(IDC_EDIT_DAY_USED,m_strDayUsed);

			float fMonth = pFlowStatistics->fFlowUsedMonth;             //����ʹ��
			m_strMonthUsed.Format(_T("%0.2f"),fMonth);
			SetDlgItemText(IDC_EDIT_MONTH_USED,m_strMonthUsed);

			float fTotalFlow = pFlowStatistics->FlowParam.fMonthLimit;   //�����޶�
			CString strMonthLimit;    
			strMonthLimit.Format(_T("%0.2f"),fTotalFlow),
			SetDlgItemText(IDC_EDIT_MONTH_LIMIT,strMonthLimit);
			 
            float fMonthSurplus = fTotalFlow - fMonth;               //����ʣ��
			CString strMonthSurplus;
			strMonthSurplus.Format(_T("%0.2f"),fMonthSurplus);
			SetDlgItemText(IDC_EDIT_MONTH_HAVE,strMonthSurplus);  
			
			int nMonthDay = pFlowStatistics->FlowParam.nMonthTotleDay;     //�½���
			CTime tm = CTime::GetCurrentTime();
			int nCurrentDay = tm.GetDay();
			int nYear = tm.GetYear();		
			int nSurplus = GetDistanceDay(nCurrentDay,nMonthDay,nYear); //�õ���������յ�����
			CString strSurplus;
			strSurplus.Format(_T("%d"),nSurplus);
			SetDlgItemText(IDC_EDIT_TO_PAY_DAY,strSurplus);

			//������������
			m_strMonthLimit.Format(_T("%d"), (int)fTotalFlow);                          //���޶�
			m_strDayLimit.Format(_T("%d"), (int)pFlowStatistics->FlowParam.fDayLimit);
			m_strMonthRemind.Format(_T("%d"), pFlowStatistics->FlowParam.nMonthRemind);   //������
	        m_strDayRemind.Format(_T("%d"), pFlowStatistics->FlowParam.nDayRemind);       //������
			m_strPayDay.Format(_T("%d"), pFlowStatistics->FlowParam.nMonthTotleDay);      //�½���
			if (pFlowStatistics->FlowParam.nIsOpenDayFlowRemind)		//�����ѿ���
			{
				m_checkDayRemind.SetCheck(1);
			}
			else
			{
				m_checkDayRemind.SetCheck(0);
			}

			if (pFlowStatistics->FlowParam.nIsOpenMonthFlwRemind)		//�����ѿ���
			{
				m_checkMonthRemind.SetCheck(1);
			}
			else
			{
				m_checkMonthRemind.SetCheck(0);
			}


			if (pFlowStatistics->FlowParam.nIsOpenFlowCount)  //�Ƿ����������
			{
				m_CmbEnableMonitorConfig.SetCurSel(1);
			}
			else
			{
				m_CmbEnableMonitorConfig.SetCurSel(0);
			}

			m_NetParam = *pFlowStatistics;

			EnabelCtrl(TRUE);

			SetDlgItemText(IDC_STATIC_TIP_INFO,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_GET_3G_INFO_SUCC));
			UpdateData(FALSE);

			OnSelchangeComboEnableMonitor();

			StopGet3gInfo();
		}
		else
		{
			CString strTip = LOADSTRINGEX(ID_STR_DLG_3G_FLOW_GET_3G_INFO_FAIL);//"��ȡ�豸3G��Ϣʧ�ܣ�ԭ��";
			strTip += GETErrorString(pMsg->nResult);
			SetDlgItemText(IDC_STATIC_TIP_INFO,strTip);
			EnabelCtrl(FALSE);
			StopGet3gInfo();
		}	
	}
	
	return 0;
}

void CDlgDev3gConfig::StartGet3GParmer()
{
	SetDlgItemText(IDC_STATIC_TIP_INFO,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_GET_3G_INFO_WAIT));//"���ڻ�ȡ�豸��Ϣ����ȴ�...."
	NETCLIENT_MCReadNetFlowStatistics(m_pDevice->GetDeviceInfo()->szIDNO,this,FUNMCMsgCBGet3gInfo,&m_lDev3gInfoGet);
}

void CDlgDev3gConfig::Loadlanguage()
{
	SetDlgItemText(IDC_STATIC_STATUS_3G,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_USED_STATUS));   //GPRS/3Gʹ��״̬    
    SetDlgItemText(IDC_STATIC_TODAY_USER,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_TODAY_USE));  //��������
	SetDlgItemText(IDC_STATIC_MONTH_USER,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_CURRENT_MONTH_USE));  //����ʣ��
	SetDlgItemText(IDC_STATIC_MONTH_HAVE,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_CURRENT_DAY_USE));   //����ʣ��
	SetDlgItemText(IDC_STATIC_MONTH_LIMIT,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_CURRENT_LIMIT));//�����޶�
	SetDlgItemText(IDC_STATIC_TO_PAY_DAY,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_CON_PAY_DAY));  //�ݽ�����
	SetDlgItemText(IDC_STATIC_SET_3G ,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_CONFIG));          //3G��������
	SetDlgItemText(IDC_STATIC_MONTH_LMT,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_MONTH_PACKAGE));  //ÿ���ײ��޶�
	SetDlgItemText(IDC_STATIC_MONTH_TELL_TO,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_MONTH_USE_TELL));//ÿ����������
	SetDlgItemText(IDC_STATIC_PAY_DAY,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_PAY_DAY));            //������
	SetDlgItemText(IDC_STATIC_EVERY_TELL,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_DAY_TELL));        //ÿ������
	SetDlgItemText(IDC_STATIC_ENABLE_MONITOR,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_MONTOR_ENABLE));
	SetDlgItemText(IDC_BUT_CORRECT,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_ADJUST));   //����У��
	SetDlgItemText(IDC_BUT_CLEAR,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_CLEAR_DATA)); //���ͳ������

	SetDlgItemText(IDOK,LOADSTRINGEX(ID_STR_DLG_PARAMER_CONFIG));   //����
	SetDlgItemText(IDCANCEL_REFLESH,LOADSTRINGEX(ID_STR_DLG_DEVINFO_REFRESH));  //ˢ��
	SetDlgItemText(IDCANCEL,LOADSTRINGEX(ID_STR_EXIT));   //�˳�

	SetDlgItemText(IDC_STATIC_1,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_UNIT));	
	SetDlgItemText(IDC_STATIC_2,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_UNIT));	
	SetDlgItemText(IDC_STATIC_3,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_UNIT));	
	SetDlgItemText(IDC_STATIC_4,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_UNIT));	
	SetDlgItemText(IDC_STATIC_5,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_UNIT));	
 	SetDlgItemText(IDC_STATIC_7,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_UNIT));	

	SetDlgItemText(IDC_STATIC_D,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_TH));
	SetDlgItemText(IDC_STATIC_DAY,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_DAY));

	SetDlgItemText(IDC_STATIC_FLOW_ALARM,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_REMINDE));
	SetDlgItemText(IDC_CHECK_DAY_REMIND,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_OPEN_DAY_REMINDE));
	SetDlgItemText(IDC_STATIC_DAY_REMIND,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_DAY_REMINDE));
	SetDlgItemText(IDC_CHECK_MONTH_REMIND,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_OPEN_MONTH_REMINDE));
	SetDlgItemText(IDC_STATIC_MONTH_TELL_TO,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_MONTH_REMINDE));	
	SetDlgItemText(IDC_STATIC_DAY_LIMIT,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_DAY_LIMIT));	
}

BOOL CDlgDev3gConfig::OnInitDialog() 
{
	CDialog::OnInitDialog();

	Loadlanguage();

	SetWindowText(m_szDevIDNO);
	
	int index = 0;
	m_CmbEnableMonitorConfig.InsertString(index++, "��");//"��");
	m_CmbEnableMonitorConfig.InsertString(index, "��");//"��");
	m_CmbEnableMonitorConfig.SetCurSel(index);

	EnabelCtrl(FALSE);
	StartGet3GParmer();
	
	return TRUE;  
}

void CDlgDev3gConfig::FUNMCMsgCBSet3gInfo(GPSMCMsg_S* pMsg, void* pUsr)
{
	CDlgDev3gConfig* pThis = (CDlgDev3gConfig*)pUsr;
	pThis->DoMCMsgCBSet3gInfo(pMsg);
}

void CDlgDev3gConfig::DoMCMsgCBSet3gInfo(GPSMCMsg_S* pMsg)
{
	if (!PostMessage(WM_MSG_DEVICE_3G_INFO_SET,(WPARAM)pMsg))
	{
		NETCLIENT_MCReleaseMsg(pMsg);
	}
}

void CDlgDev3gConfig::StopClear3gStatistic()
{
	if (m_lDev3gClearStatistic)    //���3G����ͳ��
	{
		NETCLIENT_MCReleaseHandle(m_lDev3gClearStatistic);
		m_lDev3gClearStatistic = NULL;
	}
}

void CDlgDev3gConfig::StopGet3gInfo()
{
	if (m_lDev3gInfoGet)    //�ͷŻ�ȡ3G��Ϣ���
	{		
		NETCLIENT_MCReleaseHandle(m_lDev3gInfoGet);
		m_lDev3gInfoGet = NULL;	
	}
}

void CDlgDev3gConfig::StopSet3gInfo()
{
	if (m_lDev3gInfoSet)   //�ͷ�����3G��Ϣ���
	{
		NETCLIENT_MCReleaseHandle(m_lDev3gInfoSet);
		m_lDev3gInfoSet = NULL;	
	}
}

LRESULT CDlgDev3gConfig::OnSetDevice3gParameterMsg(WPARAM wParam, LPARAM lParam)
{
	GPSMCMsg_S* pMsg =(GPSMCMsg_S*)wParam;
	if (pMsg != NULL)
	{
		if (GPS_OK == pMsg->nResult)
		{
			StopSet3gInfo();
			SetDlgItemText(IDOK,LOADSTRINGEX(ID_STR_DLG_PARAMER_CONFIG));
			SetDlgItemText(IDC_STATIC_TIP_INFO,LOADSTRINGEX(ID_STR_DLG_3G_FLOW_SET_3G_INFO_SUCC));//"�����豸3G��Ϣ���óɹ�!");
			EnabelCtrl(TRUE);
		}
		else
		{
			StopSet3gInfo();
			SetDlgItemText(IDOK,LOADSTRINGEX(ID_STR_DLG_PARAMER_CONFIG));
			EnabelCtrl(TRUE);
			CString strTip = LOADSTRINGEX(ID_STR_DLG_3G_FLOW_SET_3G_INFO_FAIL);//"��ȡ�豸3G��Ϣʧ�ܣ�ԭ��";
			strTip += GETErrorString(pMsg->nResult);
			SetDlgItemText(IDC_STATIC_TIP_INFO,strTip);
		}	
	}
	
	return 0;
}

//����
void CDlgDev3gConfig::OnOK() 
{
	// TODO: Add extra validation here
	if (m_CmbEnableMonitorConfig.GetCurSel() == 1)
	{
		//�ж��½���
		if (!CheckEditNumber(this, IDC_EDIT_PAY_DAY, 1, 31))
		{
			MSG_BOX_ID(ID_STR_DLG_3G_FLOW_MONTH_BETWEEN_TIP);
			return ;
		}
		
		const int MAX_FLOW_MB = 1024000;
		
		//ÿ���ײ��޶�
		if (!CheckEditNumber(this, IDC_EDIT_MONTH_LIMINT, 0, MAX_FLOW_MB))
		{
			MSG_BOX_ID(ID_STR_DLG_3G_FLOW_MONTH_FLOW_TIP);
			return ;
		}
		
		//ÿ���ײ��޶�
		if (!CheckEditNumber(this, IDC_EDIT_DAY_LIMINT, 0, MAX_FLOW_MB))
		{
			MSG_BOX_ID(ID_STR_DLG_3G_FLOW_DALY_FLOW_TIP);
			return ;
		}
		
		if (m_checkDayRemind.GetCheck())
		{
			//ÿ�������޶�
			if (!CheckEditNumber(this, IDC_EDIT_DAY_REMIND, 0, 99))
			{
				MSG_BOX_ID(ID_STR_DLG_3G_FLOW_DAY_FLOW_REMIND_TIP);
				return ;
			}
		}
		
		if (m_checkMonthRemind.GetCheck())
		{
			//ÿ�������޶�
			if (!CheckEditNumber(this, IDC_EDIT_MONTH_REMIND, 0, 99))
			{
				MSG_BOX_ID(ID_STR_DLG_3G_FLOW_MONTH_FLOW_REMIND_TIP);
				return ;
			}
		}
	}

	GetDlgItem(IDC_EDIT_MONTH_LIMINT)->GetWindowText(m_strMonthLimit);
	m_NetParam.FlowParam.fMonthLimit = _tstof(m_strMonthLimit) ;
	GetDlgItem(IDC_EDIT_DAY_LIMINT)->GetWindowText(m_strDayLimit);
	m_NetParam.FlowParam.fDayLimit = _tstof(m_strDayLimit);
	
	GetDlgItem(IDC_EDIT_PAY_DAY)->GetWindowText(m_strPayDay);
	m_NetParam.FlowParam.nMonthTotleDay = _ttoi(m_strPayDay);
	if (m_NetParam.FlowParam.nMonthTotleDay < 0 || m_NetParam.FlowParam.nMonthTotleDay > 31)
	{
		m_NetParam.FlowParam.nMonthTotleDay = 1;
	}
	GetDlgItem(IDC_EDIT_MONTH_REMIND)->GetWindowText(m_strMonthRemind);
	m_NetParam.FlowParam.nMonthRemind = _ttoi(m_strMonthRemind);
	GetDlgItem(IDC_EDIT_DAY_REMIND)->GetWindowText(m_strDayRemind);
	m_NetParam.FlowParam.nDayRemind = _ttoi(m_strDayRemind);

	m_NetParam.FlowParam.nIsOpenFlowCount = m_CmbEnableMonitorConfig.GetCurSel();
	m_NetParam.FlowParam.nIsOpenDayFlowRemind = m_checkDayRemind.GetCheck();
	m_NetParam.FlowParam.nIsOpenMonthFlwRemind = m_checkMonthRemind.GetCheck();

	EnabelCtrl(FALSE);
	SetDlgItemText(IDOK,LOADSTRINGEX(ID_STR_DLG_PARAMER_STOP_CONFIG));
	NETCLIENT_MCSetNetFlowParam(m_pDevice->GetDeviceInfo()->szIDNO, &m_NetParam,this, FUNMCMsgCBSet3gInfo,&m_lDev3gInfoSet);
}

//ȡ��
void CDlgDev3gConfig::OnCancel() 
{
	CDialog::OnCancel();
}

void CDlgDev3gConfig::FUNMCMsgCBClear3gStatistic(GPSMCMsg_S* pMsg, void* pUsr)
{
	CDlgDev3gConfig* pThis = (CDlgDev3gConfig*)pUsr;
	pThis->DoMCMsgCBClear3gStatistic(pMsg);
}

void CDlgDev3gConfig::DoMCMsgCBClear3gStatistic(GPSMCMsg_S* pMsg)
{
	if (!PostMessage(WM_MSG_DEVICE_3G_INFO_CLEAR,(WPARAM)pMsg))
	{
		NETCLIENT_MCReleaseMsg(pMsg);
	}
}

LRESULT CDlgDev3gConfig::OnClearDevice3gParameterMsg(WPARAM wParam, LPARAM lParam)
{
	GPSMCMsg_S* pMsg =(GPSMCMsg_S*)wParam;
	if (pMsg != NULL)
	{
		if (GPS_OK == pMsg->nResult)
		{
			StopClear3gStatistic();
			EnabelCtrl(TRUE);
		}
		else
		{
			StopClear3gStatistic();
			EnabelCtrl(TRUE);
		}	
	}
	
	return 0;
}

//���ͳ������
void CDlgDev3gConfig::OnButClear() 
{
	EnabelCtrl(FALSE);

	StopClear3gStatistic();

	NETCLIENT_MCClearNetFlowStatistics(m_pDevice->GetDeviceInfo()->szIDNO,this, FUNMCMsgCBClear3gStatistic,&m_lDev3gClearStatistic);
}

//У������
void CDlgDev3gConfig::OnButCorrect() 
{
	CDlg3gFlowManualAdjust dlg;
	dlg.SetDevcie(m_pDevice);	
	if (IDOK == dlg.DoModal())
	{
		if (dlg.SuccessAdjust())
		{
			m_strMonthUsed = dlg.GetAdjustValre();

			float fMonthSurplus = m_NetParam.FlowParam.fMonthLimit - _tstof(m_strMonthUsed); 
			
			CString strMonthSurplus;
			strMonthSurplus.Format(_T("%0.2f"),fMonthSurplus);
			SetDlgItemText(IDC_EDIT_MONTH_HAVE,strMonthSurplus); 
			UpdateData(FALSE);
		}
	}
}

void CDlgDev3gConfig::OnDestroy() 
{
	CDialog::OnDestroy();

	StopSet3gInfo();
	StopClear3gStatistic();
	StopGet3gInfo();
	
}

void CDlgDev3gConfig::OnReflesh() 
{
	// TODO: Add your control notification handler code here
	StopGet3gInfo();

	StartGet3GParmer();
}

void CDlgDev3gConfig::OnSelchangeComboEnableMonitor() 
{
	// TODO: Add your control notification handler code here
	BOOL bEnable = TRUE;
	if (0 == m_CmbEnableMonitorConfig.GetCurSel())
	{
		bEnable = FALSE;
	}

	EnableFlowConfig(bEnable);
}

void CDlgDev3gConfig::EnableFlowConfig(BOOL bEnable)
{
	GetDlgItem(IDC_EDIT_PAY_DAY)->EnableWindow(bEnable);
	GetDlgItem(IDC_EDIT_MONTH_LIMINT)->EnableWindow(bEnable);
	GetDlgItem(IDC_EDIT_DAY_LIMINT)->EnableWindow(bEnable);
//	GetDlgItem(IDC_EDIT_MONTH_USED)->EnableWindow(bEnable);
	GetDlgItem(IDC_CHECK_DAY_REMIND)->EnableWindow(bEnable);
	GetDlgItem(IDC_EDIT_DAY_REMIND)->EnableWindow(bEnable);
	GetDlgItem(IDC_CHECK_MONTH_REMIND)->EnableWindow(bEnable);
	GetDlgItem(IDC_EDIT_MONTH_REMIND)->EnableWindow(bEnable);
}


void COCXDemoDlg::OnGetDevNetFlowStatisticsEvent(LPCTSTR szDevIDNO, long nResult, float fFlowUsedToday
												 , float fFlowUsedMonth, long nStatisticsTime
												 , long nIsOpenFlowCount, long nIsOpenDayFlowRemind
												 , long nIsOpenMonthFlwRemind, float fDayLimit
												 , float fMonthLimit, long nDayRemind
												 , long nMonthRemind, long nMonthTotleDay)
{
	
}
void COCXDemoDlg::OnSetDevNetFlowStatisticsEvent(LPCTSTR szDevIDNO, long nResult)
{

}
