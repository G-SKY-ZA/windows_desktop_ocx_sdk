#include "StdAfx.h"
#include "AlarmTypeParse.h"


CString GetFenceAlarm(GPSAlarmInfo_S& ArmInfo)
{
	CString strMark = _T(""); 
	CString strType = _T("");
	/*
	int nAlarmType = ArmInfo.AlarmType;
	switch (nAlarmType)
	{
	case GPS_ALARM_TYPE_IN_FENCE:
	case GPS_ALARM_TYPE_END_IN_FENCE:
		strMark = LOADSTRINGEX(ID_STR_ALARM_TYPE_FENCE_IN);
		break;
	case GPS_ALARM_TYPE_OUT_FENCE:
	case GPS_ALARM_TYPE_END_OUT_FENCE:
		strMark = LOADSTRINGEX(ID_STR_ALARM_TYPE_FENCE_OUT);
		break;
	case GPS_ALARM_TYPE_IN_FENCE_OVER_SPEED:
	case GPS_ALARM_TYPE_END_IN_FENCE_OVER_SPEED:
		strMark = LOADSTRINGEX(ID_STR_ALARM_TYPE_FENCE_IN_OVER_SPEED);
		break;
	case GPS_ALARM_TYPE_OUT_FENCE_OVER_SPEED:
	case GPS_ALARM_TYPE_END_OUT_FENCE_OVER_SPEED:
		strMark = LOADSTRINGEX(ID_STR_ALARM_TYPE_FENCE_OUT_OVER_SPEED);
		break;
	case GPS_ALARM_TYPE_IN_FENCE_LOW_SPEED:
	case GPS_ALARM_TYPE_END_IN_FENCE_LOW_SPEED:
		strMark = LOADSTRINGEX(ID_STR_ALARM_TYPE_FENCE_IN_LOWE_SPEED);
		break;
	case GPS_ALARM_TYPE_OUT_FENCE_LOW_SPEED:
	case GPS_ALARM_TYPE_END_OUT_FENCE_LOW_SPEED:
		strMark = LOADSTRINGEX(ID_STR_ALARM_TYPE_FENCE_OUT_LOWE_SPEED);
		break;
	case GPS_ALARM_TYPE_IN_FENCE_STOP:
	case GPS_ALARM_TYPE_END_IN_FENCE_STOP:
		strMark = LOADSTRINGEX(ID_STR_ALARM_TYPE_FENCE_IN_STOP);
		break;
	case GPS_ALARM_TYPE_OUT_FENCE_STOP:
	case GPS_ALARM_TYPE_END_OUT_FENCE_STOP:
		strMark = LOADSTRINGEX(ID_STR_ALARM_TYPE_FENCE_OUT_STOP);
		break;
	}

	switch(nAlarmType)
	{
	case GPS_ALARM_TYPE_END_IN_FENCE:
	case GPS_ALARM_TYPE_END_OUT_FENCE:
	case GPS_ALARM_TYPE_END_IN_FENCE_OVER_SPEED:
	case GPS_ALARM_TYPE_END_OUT_FENCE_OVER_SPEED:
	case GPS_ALARM_TYPE_END_IN_FENCE_LOW_SPEED:
	case GPS_ALARM_TYPE_END_OUT_FENCE_LOW_SPEED:
	case GPS_ALARM_TYPE_END_IN_FENCE_STOP:
	case GPS_ALARM_TYPE_END_OUT_FENCE_STOP:
		strType = LOADSTRINGEX(ID_STR_ALARM_END);
		break;
	case GPS_ALARM_TYPE_IN_FENCE:
	case GPS_ALARM_TYPE_OUT_FENCE:
	case GPS_ALARM_TYPE_IN_FENCE_OVER_SPEED:
	case GPS_ALARM_TYPE_OUT_FENCE_OVER_SPEED:
	case GPS_ALARM_TYPE_IN_FENCE_LOW_SPEED:
	case GPS_ALARM_TYPE_OUT_FENCE_LOW_SPEED:
	case GPS_ALARM_TYPE_IN_FENCE_STOP:
	case GPS_ALARM_TYPE_OUT_FENCE_STOP:
		strType = LOADSTRINGEX(ID_STR_ALARM_START);
		break;
	}

	strMark += strType;
	*/
	return strMark;
}

void GetSignalLossAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_GPS_SIGNAL_LOSS == ArmInfo.AlarmType)  //GPSѶ�Ŷ�ʧ��ʼ
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);	
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);            //GPSѶ�Ŷ�ʧ����
// 	}
//	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_GPS_SIGNAL_LOSS), strMark);  //GPSѶ�Ŷ�ʧ����
}
void GetUserDefineAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_USEDEFINE == ArmInfo.AlarmType)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_USEDEFINE), strMark);
}
CString GetIOName(int nIO)
{
	CString str;
	str.Format("IO-%d", nIO);
	return str;
}
void GetIOAlarm(int nIO, GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
	CString strAlarm = _T("");
	strAlarm += GetIOName(nIO);
	
	if (GPS_ALARM_TYPE_IO_1 == ArmInfo.AlarmType
		|| GPS_ALARM_TYPE_IO_2 == ArmInfo.AlarmType
		|| GPS_ALARM_TYPE_IO_3 == ArmInfo.AlarmType
		|| GPS_ALARM_TYPE_IO_4 == ArmInfo.AlarmType
		|| GPS_ALARM_TYPE_IO_5 == ArmInfo.AlarmType
		|| GPS_ALARM_TYPE_IO_6 == ArmInfo.AlarmType
		|| GPS_ALARM_TYPE_IO_7 == ArmInfo.AlarmType
		|| GPS_ALARM_TYPE_IO_8 == ArmInfo.AlarmType
		|| GPS_ALARM_TYPE_IO_9 == ArmInfo.AlarmType
		|| GPS_ALARM_TYPE_IO_10 == ArmInfo.AlarmType
		|| GPS_ALARM_TYPE_IO_11 == ArmInfo.AlarmType
		|| GPS_ALARM_TYPE_IO_12 == ArmInfo.AlarmType)
	{
		strMark = _T("start");//LOADSTRINGEX(ID_STR_ALARM_START);
	}
	else
	{
		strMark = _T("end");//LOADSTRINGEX(ID_STR_ALARM_END);
	}
	
	strType.Format(_T("%s %s"), strAlarm, strMark);
}
void GetUrgencyButtonAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
	CString strSecond = _T("");
// 	if (GPS_ALARM_TYPE_URGENCY_BUTTON == ArmInfo.AlarmType)
// 	{
// 		if (ArmInfo.Param[0] == 1)
// 		{
// 			strSecond.Format(_T("%d%s"), 1, LOADSTRINGEX(ID_STR_UP_GPS_UNIT));
// 		}
// 		else if (ArmInfo.Param[0] == 5)
// 		{
// 			strSecond.Format(_T("%d%s"), 5, LOADSTRINGEX(ID_STR_UP_GPS_UNIT));
// 		}
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	
// 	strType.Format(_T("%s%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_URGENCY_BUTTON), strSecond, strMark);
}
void GetShakeAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_SHAKE == ArmInfo.AlarmType)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_SHAKE), strMark);
}
CString FormatSecond2String(int nSecond)
{
	CString strRet;
	strRet.Format(_T("%02d:%02d:%02d"), nSecond/3600, nSecond%3600/60, nSecond%60);
	return strRet;
}
void GetparkTooLongAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_PARK_TOO_LONG == ArmInfo.AlarmType)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	
// 	CString strTemp, strKeepTime, strSetTime;
// 	if (ArmInfo.AlarmInfo)
// 	{
// 		strKeepTime.Format(_T("%s%s"), LOADSTRINGEX(ID_STR_DESC_PARK_LAST_TIME), FormatSecond2String(ArmInfo.AlarmInfo));
// 	}
// 	if (ArmInfo.Param[0])
// 	{
// 		strSetTime.Format(_T("%s%s"), LOADSTRINGEX(ID_STR_DESC_PARK_SETUP_TIME), FormatSecond2String(ArmInfo.Param[0]));
// 	}
// 	strDesc += strKeepTime;
// 	if (strDesc.IsEmpty() == FALSE)
// 	{
// 		strDesc += _T("");
// 	}
// 	strDesc += strSetTime;
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_PARK_TOO_LONG), strMark);
}
CString GetChannelString(int nChannel)
{
	CString str;
	str.Format("CH-%d", nChannel);
	return str;
}
void GetVideoLostAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_VIDEO_LOST == ArmInfo.AlarmType)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);	
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	strDesc = GetChannelString(pDev->GetID(), ArmInfo.AlarmInfo);
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_VIDEO_LOST), strMark);
}
void GetVideoMaskAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_VIDEO_MASK == ArmInfo.AlarmType)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 		strDesc = GetChannelString(ArmInfo.AlarmInfo);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_VIDEO_MASK), strMark);
}
void GetDoorOpenLawlessAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_DOOR_OPEN_LAWLESS == ArmInfo.AlarmType)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);	
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_DOOR_OPEN_LAWLESS), strMark);	
}
void GetWrongPwdAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_WRONG_PWD == ArmInfo.AlarmType)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_WRONG_PWD), strMark);
}
void GetFireLowlessAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_FIRE_LOWLESS == ArmInfo.AlarmType)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_FIRE_LOWLESS), strMark);
}
void GetTemperatorAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_TEMPERATOR == ArmInfo.AlarmType)
// 	{
// 		float fRealTmep = (ArmInfo.Param[0])/100.0;
// 		float fLowest = (ArmInfo.Param[1])/100.0;
// 		float fHightest = (ArmInfo.Param[2])/100.0;
// 		
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 		CString strTemp;
// 		if (0 == ArmInfo.AlarmInfo)
// 		{
// 			strTemp = LOADSTRINGEX(ID_STR_TEMPERATOR_DEVICE);
// 		}
// 		else if (1 == ArmInfo.AlarmInfo)
// 		{
// 			strTemp = LOADSTRINGEX(ID_STR_TEMPERATOR_MOTER);
// 		}
// 		else if (2 == ArmInfo.AlarmInfo)
// 		{
// 			strTemp = LOADSTRINGEX(ID_STR_TEMPERATOR_COACH);
// 		}
// 		strDesc.Format(_T("%s:%0.2f %s,%s:%0.2f %s, %s:%0.2f %s")
// 			, strTemp, fRealTmep ,LOADSTRINGEX(ID_STR_DLG_MOTION_UNIT_DC)
// 			,LOADSTRINGEX(ID_STR_DESC_TEMP_LOWEST), fLowest,LOADSTRINGEX(ID_STR_DLG_MOTION_UNIT_DC)
// 			, LOADSTRINGEX(ID_STR_DESC_TEMP_HIGHTEST) , fHightest,LOADSTRINGEX(ID_STR_DLG_MOTION_UNIT_DC));
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	
//	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_TEMPERATOR), strMark);
}
void GetDiskErrAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_DISK_ERROR == ArmInfo.AlarmType)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_DISK_ERROR), strMark);
}
//�ٶȵ�λ
#define SPEED_UNIT_KM	0	//����/Сʱ
#define SPEED_UNIT_MPH  1	//Ӣ��/Сʱ
#define SPEED_UNIT_KN	2	//����/Сʱ

//Ӣ��,����͹���Ļ���
#define UNIT_MPH_TO_KM	1.6093		//Ӣ��
#define UNIT_KN_TO_KM	1.852		//����
int GetDevSpeedUnit()
{
	return SPEED_UNIT_KM;
}
void GetOverSpeedAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	float fRealSpeed = (ArmInfo.Param[0])/100.0;
// 	float fLowest = (ArmInfo.Param[1])/100.0;
// 	float fHightest = (ArmInfo.Param[2])/100.0;
// 	
// 	if (GetDevSpeedUnit() == SPEED_UNIT_KM)  //Ĭ�Ϲ���
// 	{
// 		if (fHightest > 0.0)
// 		{
// 			strDesc.Format(_T("%s:%0.2f km/h, %s:%0.2f km/h, %s:%0.2f km/h")
// 				, LOADSTRINGEX(ID_STR_DESC_SPEED_ALARM), fRealSpeed 
// 				, LOADSTRINGEX(ID_STR_DESC_SPEED_LOWEST), fLowest
// 				, LOADSTRINGEX(ID_STR_DESC_SPEED_HIGHTEST), fHightest);
// 		}
// 		else
// 		{
// 			strDesc.Format(_T("%s:%0.2f km/h"), LOADSTRINGEX(ID_STR_DESC_SPEED_ALARM), fRealSpeed);
// 		}
// 	}
// 	else if (GetDevSpeedUnit() == SPEED_UNIT_MPH)  
// 	{
// 		fRealSpeed = fRealSpeed/UNIT_MPH_TO_KM;
// 		fLowest = fLowest/UNIT_MPH_TO_KM;
// 		fHightest = fHightest/UNIT_MPH_TO_KM;
// 		
// 		if (fHightest > 0.0)
// 		{
// 			strDesc.Format(_T("%s:%0.2f mp/h, %s:%0.2f mp/h, %s:%0.2f mp/h")
// 				, LOADSTRINGEX(ID_STR_DESC_SPEED_ALARM), fRealSpeed 
// 				, LOADSTRINGEX(ID_STR_DESC_SPEED_LOWEST), fLowest
// 				, LOADSTRINGEX(ID_STR_DESC_SPEED_HIGHTEST), fHightest);
// 		}
// 		else
// 		{
// 			strDesc.Format(_T("%s:%0.2f mp/h"), LOADSTRINGEX(ID_STR_DESC_SPEED_ALARM), fRealSpeed);
// 		}
// 	}
// 	else if (GetDevSpeedUnit() == SPEED_UNIT_KN)
// 	{
// 		fRealSpeed = fRealSpeed/UNIT_KN_TO_KM;
// 		fLowest = fLowest/UNIT_KN_TO_KM;
// 		fHightest = fHightest/UNIT_KN_TO_KM;
// 		if (fHightest > 0.0)
// 		{
// 			strDesc.Format(_T("%s:%0.2f kn, %s:%0.2f kn, %s:%0.2f kn")
// 				, LOADSTRINGEX(ID_STR_DESC_SPEED_ALARM), fRealSpeed 
// 				, LOADSTRINGEX(ID_STR_DESC_SPEED_LOWEST), fLowest
// 				, LOADSTRINGEX(ID_STR_DESC_SPEED_HIGHTEST), fHightest);
// 		}
// 		else
// 		{
// 			strDesc.Format(_T("%s:%0.2f kn"), LOADSTRINGEX(ID_STR_DESC_SPEED_ALARM), fRealSpeed);
// 		}
// 	}
// 
// 	if (GPS_ALARM_TYPE_OVERSPEED == ArmInfo.AlarmType)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 		strDesc = _T("");
// 	}
// 	
// 	if ( ArmInfo.AlarmInfo == 0)  //����
// 	{
// 		strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_EVENT_TYPE_OVERSPEED), strMark);
// 	}
// 	else if ( ArmInfo.AlarmInfo == 1)  //����
// 	{
// 		strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_LOW_SPEED), strMark);					
// 	}
}

CString GetMarkerName(int nMarkerID)
{
	CString str;
	str.Format("%d", nMarkerID);
	return str;
}

void GetFenceSpeedAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = GetMarkerName(ArmInfo.Param[0]);
	float fRealSpeed = ArmInfo.Gps.uiSpeed/10.0f;
	float fLowest = (ArmInfo.Param[1])/10.0f;
	float fHightest = (ArmInfo.Param[2])/10.0f;
	
// 	if (GetDevSpeedUnit() == SPEED_UNIT_KM)  //Ĭ�Ϲ���
// 	{
// 		strDesc.Format(_T("%s %s:%0.2f km/h, %s:%0.2f km/h, %s:%0.2f km/h"), strMark
// 			, LOADSTRINGEX(ID_STR_DESC_SPEED_ALARM), fRealSpeed 
// 			, LOADSTRINGEX(ID_STR_DESC_SPEED_LOWEST), fLowest
// 			, LOADSTRINGEX(ID_STR_DESC_SPEED_HIGHTEST), fHightest);
// 	}
// 	else if (GetDevSpeedUnit() == SPEED_UNIT_MPH)  
// 	{
// 		fRealSpeed = fRealSpeed/UNIT_MPH_TO_KM;
// 		fLowest = fLowest/UNIT_MPH_TO_KM;
// 		fHightest = fHightest/UNIT_MPH_TO_KM;
// 		
// 		strDesc.Format(_T("%s %s:%0.2f mp/h, %s:%0.2f mp/h, %s:%0.2f mp/h"), strMark
// 			, LOADSTRINGEX(ID_STR_DESC_SPEED_ALARM), fRealSpeed 
// 			, LOADSTRINGEX(ID_STR_DESC_SPEED_LOWEST), fLowest
// 			, LOADSTRINGEX(ID_STR_DESC_SPEED_HIGHTEST), fHightest);
// 	}
// 	else if (GetDevSpeedUnit() == SPEED_UNIT_KN)
// 	{
// 		fRealSpeed = fRealSpeed/UNIT_KN_TO_KM;
// 		fLowest = fLowest/UNIT_KN_TO_KM;
// 		fHightest = fHightest/UNIT_KN_TO_KM;
// 		
// 		strDesc.Format(_T("%s %s:%0.2f kn, %s:%0.2f kn, %s:%0.2f kn"), strMark
// 			, LOADSTRINGEX(ID_STR_DESC_SPEED_ALARM), fRealSpeed 
// 			, LOADSTRINGEX(ID_STR_DESC_SPEED_LOWEST), fLowest
// 			, LOADSTRINGEX(ID_STR_DESC_SPEED_HIGHTEST), fHightest);
// 	}
}
void GetBeyondBoundsAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_BEYOND_BOUNDS == ArmInfo.AlarmType)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 		CString strTemp;
// 		if (0 == ArmInfo.AlarmInfo)
// 		{
// 			strTemp = LOADSTRINGEX(ID_STR_DESC_BEYOND_BOUNDS_INT);
// 		}
// 		else
// 		{
// 			strTemp = LOADSTRINGEX(ID_STR_DESC_BEYOND_BOUNDS_OUT);
// 		}
// 		strDesc.Format(_T("%s, %s: %d"), strTemp, LOADSTRINGEX(ID_STR_DESC_BEYOND_BOUNDS_NO), ArmInfo.Param[0]);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_BEYOND_BOUNDS), strMark);
}
void GetDoorAbnormalAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T("");
// 	if (GPS_ALARM_TYPE_DOOR_ABNORMAL == ArmInfo.AlarmType)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 		CString strTemp;
// 		if (0 == ArmInfo.AlarmInfo)
// 		{
// 			strTemp = LOADSTRINGEX(ID_STR_DESC_DOOR_ABNORMAL_1);
// 		}
// 		else if (1 == ArmInfo.AlarmInfo)
// 		{
// 			strTemp = LOADSTRINGEX(ID_STR_DESC_DOOR_ABNORMAL_2);
// 		}
// 		else if (2 == ArmInfo.AlarmInfo)
// 		{
// 			strTemp = LOADSTRINGEX(ID_STR_DESC_DOOR_ABNORMAL_3);
// 		}
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 	
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_DOOR_ABNORMAL), strMark);
}
void GetMotionAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T(""); 
// 	if (GPS_ALARM_TYPE_MOTION == ArmInfo.AlarmType)  //�ƶ���ⱨ����ʼ
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);  //������ʼ			
// 		strDesc = GetChannelString(ArmInfo.AlarmInfo);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);   //��������
// 		strDesc = GetChannelString(ArmInfo.AlarmInfo);
// 	}
// 	
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_MOTION_DETECT), strMark);  
}
CString FormatYouliang2String(const UINT& uiYouLiang)
{
	CString str;
	float fYouliang = uiYouLiang/100.0f;
//	str.Format(_T("%0.2f %s"), fYouliang, LOADSTRINGEX(ID_STR_DLG_TRACK_DECALITRE));
	
	return str;
}
void GetOilAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strTmp;
// 	switch(ArmInfo.AlarmType)
// 	{
// 	case GPS_ALARM_TYPE_REFUEL:
// 	case GPS_ALARM_TYPE_END_REFUEL:
// 		strType = LOADSTRINGEX(ID_STR_DLG_ARMSETUP_ADD_OIL);
// 		strTmp = LOADSTRINGEX(ID_STR_EVENT_TYPE_REFUEL);
// 		break;
// 	case GPS_ALARM_TYPE_STILL_FUEL:
// 	case GPS_ALARM_TYPE_END_STILL_FUEL:
// 		strType = LOADSTRINGEX(ID_STR_DLG_ARMSETUP_DEC_OIL);
// 		strTmp = LOADSTRINGEX(ID_STR_EVENT_TYPE_STILL_FUEL);
// 		break;
// 		
// 	}
// 	//AlarmInfoΪ���͵�����(9999=99.99��)��Param[0]Ϊ����ǰ����
// 	strDesc.Format(_T("%s:%s, %s:%s"), LOADSTRINGEX(ID_STR_EVENT_TYPE_ALARM_OIL_BEGIN), 
// 		FormatYouliang2String(ArmInfo.Param[0]), strTmp, FormatYouliang2String(ArmInfo.AlarmInfo));
}

CString GetFatigueAlarmString(short nAlarmInfo)
{
	CString str;
// 	switch(nAlarmInfo)
// 	{
// 	case 0:
// 		break;
// 	case 1:
// 		str = LOADSTRINGEX(ID_STR_ALARM_TYPE_FATIGUE_TYPE_1);
// 		break;
// 	case 2:
// 		str = LOADSTRINGEX(ID_STR_ALARM_TYPE_FATIGUE_TYPE_2);
// 		break;
// 	case 3:
// 		str = LOADSTRINGEX(ID_STR_ALARM_TYPE_FATIGUE_TYPE_3);
// 		break;
// 	case 4:
// 		str = LOADSTRINGEX(ID_STR_ALARM_TYPE_FATIGUE_TYPE_4);
// 		break;
// 	}
	return str;
}

void GetFatigueAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	CString strMark = _T(""); 
// 	if (GPS_ALARM_TYPE_FATIGUE == ArmInfo.AlarmType)  //ƣ�ͼ�ʻ������ʼ
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);  //������ʼ			
// 		strDesc = GetFatigueAlarmString(ArmInfo.AlarmInfo);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);   //��������
// 		strDesc = GetFatigueAlarmString(ArmInfo.AlarmInfo);
// 	}
// 	
// 	strType.Format(_T("%s %s"), LOADSTRINGEX(ID_STR_ALARM_TYPE_FATIGUE), strMark); 
}


void GetEventFileUpload(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	//�ļ�����
// 	strType = LOADSTRINGEX(ID_STR_LOG_TYPE_UNKNOW);
// 	if (ArmInfo.AlarmInfo == GPS_FILE_ATTRIBUTE_RECORD)
// 	{
// 		strType = LOADSTRINGEX(ID_STR_ALARM_TYPE_RECORD_UPLOAD);
// 	}
// 	else if(ArmInfo.AlarmInfo == GPS_FILE_ATTRIBUTE_JPEG)
// 	{
// 		strType = LOADSTRINGEX(ID_STR_ALARM_TYPE_IMAGE_UPLOAD);
// 	}
// 	
// 	//¼������,¼���С,ͨ����,����
// 	USES_CONVERSION;
// 	strDesc.Format(_T("%s:,%s:%s,%s:%s,%s:%s"), 
// 		LOADSTRINGEX(ID_STR_DLG_REC_SEARCH_ST_REC_TYPE), GetRecTypeStr(ArmInfo.Param[1]),
// 		LOADSTRINGEX(ID_STR_DLG_REC_SEARCH_LST_DOWN_SIZE), GetFileSize(ArmInfo.Param[0]),
// 		LOADSTRINGEX(ID_STR_CHANNEL), pDev->GetChnName(ArmInfo.Param[3]),
//		LOADSTRINGEX(ID_STR_DLG_PATHSET_ST_FILE_NAME), A2W(ArmInfo.szDesc));
}
void GetAlarmFileUpload(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
// 	strType = LOADSTRINGEX(ID_STR_LOG_TYPE_UNKNOW);
// 	if (ArmInfo.srcAlarmType == GPS_FILE_ATTRIBUTE_RECORD)
// 	{
// 		strType = LOADSTRINGEX(ID_STR_ALARM_TYPE_RECORD_UPLOAD);
// 	}
// 	else if(ArmInfo.srcAlarmType == GPS_FILE_ATTRIBUTE_JPEG)
// 	{
// 		strType = LOADSTRINGEX(ID_STR_ALARM_TYPE_IMAGE_UPLOAD);
// 	}
// 	//¼������,¼���С,ͨ����,����
// 	USES_CONVERSION;
// 	strDesc.Format(_T("%s:%s,%s:%s,%s:%s,%s:%s"), 
// 		LOADSTRINGEX(ID_STR_DLG_RECS_ST_FILE_TYPE), GetRecTypeStr(ArmInfo.Param[2]),
// 		LOADSTRINGEX(ID_STR_DLG_REC_SEARCH_LST_DOWN_SIZE), GetFileSize(ArmInfo.Param[1]),
// 		LOADSTRINGEX(ID_STR_CHANNEL), pDev->GetChnName(ArmInfo.Param[0]),
// 		LOADSTRINGEX(ID_STR_DLG_PATHSET_ST_FILE_NAME), A2W(ArmInfo.szImgFile));
}
#define STATION_EVENT_IN_STATION		1	//��վ
#define STATION_EVENT_OUT_STATION		2	//��վ
#define STATION_EVENT_OVER_SPEED_START	3	//���ٿ�ʼ
#define STATION_EVENT_OVER_SPEED_END	4	//���ٽ���
#define STATION_EVENT_DELAY_START		5	//������ʼ
#define STATION_EVENT_DELAY_END			6	//��������
void GetEventStationInfo(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
// 	int nEventTypeID = 0;
// 	switch (ArmInfo.Param[0])
// 	{	
// 	case STATION_EVENT_IN_STATION:		//��վ
// 		nEventTypeID = ID_STR_DLG_REPORT_IN_STATION;
// 		break;
// 	case STATION_EVENT_OUT_STATION:		//��վ
// 		nEventTypeID = ID_STR_DLG_REPORT_OUT_STATION;
// 		break;
// 	case STATION_EVENT_OVER_SPEED_START:
// 		nEventTypeID = ID_STR_DLG_REPORT_OVER_SPEED_START;
// 		break;
// 	case STATION_EVENT_OVER_SPEED_END:
// 		nEventTypeID = ID_STR_DLG_REPORT_OVER_SPEED_END;
// 		break;
// 	case STATION_EVENT_DELAY_START:		//������ʼ
// 		nEventTypeID = ID_STR_DLG_REPORT_DELAY_START;
// 		break;
// 	case STATION_EVENT_DELAY_END:		//��������
// 		nEventTypeID = ID_STR_DLG_REPORT_DELAY_END;
// 		break;
// 	default:
// 		return;
// 	}
// 
// #if defined(_UNICODE) || defined(UNICODE)	
// 	USES_CONVERSION;	
// 	strDesc.Format(_T("%s(%s), %s(%s), BSM(%d), \
// 		%s, %s(%s), %s(%d)"), 
// 		LOADSTRINGEX(ID_STR_DLG_REPORT_STATION_NAME), A2W(ArmInfo.szImgFile),
// 		LOADSTRINGEX(ID_STR_DLG_REPORT_ROUTE_NAME), A2W(ArmInfo.szDesc), 
// 		ArmInfo.Param[1], 
// 		GetRunDir(ArmInfo.Param[2])/*LOADSTRINGEX(ID_STR_DLG_REPORT_RUN_DIC), ArmInfo.Param[2]*/, 
// 		LOADSTRINGEX(ID_STR_DLG_REPORT_AUTO_STATION), GetAutoStation(ArmInfo.Param[3]),
// 		LOADSTRINGEX(ID_STR_DLG_REPORT_RUN_NUM), ArmInfo.AlarmInfo);
// #else	
// 	strDesc.Format(_T("%s(%s), %s(%s), BSM(%d), \
// 		%s(%d), %s(%d), %s(%d)"), 
// 		LOADSTRINGEX(ID_STR_DLG_REPORT_STATION_NAME), ArmInfo.szImgFile,
// 		LOADSTRINGEX(ID_STR_DLG_REPORT_ROUTE_NAME), ArmInfo.szDesc, 
// 		ArmInfo.Param[1], 
// 		GetRunDir(ArmInfo.Param[2])/*LOADSTRINGEX(ID_STR_DLG_REPORT_RUN_DIC), ArmInfo.Param[2]*/, 
// 		LOADSTRINGEX(ID_STR_DLG_REPORT_AUTO_STATION), GetAutoStation(ArmInfo.Param[3]),
// 		LOADSTRINGEX(ID_STR_DLG_REPORT_RUN_NUM), ArmInfo.AlarmInfo);
// #endif	
// 
// 	strType = LOADSTRINGEX(nEventTypeID);
}

void GetAlarmCustom(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
// 	TCHAR szBuf[10240] = {0};
// 	CPluginAlarmMgr::GetInstance()->GetAlarmType(&ArmInfo, szBuf, sizeof(szBuf));
// 	strType = szBuf;
// 	memset(szBuf, 0, sizeof(szBuf));
// 	CPluginAlarmMgr::GetInstance()->GetAlarmInfo(&ArmInfo, szBuf, sizeof(szBuf));
// 	strDesc = szBuf;
}

//ҹ�䱨��
void GetNightDrivingAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
// 	CString strMark=_T("");
// 
// 	if (GPS_ALARM_TYPE_NIGHT_DRIVING)
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 	}
// 
// 	strType.Format(_T("%s %s"),LOADSTRINGEX(ID_STR_DLG_ARMSETUP_NIGHT_DRIVING),strMark);
}


//������ɣ�ɾ������2014/06/04 DKY ADD
void DelFinishedTeskAlarm(GPSAlarmInfo_S &ArmInfo, CString &strType, CString &strDesc)
{
//	PANE_EVENT()->DelFinishAlarm(ArmInfo.guid);
}

void GetGatheringAlarm(GPSAlarmInfo_S& ArmInfo, CString& strType, CString &strDesc)
{
// 	CString strMark=_T("");
// 
// 	if (GPS_ALARM_TYPE_GATHERING == ArmInfo.AlarmType)
// 	{
// 		//	strMark = LOADSTRINGEX(ID_STR_ALARM_START);
// 		if (ArmInfo.Param[0])
// 		{
// 			strDesc.Format(_T("%s(%d%s),%s(%d)"),
// 				LOADSTRINGEX(ID_STR_DESC_SPEED_TIME), ArmInfo.Param[0], LOADSTRINGEX(ID_STR_UP_GPS_UNIT), 
// 				LOADSTRINGEX(ID_STR_ALARM_TYPE_DEV_NUM), ArmInfo.Param[1]);
// 		}
// 	}
// 	else
// 	{
// 		strMark = LOADSTRINGEX(ID_STR_ALARM_END);
// 		if (ArmInfo.Param[0])
// 		{
// 			strDesc.Format(_T("%s(%d%s)"),
// 				LOADSTRINGEX(ID_STR_DESC_SPEED_TIME), ArmInfo.Param[0], LOADSTRINGEX(ID_STR_UP_GPS_UNIT));
// 		}
// 	}
// 
// 	strType.Format(_T("%s %s"),LOADSTRINGEX(ID_STR_ALARM_TYPE_GATHERING), strMark);

}

void FormatMDVRAlarm2String(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{
	switch(ArmInfo.AlarmType)
	{
	case GPS_ALARM_TYPE_GPS_SIGNAL_LOSS:
	case GPS_ALARM_TYPE_END_GPS_SIGNAL_LOSS:
		GetSignalLossAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_USEDEFINE:
	case GPS_ALARM_TYPE_END_USEDEFINE:
		GetUserDefineAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_IO_1:
	case GPS_ALARM_TYPE_END_IO_1:
		GetIOAlarm(0, ArmInfo, strType, strDesc);
		break;
    case GPS_ALARM_TYPE_IO_2:
	case GPS_ALARM_TYPE_END_IO_2:
		GetIOAlarm(1, ArmInfo, strType, strDesc);
		break;
    case GPS_ALARM_TYPE_IO_3:
    case GPS_ALARM_TYPE_END_IO_3:
		GetIOAlarm(2, ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_IO_4:
	case GPS_ALARM_TYPE_END_IO_4:
		GetIOAlarm(3, ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_IO_5:
	case GPS_ALARM_TYPE_END_IO_5:
		GetIOAlarm(4, ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_IO_6:
	case GPS_ALARM_TYPE_END_IO_6:
		GetIOAlarm(5, ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_IO_7:
	case GPS_ALARM_TYPE_END_IO_7:
		GetIOAlarm(6, ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_IO_8:
	case GPS_ALARM_TYPE_END_IO_8:
		GetIOAlarm(7, ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_IO_9:
	case GPS_ALARM_TYPE_END_IO_9:
		GetIOAlarm(8, ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_IO_10:
	case GPS_ALARM_TYPE_END_IO_10:
		GetIOAlarm(9, ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_IO_11:
	case GPS_ALARM_TYPE_END_IO_11:
		GetIOAlarm(10, ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_IO_12:
	case GPS_ALARM_TYPE_END_IO_12:
		GetIOAlarm(11, ArmInfo, strType, strDesc);
		break;

	case GPS_ALARM_TYPE_URGENCY_BUTTON:
	case GPS_ALARM_TYPE_END_URGENCY_BUTTON:
		GetUrgencyButtonAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_SHAKE:
	case GPS_ALARM_TYPE_END_SHAKE:
		GetShakeAlarm(ArmInfo, strType, strDesc);
		break;
		//ͣ��ʱ���������
	case GPS_ALARM_TYPE_PARK_TOO_LONG:
	case GPS_ALARM_TYPE_END_PARK_TOO_LONG:
		GetparkTooLongAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_VIDEO_LOST:
	case GPS_ALARM_TYPE_END_VIDEO_LOST:
		GetVideoLostAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_VIDEO_MASK:
	case GPS_ALARM_TYPE_END_VIDEO_MASK:
		GetVideoMaskAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_DOOR_OPEN_LAWLESS:
	case GPS_ALARM_TYPE_END_DOOR_OPEN_LAWLESS:
		GetDoorOpenLawlessAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_WRONG_PWD:
	case GPS_ALARM_TYPE_END_WRONG_PWD:
		GetWrongPwdAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_FIRE_LOWLESS:
	case GPS_ALARM_TYPE_END_FIRE_LOWLESS:
		GetFireLowlessAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_TEMPERATOR:
	case GPS_ALARM_TYPE_END_TEMPERATOR:
		GetTemperatorAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_DISK_ERROR:
	case GPS_ALARM_TYPE_END_DISK_ERROR:
		GetDiskErrAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_OVERSPEED:
	case GPS_ALARM_TYPE_END_OVERSPEED:
		GetOverSpeedAlarm(ArmInfo, strType, strDesc);
		break;

		//ҹ����ʹ��������
	case GPS_ALARM_TYPE_NIGHT_DRIVING:
	case GPS_ALARM_TYPE_END_NIGHT_DRIVING:
		GetNightDrivingAlarm(ArmInfo, strType, strDesc);
		break;

		//���ڱ���,2014/06/12 dky add
	case GPS_ALARM_TYPE_GATHERING:
	case GPS_ALARM_TYPE_END_GATHERING:
		GetGatheringAlarm(ArmInfo, strType, strDesc);
		break;

	case GPS_ALARM_TYPE_BEYOND_BOUNDS:
	case GPS_ALARM_TYPE_END_BEYOND_BOUNDS:
		GetBeyondBoundsAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_DOOR_ABNORMAL:
	case GPS_ALARM_TYPE_END_DOOR_ABNORMAL:
		GetDoorAbnormalAlarm(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_DEV_ONLINE:
		{
//			strType = LOADSTRINGEX(ID_STR_ALARM_TYPE_DEV_ONLINE);
		}
		break;
	case GPS_ALARM_TYPE_DEV_DISONLINE:
		{
//			strType = LOADSTRINGEX(ID_STR_ALARM_TYPE_DEV_DISONLINE);
		}
		break;

		//ACC��������
	case GPS_ALARM_TYPE_ACC_ON:
		{
//			strType = LOADSTRINGEX(ID_STR_ALARM_TYPE_ACC_ON);
		}
		break;

		//ACC�رձ���
	case GPS_ALARM_TYPE_ACC_OFF:
		{
//			strType = LOADSTRINGEX(ID_STR_ALARM_TYPE_ACC_OFF);
		}
		break;
	case GPS_ALARM_TYPE_MOTION:       //�ƶ���ⱨ����ʼ
	case GPS_ALARM_TYPE_END_MOTION:   //�ƶ���ⱨ������
		GetMotionAlarm(ArmInfo, strType,strDesc);
		break;

	case GPS_ALARM_TYPE_REFUEL:
	case GPS_ALARM_TYPE_END_REFUEL:
	case GPS_ALARM_TYPE_STILL_FUEL:
	case GPS_ALARM_TYPE_END_STILL_FUEL:
		GetOilAlarm(ArmInfo, strType,strDesc);
		break;

		//ƣ�ͼ�ʻ
	case GPS_ALARM_TYPE_FATIGUE:
	case GPS_ALARM_TYPE_END_FATIGUE:
		GetFatigueAlarm(ArmInfo, strType,strDesc);
		break;
		

		//�¼�
	case GPS_EVENT_TYPE_PARK:			//ͣ���¼�	Param[0]Ϊͣ��������Param[1]Ϊͣ��ǰ�ͺ�(9999=99.99��)��Param[2]Ϊͣ�����ͺ�
		break;
	case GPS_EVENT_TYPE_PARK_ACCON:		//ͣ��δϨ���¼�	Param[0]Ϊͣ��������Param[1]Ϊͣ��ǰ�ͺ�(9999=99.99��)��Param[2]Ϊͣ�����ͺ�
										//ͣ��δϨ���¼�һ�㴦��ͣ���¼������һ��ʱ���ڣ�11:00 - 11:20����ͣ����11:00 - 11:05 ����ͣ��δϨ��
		break;
	case GPS_EVENT_TYPE_NET_FLOW:		//����	Param[0]Ϊ��ǰʱ�䣨��λ�룬�磺7206 = ����02:06ʱ ����Param[1]Ϊ����������Param[2]Ϊ��������
		break;
	case GPS_EVENT_TYPE_REFUEL:			//����	AlarmInfoΪ���͵�����(9999=99.99��)��Param[0]Ϊ����ǰ�ͺ�
		break;
	case GPS_EVENT_TYPE_STILL_FUEL:		//͵��	AlarmInfoΪ͵�͵�����(9999=99.99��)��Param[0]Ϊ͵��ǰ�ͺ�
		break;
	case GPS_EVENT_TYPE_OVERSPEED:		//�����¼�	AlarmInfoΪ�ٶ�(999=99.9KM/H)��Param[0]���ٵ�ʱ�䣬Param[1]Ϊ�������ͣ������ٻ��߳����١���ʱ��Ч��
		break;
	case GPS_EVENT_TYPE_FENCE_ACCESS:	//���������¼�	 Param[0]�����ţ�Param[1]�����򾭶ȣ�Param[2]������γ�ȣ�Param[3]����ͣ��ʱ��(�룩
		break;
	case GPS_EVENT_TYPE_FENCE_PARK:		//����ͣ���¼�	 Param[0]�����ţ�Param[3]����ͣ��ʱ�䣨�룩
		break;

	case GPS_EVENT_TYPE_FILE_UPLOAD:	//ͼƬ�ļ�����¼���ļ��ϴ�
		GetEventFileUpload(ArmInfo, strType,strDesc);
		break;

	case  GPS_EVENT_TYPE_SEA_STATUS	://����״̬���� 1������ 2������ 3���⺣�������� 4���⺣������������
		break;

	case GPS_EVENT_TYPE_OVERSPEED_WARNING:	//����Ԥ��
		break;
	case GPS_EVENT_TYPE_LOWSPEED_WARNING:	//����Ԥ��
		break;
	case GPS_EVENT_TYPE_DRIVER:	//��ʻԱ��Ϣ�ɼ��ϱ� AlarmInfo��1��ʾ��¼��0��ʾ��ǩ��
		//szReserve ��ʾ˾�����ƣ�szDesc ��ʾ��֤���أ�szImgFile���� ';' �ָ� ������֤��;��ҵ�ʸ�֤����
		break;


	case GPS_ALARM_TYPE_DOWN_FINISH:
		GetAlarmFileUpload(ArmInfo, strType,strDesc);
		break;
	case GPS_EVENT_TYPE_STATION_INFO:
		GetEventStationInfo(ArmInfo, strType,strDesc);
		break;
	case GPS_ALARM_TYPE_CUSTOM:
		GetAlarmCustom(ArmInfo, strType, strDesc);
		break;
	case GPS_ALARM_TYPE_IN_FENCE:
	case GPS_ALARM_TYPE_OUT_FENCE:
	case GPS_ALARM_TYPE_IN_FENCE_STOP:
	case GPS_ALARM_TYPE_OUT_FENCE_STOP:
	case GPS_ALARM_TYPE_END_IN_FENCE:
	case GPS_ALARM_TYPE_END_OUT_FENCE:
	case GPS_ALARM_TYPE_END_IN_FENCE_STOP:
	case GPS_ALARM_TYPE_END_OUT_FENCE_STOP:
		{
			strType = GetFenceAlarm(ArmInfo);
			strDesc = GetMarkerName(ArmInfo.Param[0]);
		}
		break;
	case GPS_ALARM_TYPE_IN_FENCE_OVER_SPEED:
	case GPS_ALARM_TYPE_OUT_FENCE_OVER_SPEED:
	case GPS_ALARM_TYPE_IN_FENCE_LOW_SPEED:
	case GPS_ALARM_TYPE_OUT_FENCE_LOW_SPEED:
	case GPS_ALARM_TYPE_END_IN_FENCE_OVER_SPEED:
	case GPS_ALARM_TYPE_END_OUT_FENCE_OVER_SPEED:
	case GPS_ALARM_TYPE_END_IN_FENCE_LOW_SPEED:
	case GPS_ALARM_TYPE_END_OUT_FENCE_LOW_SPEED:
		{
			GetFenceSpeedAlarm(ArmInfo, strType, strDesc);
			strType = GetFenceAlarm(ArmInfo);
		}
		break;
	default :
		{
//			strType.Format(_T("%s(%d)"), LOADSTRINGEX(ID_STR_TYPE_UNKNOW), ArmInfo.AlarmType);
		}
		break;
	}
}

void FormatAlarm2String(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc)
{   
	FormatMDVRAlarm2String(ArmInfo, strType, strDesc);
}