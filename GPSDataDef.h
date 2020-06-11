#ifndef _GPS_DATA_DEF_H_
#define _GPS_DATA_DEF_H_

#define GPS_DEV_ID_LEN						32
//#define GPS_MAX_DEV_CHN_NUM					16
#define GPS_MAX_DEV_CHN_NUM					12		//IO��Ŀ����Ϊ12����ͨ����Ŀ��16��Ϊ12��
#define GPS_MAX_DEV_IO_NUM_OLD				8
#define GPS_MAX_DEV_IO_NUM_NEW				12
#define GPS_MAX_TEMP_SENSOR_NUM				4

#define GPSSERVER_TYPE_LOGIN				1
#define GPSSERVER_TYPE_GATEWAY				2
#define GPSSERVER_TYPE_MEDIA				3
#define GPSSERVER_TYPE_USRMGR				4
#define GPSSERVER_TYPE_STORAGE				5
#define GPSSERVER_TYPE_WEB					6
#define GPSSERVER_TYPE_DOWN					7		//���ط�����
#define GPSSERVER_TYPE_MYSQL				8		//mysql���� hw 2013/12/27
#define GPSSERVER_TYPE_LICENSE				9		//��Ȩ������
#define GPSSERVER_TYPE_MANAGER				99		//���������

#define GPS_FILE_LOCATION_DEVICE			1		//�豸
#define GPS_FILE_LOCATION_STOSVR			2		//�洢������
#define GPS_FILE_LOCATION_LOCAL				3		//�ͻ��˱���
#define GPS_FILE_LOCATION_DOWNSVR			4		//���ط�����

#define GPS_FILE_ATTRIBUTE_JPEG				1
#define GPS_FILE_ATTRIBUTE_RECORD			2
///#define GPS_FILE_ATTRIBUTE_ALL			3		//����ʱʹ�ñ�ʾ��������¼���ļ�
#define GPS_FILE_ATTRIBUTE_LOG				4			
#define GPS_FILE_ATTRIBUTE_AUDIO			5

#define GPS_FILE_SOURCE_PLAN				1		//�洢�ƻ�����
#define GPS_FILE_SOURCE_UPLOAD				2		//�豸�����ϴ���

#define GPS_LOGIN_SUC						0		//Login direction server success
#define GPS_LOGIN_FAILED					1		//Login direction server failed
#define	GPS_LOGIN_DISCNT					2		//Login direction server disconnect
#define	GPS_LOGIN_NAME_ERR					3		//Login direction server user name error
#define	GPS_LOGIN_PWD_ERR					4		//Login direction server user pwd error
#define	GPS_LOGIN_FULL_ERR					5		//Login direction server ���û��������û�����
#define	GPS_LOGIN_VER_ERR					6		//Login direction server version error
#define	GPS_LOGIN_USR_CHANGE				7		//Login direction server ���û�������λ�ý��е�¼��
#define GPS_LOGIN_USR_DEL					8		//Login direction server ���û���ɾ����
#define	GPS_LOGIN_EXPIRED					9		//Login direction server use expired
#define	GPS_LOGIN_SERVER_EMPTY				10		//Login direction server �����߲������û���������Ϣ��
#define GPS_LOGIN_PRIVILEGE_CHANGE			11		//�û�Ȩ�޷��ͱ仯
#define	GPS_LOGIN_SVR_CONFIG_CHANGE			12		//������������Ϣ���ͱ仯

#define GPS_LOGIN_TYPE_GPS_CLIENT			1

#define GPS_DEV_DOWN_DEV					0
#define GPS_DEV_DOWN_GROUP					1
#define GPS_DEV_DOWN_FAILED					2
#define GPS_DEV_DOWN_SUC					3
#define GPS_DEV_DOWN_RELATION				4
#define GPS_DEV_DOWN_DATA					5

#define GPS_DOWN_CONFIG_DATA				1
#define GPS_DOWN_CONFIG_FAILED				2
#define GPS_DOWN_CONFIG_SUC					3
#define GPS_DOWN_MAP_MARKER					4		//��ͼ�����Ϣ
#define GPS_DOWN_MAP_LINE					5		//��ͼ��·��Ϣ
#define GPS_DOWM_MAP_TAB_INFO				6		//��ͼ�������

//hw 
#define GPS_VERSION_6_14_X_X				0		//6.14
#define GPS_VERSION_6_15_X_X				1		//6.15.X.X�汾,�޸��˴���UFT8��ʽ����
#define GPS_VERSION_CUR		GPS_VERSION_6_15_X_X	//��ǰ�汾

#define GPS_VERSION_EX_X_X					0		//6.18.0.2֮ǰ�汾�汾
#define GPS_VERSION_EX_6_18_0_2				1		//6.18.0.2�汾,�޸���TTS����1024����
#define GPS_VERSION_EX_7_0_0_12				2		//7.0.0.12�汾,��ͼ�ӷ��������� 
#define GPS_VERSION_EX_7_6_0_4				3		//7.6.0.4�汾,�ͻ���ʶ��������汾(�޸Ļ�ȡ��ͼ��ǩΪUTF8)
#define GPS_VERSION_EX_7_6_0_5				5		//7.6.0.5�汾,�ͻ���ʶ��������汾(�޸ķ���TTSΪUTF8)
#define GPS_VERSION_EX_CUR		GPS_VERSION_EX_7_6_0_5	//��ǰ�汾

//�������汾���Ͷ��� zjt 2014-01-05
#define GPS_SVR_VERSION_DEFUALT				0	//CMS������
#define GPS_SVR_VERSION_DJWL				1	//CMS������(DJWL)
#define GPS_SVR_VERSION_JT808				2	//JT808������


//hw 2013/1/19
//���ӷ��������������� 0-ʹ�þ�����IP�� 1-ʹ�ù�����IP
#define GPS_NET_TYPE_LAN		0
#define GPS_NET_TYPE_WAN		1

//�ͻ���������Ϣλ����
//0λ����������
#define GPS_DOWN_CONFIG_SVR_CONFIG			0
//1λ�û�Ȩ��
#define GPS_DOWN_CONFIG_PRIVILEG			1
//2λ��ͼ����
#define GPS_DOWN_CONFIG_MAP_CONFIG			2
//3λ�û���Ϣ
#define GPS_DOWN_CONFIG_USER_INFO			3
//4λ�û�����
#define	GPS_DWON_CONFIG_USER_TYPE			4
//5λ�ͻ��˹�������
#define	GPS_DWON_CONFIG_CLIENT_FUNCTION		5

#define GPS_DOWNLOAD_MSG_FAILED				1
#define GPS_DOWNLOAD_MSG_BEGIN				2
#define GPS_DOWNLOAD_MSG_FINISHED			3
#define GPS_DOWNLOAD_MSG_PROCESS			4

#define GPS_UPLOAD_MSG_FAILED				1
#define GPS_UPLOAD_MSG_FINISHED				2
#define GPS_UPLOAD_MSG_PROCESS				3

//�豸ģ��λ����
#define GPS_DEV_MOUDLE_VIDEO			0	//��Ƶ
#define GPS_DEV_MODULE_OIL_CONTROL		1	//��·����
#define GPS_DEV_MODULE_POWER_CONTROL	2	//��·����
#define GPS_DEV_MODULE_TTS				3	//tts����
#define GPS_DEV_MODULE_BK_TALK			4	//���ֶԽ�
#define GPS_DEV_MOUDLE_SNAPSHOT			5	//ץ��
#define GPS_DEV_MOUDLE_MONITOR			6	//����
#define GPS_DEV_MOUDLE_OIL_SEN			7	//����������
#define GPS_DEV_MOUDLE_TALK				8	//�Խ�
#define GPS_DEV_MOUDLE_ODB				9	//ODB����
#define GPS_DEV_MOUDLE_COUNT_PEOPLE		10	//����ͳ��ģ��

//�Ϸ���������ģ�鶨��
#define GPS_DEV_MOUDLE_OIL_SEN_V6		0	//V6�汾����ģ��

//���������
#define GPS_BROWSER_TYPE_IE				0
#define GPS_BROWSER_TYPE_WEBKIT			1




const int GPS_CTRL_TYPE_OIL_STOP			= 1;	//�Ͽ���·
const int GPS_CTRL_TYPE_OIL_RESTORE			= 2;	//�ָ���·
const int GPS_CTRL_TYPE_ELEC_STOP			= 3;	//�Ͽ���·
const int GPS_CTRL_TYPE_ELEC_RESTORE		= 4;	//�ָ���·
const int GPS_CTRL_TYPE_REBOOT				= 5;	//�������� 
const int GPS_CTRL_TYPE_RESET				= 6;	//�豸��λ
const int GPS_CTRL_TYPE_MOD_DEV_NUM_OR_GET_STATUS = 7;//�޸��豸�š���ȡ�豸״̬
const int GPS_CTRL_TYPE_3G_REBOOT_IP       =8;     //IP,3G,����

const int  GPS_CTRL_TYPE_SLEEP				= 7;	//����
const int  GPS_CTRL_TYPE_WAKE				= 8;	//����
//¼���ͨ����0��ʾͨ��1��1��ʾͨ��2     98��ʾ����ͨ��(TTX_CHANNEL_ALL)
const int  GPS_CTRL_TYPE_START_RECORD		= 9;	//��ʼ¼��	//�����ֽ�Ϊ¼���ͨ���ţ������ֽ�Ϊָ��
const int  GPS_CTRL_TYPE_STOP_RECORD		= 10;	//ֹͣ¼��	//�����ֽ�Ϊ¼���ͨ���ţ������ֽ�Ϊָ��
const int  GPS_CTRL_TYPE_START_CRUISE		= 11;	//�ͻ��˿�ʼ�Դ�ͨ��������ѯ�������ֽ�Ϊͨ���ţ������ֽ�Ϊָ��
const int  GPS_CTRL_TYPE_STOP_CRUISE		= 12;	//�ͻ���ֹͣ�Դ�ͨ��������ѯ�������ֽ�Ϊͨ���ţ������ֽ�Ϊָ��
const int  GPS_CTRL_TYPE_WRITE_LOG		= 13;	//������¼��־����	�������ֽڴ���0��ʾд��־��0��ʾ��д��־
const int  GPS_CTRL_TYPE_FORMAT_HDD		= 14;	//��ʽ��Ӳ��(��λ��ʾӲ�̺�,Ӳ�̺Ŵ�0��ʼ,��λ��ʾ�����)
const int  GPS_CTRL_TYPE_MILEAGE_CLEARED 	= 15;	//�������	
const int  GPS_CTRL_TYPE_FLIP_HORIZONTAL 	= 16;	//ˮƽ��ת	//�����ֽ�Ϊͨ���ţ������ֽ�Ϊָ��
const int  GPS_CTRL_TYPE_FLIP_VERTICAL 		= 17;	//��ֱ��ת	//�����ֽ�Ϊͨ���ţ������ֽ�Ϊָ��
const int  GPS_CTRL_TYPE_CLEAR_ALARM		= 18;	//�������

const int GPS_MNGCMD_SEND_SMS				= 1;    //���Ͷ���Ϣ
const int GPS_MNGCMD_SEND_TEXT				= 2;    //����TTS���豸�Ͻ��в��ŷ��͵��ļ�
const int GPS_MNGCMD_SEND_PTZ				= 3;    //PTZ����ָ��
const int GPS_MNGCMD_SEND_CTRL				= 4;    //���Ϳ���ָ�����͡��ϵ��
const int GPS_MNGCMD_READ_STATUS			= 5;    //��ȡ����״̬
const int GPS_MNGCMD_CHANGE_USR_PWD			= 6;    //�޸��û�����
const int GPS_MNGCMD_SET_GPS_INTERVAL		= 7;    //����GPS���ʱ��
const int GPS_MNGCMD_CHECK_CTRL_USR			= 8;	//���Ϳ�������ǰУ���û�
const int GPS_MNGCMD_READ_MOTION_PARAM		= 9;	//��ȡ�ƶ�������
const int GPS_MNGCMD_SET_MOTION_PARAM		= 10;   //�����ƶ�������
const int GPS_MNGCMD_READ_NETFLOW_STATISTICS	= 11;   //��ȡ������Ϣ
const int GPS_MNGCMD_SET_NETFLOW_PARAM			= 12;	//������������
const int GPS_MNGCMD_CLEAR_NETFLOW_STATISTICS	= 13;   //�������ͳ��
const int GPS_MNGCMD_ADJUST_NETFLOW_STATISTICS	= 14;	//��������ͳ��
const int GPS_MNGCMD_SET_USR_ALARMSHIELD	= 15;		//���ñ�������
const int GPS_MNGCMD_ADD_MAP_MARKER			= 16;		//��ӵ�ͼ�����Ϣ
const int GPS_MNGCMD_DEL_MAP_MARKER			= 17;		//ɾ����ͼ�����Ϣ
const int GPS_MNGCMD_SEND_DISPATCH_COMMAND	= 18;		//���͵���ָ����Ϣ
const int GPS_MNGCMD_ADD_MAP_MARKERINFO		= 19;		//��ӵ�ͼ�������
const int GPS_MNGCMD_SET_USER_MAP_CONFIG	= 20;		//�����û���ͼ����
const int GPS_MNGCMD_TRANSPARENT_DATA		= 24;		//͸������
const int GPS_MNGCMD_TRANSPARENT_CONFIG		= 25;		//����͸������
const int GPS_MNGCMD_FREE_PRESET_GET		= 26;		//��ȡ����Ԥ��λ
const int GPS_MNGCMD_SET_VIDEO_COLOR		= 27;		//������ɫ
const int GPS_MNGCMD_GET_VIDEO_COLOR		= 28;		//��ȡ��ɫ
const int GPS_MNGCMD_SET_DEV_FIX_GPS		= 29;		//�����豸��GPSλ��
const int GPS_MNGCMD_SET_DEV_OIL_RESISTANCE	= 30;		//�����豸�������̶�ֵ
const int GPS_MNGCMD_SET_DEV_HANDLE_ALARM   = 31;		//�豸��������
const int GPS_MNGCMD_ACK_809_PLATFORM		= 32;		//809�����ϢӦ��
const int GPS_MNGCMD_JT809_BUSINESS_PLATFORM	= 33;	//809���ҵ��

// const int GPS_MNGCMD_SET_VIDEO_CONFIG		= 21;		//�����豸��Ƶ����
// const int GPS_MNGCMD_SET_AUDIO_CONFIG		= 22;		//�����豸��Ƶ����
// const int GPS_MNGCMD_SET_PTZ_CONFIG			= 23;		//�����豸��̨����
// const int GPS_MNGCMD_GET_VIDEO_CONFIG		= 24;		//��ȡ�豸��Ƶ����
// const int GPS_MNGCMD_GET_AUDIO_CONFIG		= 25;		//��ȡ�豸��Ƶ����
// const int GPS_MNGCMD_GET_PTZ_CONFIG			= 26;		//��ȡ�豸��̨����

const int GPS_MAPMARKER_TYPE_POINT			= 1;		//��
const int GPS_MAPMARKER_TYPE_RECTANGLE		= 2;		//����
const int GPS_MAPMARKER_TYPE_POLYGON		= 3;		//�����
const int GPS_MAPMARKER_TYPE_LINE			= 4;		//·��
const int GPS_MAPMARKER_TYPE_CIRCLE			= 10;		//Բ

#include <tchar.h>
//�洢·�����壬�洢ʾ��	"E:\\gStorage\\RECORD_FILE\\100001\\2012-07-03\\"
const TCHAR GPS_STORAGE_PATH[]				= _T("gStorage");
const TCHAR GPS_RECORD_PATH[]				= _T("RECORD_FILE");
const TCHAR GPS_JPEG_PATH[]					= _T("JPEG_FILE");

//0λ-����Χ��
//1λ-����
//2λ-�Զ�����
//3λ-3g����ͳ��
//4λ-�ֻ��ͻ���
//5λ-�㲥
//6λ-���Ĵ洢
//7λ-��Ա��λ
#define GPS_SVR_CONFIG_FENCE			0
#define GPS_SVR_CONFIG_SMS				1
#define GPS_SVR_CONFIG_AUTO_DONW		2
#define GPS_SVR_CONFIG_FLOW				3
#define GPS_SVR_CONFIG_PHONE			4
#define GPS_SVR_CONFIG_PLAYBACK			5
#define GPS_SVR_CONFIG_CENTER_STORAGE	6
#define GPS_SVR_CONFIG_TRACKER			7

//�û����Ͷ���
#define GPS_USER_TYPE_SYS_ADMIN		-1	//����Ա
#define GPS_USER_TYPE_COMMON		0	//��ͨ�û�
#define GPS_USER_TYPE_ADMIN			1	//��ҵ����Ա
#define GPS_USER_TYPE_TEST			2	//�����û�

//��������״̬����
#define GPS_DOWNTASK_STATUS_INIT		1		//����δ����״̬
#define GPS_DOWNTASK_STATUS_ALLOC		2		//�Ѿ����䣬��ʾ��������
#define GPS_DOWNTASK_STATUS_FAILED		3		//����ʧ��
#define GPS_DOWNTASK_STATUS_SUC			4		//���سɹ�

#define GPS_DOWNTASK_DOWNTYPE_FILE			1		//�������ͣ��ļ�����
#define GPS_DOWNTASK_DOWNTYPE_RANGE			2		//�ֶ�����

#pragma pack(4)

typedef struct _tagGPSDEVDevInfo
{
	int		nID;				//Device Index
	char	szName[32];			//Device Name
	char	szIDNO[32];			//Device id
	int		nType;				//0 :Encoder, 1 :Decoder
	unsigned char ucChanNum;			//Channel Number
	unsigned char ucIoInNum;			//IO ������Ŀ
	unsigned char ucTempSensorNum;	//�¶ȴ�������Ŀ
	unsigned char ucIcon;	//����ͼ��
	char	szChnName[GPS_MAX_DEV_CHN_NUM][16];		
	char	szIoInExtent[4][16];	//����4��IO����		2013-06-22����Ϊ12��IO
	char	szIoInName[GPS_MAX_DEV_IO_NUM_OLD][16];
	char	szTempSensorName[GPS_MAX_TEMP_SENSOR_NUM][16];
	int		nGroup;				//Device Group Index
	int		nOnline;			//Device Online Status
	
	char	szSIMCard[16];		//SIM����
	char	szVehiColor[16];	//������ɫ
	char	szVehiBand[16];		//����Ʒ��
	char	szVehiType[16];		//��������
	char	szVehiUse[16];		//������;
	char	szVehiCampany[16];	//������˾
	char	szDriverName[16];	//˾������
	char	szDriverTele[16];	//˾���绰
	unsigned int uiModule;		//ģ�����

	//hw2013/11/14
	char cPayEnable;			//�Ƿ����ýɷѹ���
	char cPayPeriod;			//��Լ���ޣ�����Ϊ��λ��
	char cPayMonth;				//�Ѹ���
	char cPayDelayDay;			//��������
	unsigned int uiPayBegin;	//��Լ��ʼ��
	
	char    szReserve[52];		//�����ֶ�	60
}GPSDEVDevInfo_S, *LPGPSDEVDevInfo_S;

//�˽ṹ���GPSDEVDevInfo_Sһ�£�ȥ��������52�ֽ�
//hw2013/11/14
typedef struct _tagGPSDEVDevInfoEx
{
	int		nID;				//Device Index
	char	szName[32];			//Device Name
	char	szIDNO[32];			//Device id
	int		nType;				//0 :Encoder, 1 :Decoder
	unsigned char ucChanNum;			//Channel Number
	unsigned char ucIoInNum;			//IO ������Ŀ
	unsigned char ucTempSensorNum;	//�¶ȴ�������Ŀ
	unsigned char ucIcon;	//����ͼ��
	char	szChnName[GPS_MAX_DEV_CHN_NUM][16];		
	char	szIoInExtent[4][16];	//����4��IO����		2013-06-22����Ϊ12��IO
	char	szIoInName[GPS_MAX_DEV_IO_NUM_OLD][16];
	char	szTempSensorName[GPS_MAX_TEMP_SENSOR_NUM][16];
	int		nGroup;				//Device Group Index
	int		nOnline;			//Device Online Status
	
	char	szSIMCard[16];		//SIM����
	char	szVehiColor[16];	//������ɫ
	char	szVehiBand[16];		//����Ʒ��
	char	szVehiType[16];		//��������
	char	szVehiUse[16];		//������;
	char	szVehiCampany[16];	//������˾
	char	szDriverName[16];	//˾������
	char	szDriverTele[16];	//˾���绰
	unsigned int uiModule;		//ģ�����

	char cPayEnable;			//�Ƿ����ýɷѹ���
	char cPayPeriod;			//��Լ���ޣ�����Ϊ��λ��
	char cPayMonth;				//�Ѹ���
	char cPayDelayDay;			//��������
	unsigned int uiPayBegin;	//��Լ��ʼ��

}GPSDEVDevInfoEx_S, *LPGPSDEVDevInfoEx_S;

typedef struct _tagGPSMDVRInfo
{
	unsigned char ucIoInNum;			//IO ������Ŀ
	unsigned char ucTempSensorNum;	//�¶ȴ�������Ŀ
	unsigned char ucPlateColor;		//������ɫ	808�õ�	afu 2014-04-28
	unsigned char szRes;
	char	szChnName[GPS_MAX_DEV_CHN_NUM][16];		
	char	szIoInExtent[4][16];
	char	szIoInName[GPS_MAX_DEV_IO_NUM_OLD][16];
	char	szTempSensorName[GPS_MAX_TEMP_SENSOR_NUM][16];
	
	char	szVehiColor[16];	//������ɫ
	char	szVehiBand[16];		//����Ʒ��
	char	szVehiType[16];		//��������
	char	szVehiUse[16];		//������; 
	char	szVehiCampany[16];	//������˾
	char	szDriverName[16];	//˾������
	char	szDriverTele[16];	//˾���绰
	char	szSerialNumber[16];	//�豸���к�
	int		nDriverID;			//˾��ID
	char    szReserve[40];		//�����ֶ�//���� 44->40 zjt-2016/04/08
}GPSMDVRInfo_S, *LPGPSMDVRInfo_S;	//�ܴ�С624�ֽ�

typedef struct _tagGPSDVSInfo_S
{
	char	szChnName[16][16];								//16��ͨ������
	char	szIoInName[GPS_MAX_DEV_IO_NUM_NEW][16];			//12��IO����
	char	szTempSensorName[GPS_MAX_TEMP_SENSOR_NUM][16];	//�¶ȴ���������
	char	szContactName[16];			//��ϵ������
	char	szContactTel[16];			//��ϵ�˵绰
	unsigned char ucIoInNum;			//IO ������Ŀ
	unsigned char ucTempSensorNum;		//�¶ȴ�������Ŀ
	char    szReserve[78];				//����78�ֶ�
}GPSDVSInfo_S, *LPGPSDVSInfo_S;			//�ܴ�С624�ֽ�


typedef struct _tagGPSMobileDevInfo
{
	unsigned char nSex;			//�Ա�
	char strIDCar[19];			//���֤18λ
	char strUserNumber[16];		//���15
	char strGroupName[64];		//��������
	char strAddress[256];		//סַ
	int nUserPost;				//ְλ
	int	nEquip;					//һλ��ʾһ��װ��
	char szReserve[64];			//����64�ֶ�
}GPSMobileDevInfo_S, *LPGPSMobileDevInfo_S;	//�ܴ�С428

typedef struct _tagGPSDevInfo
{
	int nID;
	char szIDNO[32];				//Device id
	char szName[32];				//Device Name
	char szSIMCard[16];				//�绰
	int nDevType;					//�豸������		MDVR��MOBILE��
	int	nDevSubType;				//�豸������		��ͨGPS��ͨ����Ŀ��Ҫ����Ϊ0��
	int	nGroup;						//Device Group Index
	int nOnline;					//Device Online Status
	unsigned int uiModule;			//ģ�����
	unsigned char ucChanNum;		//Channel Number
	unsigned char ucIcon;			//����ͼ��
	char strRemark[94];				//��ע		//ԭ��Ϊ126
	char cProtocol;					//Э������
	char cAudioCodec;				//��Ƶ���������ͣ�����Խ�ʱ��ʹ�ô˲���
	char cDiskType;					//��������
	char cFactoryType;				//���Ҷ����豸����	��WKPЭ����ʹ��	
	char cFactoryDevType;			//δ��
	char cRes;						//����һ���ֽ�
	unsigned char ucMapValid;		//���õ�λ���Ƿ���Ч
	unsigned char ucMapType;		//��ͼ����
	int	nJingDu;					//����	4�ֽ� ��������	9999999 = 9.999999 
	int nWeiDu;						//γ��	4�ֽ� ��������	9999999 = 9.999999
	char cPayEnable;				//�Ƿ����ýɷѹ���
	char cPayPeriod;				//��Լ���ޣ�����Ϊ��λ��
	char cPayMonth;					//�Ѹ���
	char cPayDelayDay;				//��������
	unsigned int uiPayBegin;		//��Լ��ʼ��
	char cDevStatus;				//�豸ά��״̬ 0-���� 1-ά��
	char strReserve[7];				//���� 8->7 hw2014/07/23 16->8 hw2013/11/12, 27->16 hw2013/8/1
	union
	{
		GPSMDVRInfo_S gDVRInfo;
		GPSMobileDevInfo_S gMobileDevInfo;
		GPSDVSInfo_S DVSInfo;
	};
}GPSDevInfo_S, *LPGPSDevInfo_S;

typedef struct _tagGPSChnName
{
	char szName[16];		// Channel Name
}GPSChnName_S, *LPGPSChnName_S;

typedef GPSChnName_S GPSIOName_S;

typedef struct _tagGPSDEVGroup
{
	int		nID;			//Group Index
	char	szName[32];		//Group Name
	int		nParent;		//Parent Group,  -1 : no Parent
	char	szRemarks[48];	//2016-2-23����64λ��Ϊ48λ
	char	cLevel;			//����,1Ϊ��ͨ��˾,2Ϊ���� 3-��·
	char	cReserve[15];	//�����ֶ�
}GPSDEVGroup_S, *LPGPSDEVGroup_S;

//��˾��Ϣ
typedef struct _tagCompanyInfo
{
	int  nID;
	char szName[32];
	int  nParent;	
	char cLevel;				//����,1Ϊ��ͨ��˾,2Ϊ����, 3-��·
	int  nStationCount[2];		//վ�����, ����Ϊ3ʱ����Ч
}CompanyInfo_S, *LPCompanyInfo_S;

//˾����Ϣ
typedef struct _tagGPSDriverInfo
{
	int		nID;				// ID, Ψһ
	char	szJobNum[32];		//����, Ψһ
	char	szName[32];			//����
	int		nCompanyID;			//������˾ID
	int		nSex;				//�Ա�,1��2Ů
	char	IDNumber[32];		//���֤��
	char	szLicenseType[32];	//��ʻ֤����
	SYSTEMTIME tmValid;			//��Чʱ��
	int nRemindDay;				//������������
	char	cReserve[32];		//�����ֶ�
}GPSDriverInfo_S, *LPGPSDriverInfo_S;

//�����豸����
typedef struct _tagGPSVehiDevRelation
{
	int		nID;					//ID
	char	szVehiIDNO[32];			//���ƺ�
	char	szDevIDNO[32];			//�豸��
	char	szSIMCard[16];			//�绰
	char	szChnAttr[40];			//ͨ������ ��,�ָ�  ��:0,1 ��ʾͨ��1,ͨ��2
	char	szIOInAttr[40];			//IO��������
	char	szIOOutAttr[40];		//IO�������
	char	szTempAttr[40];			//�¶ȴ���������
	int		nMoudle;				//������������, ÿһλ��ʾһ������,��һλ��Ƶ,�ڶ�λץ��,����λ����,����λ�Խ�
	int		nDevType;				//�豸������		MDVR��MOBILE��
	int		nDevSubType;			//�豸������		��ͨGPS��ͨ����Ŀ��Ҫ����Ϊ0��
	char	cMainDevFlag;			//���豸��ʶ,��0��ʾ���豸
	char	cProtocol;				//Э������
	char	cAudioCodec;			//��Ƶ���������ͣ�����Խ�ʱ��ʹ�ô˲���
	char	cDiskType;				//��������
	char	cFactoryType;			//���Ҷ����豸����	��WKPЭ����ʹ��	
	char	cFactoryDevType;		//δ��
	unsigned char ucMapValid;		//���õ�λ���Ƿ���Ч
	unsigned char ucMapType;		//��ͼ����
	int nOnline;					//Device Online Status
	int		nJingDu;				//����	4�ֽ� ��������	9999999 = 9.999999 
	int		nWeiDu;					//γ��	4�ֽ� ��������	9999999 = 9.999999
	union
	{
		GPSMDVRInfo_S gDVRInfo;
		GPSMobileDevInfo_S gMobileDevInfo;
		GPSDVSInfo_S DVSInfo;
	};
	char	szRemarks[60];			//
}GPSVehiDevRelation_S, *LPGPSVehiDevRelation_S;

typedef struct _tagGPSAddrInfoEx
{
	char szLanIP[64];
	char szDeviceIP1[32];		//afu  2013-06-16	���Ӷ����ַ����
	char szDeviceIP2[32];
	char szClientIP1[32];
	char szClientIP2[32];
	unsigned short usDevicePort;
	unsigned short usClientPort;
//	unsigned short usReserve[2];
	unsigned short usSvrVersion;	//�������汾 ˵��:v6��֮ǰ�İ汾Ϊ0,v7Ϊ7,�ο�LOGIN_SERVER_VERSION_V7���� hw2014-12-04 
	unsigned short usReserve;
}GPSAddrInfoEx_S;

typedef struct _tagGPSAddrInfo
{
	char szLanIP[64];
	char szDeviceIP1[32];		//afu  2013-06-16	���Ӷ����ַ����
	char szDeviceIP2[32];
	char szClientIP1[32];
	char szClientIP2[32];
	unsigned short usDevicePort;
	unsigned short usClientPort;
	//	unsigned short usReserve[2];
	unsigned short usSvrVersion;	//�������汾 ˵��:v6��֮ǰ�İ汾Ϊ0,v7Ϊ7,�ο�LOGIN_SERVER_VERSION_V7���� hw2014-12-04 
	unsigned short usReserve;
}GPSAddrInfo_S;

typedef struct _tagGPSServerInfo
{
	int nID;
	char szIDNO[32];
	char szName[32];
	long nGroup;
	GPSAddrInfo_S	Addr;
}GPSServerInfo_S, *LPGPSServerInfo_S;

typedef struct _tagGPSServerInfoEx
{
	GPSServerInfo_S svrInfo;
	char szClientOtherPort[128];	//�����˿�
	char szReserve[32];				//�����ֶ�
}GPSServerInfoEx_S, *LPGPSServerInfoEx_S;

typedef struct _tagGPSServerAddr
{
	int nSvrID;
	GPSAddrInfo_S Addr;
}GPSServerAddr_S, *LPGPSServerAddr_S;

typedef struct _tagGPSMEDIAFile
{
	char	szFile[238]; 	/*��·�����ļ���*/  // 2015-03-14  256��Ϊ252������uiAlarmType;1���ļ������ж�����͵ı���
							// 2015-04-08  252��Ϊ244������nChnMaskͨ������
							// 2015-4-30	244��Ϊ240�� �����ļ�ƫ����
							// 2015-8-17	240��Ϊ239�� ����¼���ʶ
							// 2016-3-16	239��Ϊ238�� ��������ʶ
	char	bStream;		//�Ƿ�Ϊ��ʽ�ļ�����Ϊ��ʽ�ļ�ʱ���ͻ��˻�ʹ�ûطŵķ�ʽ�����ļ�����
	char	bRecording;		//�Ƿ�����¼����ļ���0��ʾû�У�1��ʾ����¼��
	unsigned int nFileOffset;	//�ļ�ƫ����
	unsigned char ucYear;	// 14��ʾ  14��
	unsigned char ucMonth;
	unsigned char ucDay;	
	unsigned char ucReserve;
	int nChnMask;			//ͨ������
	int nAlarmInfo;			//���ļ�Ϊ����ʱ��Ч
	unsigned int uiBegintime;
	unsigned int uiEndtime;
	char	szDevID[GPS_DEV_ID_LEN];			//�豸ID
	int		nChn;
	unsigned int nFileLen;
	int		nFileType;
	int		nLocation;		//λ�ã��豸�ϵ�¼���ļ������Ǵ洢�����ϵ�¼���ļ�
	int		nSvrID;			//�洢������ID����Ϊ�洢�������ϵ��ļ�ʱ��Ч
}GPSMEDIAFile_S, *LPGPSMEDIAFile_S;

typedef struct _tagGPSDEVUpgradeFile
{
	char szVersion[32];
	int	nDevType;
	int nFileLength;
}GPSDEVUpgradeFile_S, *LPGPSDEVUpgradeFile_S;

typedef struct _tagGPSFile2SvrMD5
{
	char szFileName[128];
	int	nFileLength;
	char szMd5[64];
	int nFileType;
	char cReserve[32];
}GPSFile2SvrMD5_S, *LPGPSFile2SvrMD5_S;

//�����ļ����Ͷ���
#define GPS_OLF_TYPE_PICTURE	    1	//ͼƬ�ļ�
#define GPS_OLF_TYPE_UPGRADE	    2	//�����ļ�
#define GPS_OLF_TYPE_DEV_CONF	    3	//�豸��������
#define GPS_OLF_TYPE_WIFI_LOCATION	4	//wifiΧ������

#define GPS_DEV_FILE_TASK_STATUS_CREATE		0	//δִ��
#define GPS_DEV_FILE_TASK_STATUS_ING		1	//������
#define GPS_DEV_FILE_TASK_STATUS_SUCCESS	2	//�ɹ�
#define GPS_DEV_FILE_TASK_STATUS_FAIL		3	//ʧ��

typedef struct _tagGPSFile2SvrMD5Ex
{
	char szFileName[64];	//�ļ�����
	int	nFileLength;		//�ļ�����
	char szMd5[40];			//�ļ�MD5ֵ
	int nFileType;			//�ļ����� 1 - �����ļ� 
	char nProtocol;			//Э������ 0��ʾ����
	char nFactoryType;		//�������� 0��ʾ����
	char nDevType;			//�豸���� 0��ʾ����
	char nDevSubType;		//�豸������ 0��ʾ����
	char szParam[116];		//�ļ�������Ϣ,���������|�ָ�(�����ļ�����:�汾��,�汾����)
}GPSFile2SvrMD5Ex_S, *LPGPSFile2SvrMD5Ex_S;

//���α�������
typedef struct _tagGPSAlarmShield
{
	int		nAlarmType;			//��������		
}GPSAlarmShield_S, *LPGPSAlarmShield_S;

//��ͼ��ǵ�����
typedef struct _tagGPSMarkerInfo
{
	int nID;				//���ݿ�ID����
	int nMarkerID;			//GPSMapMarker_S�ṹ���nID
	unsigned char nType;	//�豸����
	unsigned char nDevNum;	//��Ŀ(��nTypeΪ�����ʱ��nNumΪ���������Ŀ)
	unsigned char nMapType;	//��ͼ���ͣ����� mapapi.h �ڵĶ���
	char	szReserve[25];	//����
}GPSMarkerInfo_S, *LPGPSMarkerInfo_S;

//��ͼ���
typedef struct _tagGPSMapMarker
{
	int		nID;
	int		nMarkerType;		//������ͣ���״����(������)
	int		nType;				//��������ͷ������԰��
	int		nCreator;			//�����˱�ǵ��û�
	BOOL	bShare;				//�Ƿ�������������˾�����û������Կ����˱����Ϣ
	char	szName[32];			//�������
	char	szJingDu[256];		//�����ַ���,�ɰ��������������״���;���
	char	szWeiDu[256];		//γ���ַ���,�;����ַ���һһ��Ӧ
	char	szColor[10];		//��ɫ
	char	szRemark[64];		//��ע
	unsigned short	nExtinguisherNum;	//���������
	unsigned short 	nMapType;		//��ͼ����	MAP_GPS_TYPE_GOOGLE
	unsigned char nUpdate;			//0����1�����Ѵ��ڵļ�¼
	char	cImageSuffix[4];		//ͼƬ��׺�������4���ֽڣ�
	unsigned short nHighRadius;		//�뾶��λ,�����ϰ汾
	char	szReserver[21];			//2016-07-19 ��23���õ�21
}GPSMapMarker_S, *LPGPSMapMarker_S;

//��������
typedef struct _tagAdministrativeRegions 
{
	int nID;					//ID
	int nParentID;				//�ϼ�ID
	TCHAR szName[32];			//����
	TCHAR szAreaName[128];		//��������
}AdministrativeRegions_S, *LPAdministrativeRegions_S;

typedef struct _tagGPSMapLine
{
	GPSMapMarker_S	Marker;		//����������mapMarker����һ��
	char	szJingDu[110000];	//�������9999���켣�㣨ÿ���켣�����11���ַ�  113.134234��
	char	szWeiDu[110000];	//�������9999���켣��
}GPSMapLine_S, *LPGPSMapLine_S;

//��չ��������,�ͻ���ʹ��,��֤��·������Ϊͬһ����
typedef struct _tagGPSMapMarkerEx
{
	GPSMapMarker_S	Marker;		//����
	char*			pJingDu;	//����
	char*			pWeiDu;		//γ��
}GPSMapMarkerEx_S, *LPGPSMapMarkerEx_S;

//����Χ��
typedef struct _tagGPSMapFence
{
	int		nID;					//Χ�����
	char	szDevIDNO[40];			//�������
	int		nMarkerID;				//��ͼ��Ǳ��
	int		nAccessAlarm;			//�������򱨾���0��������1�����ڱ�����2�����ⱨ����
	int		nSpeedAlarm;			//�ٶȱ�����0��������1�����ڱ�����2�����ⱨ����
	int		nSpeedHigh;				//����ٶȣ���λ����  100 = 10.0���
	int		nSpeedLow;				//����ٶ�
	int		nParkAlarm;				//ͣ��������0��������1�����ڱ�����2�����ⱨ����
	int		nParkTime;				//ͣ��������ʱ�����60�룩��λ��
	int		nDoorAlarm;				//���ű���
	int		nBeginTime;				//��ʼʱ�䡢������ʼʱ��
	int		nEndTime;				//����ʱ�䡢��������ʱ��
	int		nSpeedHighWarn;			//����Ԥ���ٶ�
	int		nSpeedLowWarn;			//����Ԥ���ٶ�
	char	szSpeedHighTts[128];	//����TTS
	char	szSpeedHighWarnTts[128];//����Ԥ��TTS
	char	szSpeedLowTts[128];		//����TTS
	char	szSpeedLowWarnTts[128];	//����Ԥ��TTS
}GPSMapFence_S, *LPGPSMapFence_S;

//Χ��
typedef struct _tagGPSMapFenceInfo
{
	GPSMapFence_S mapFence;
	GPSMapMarker_S mapMarker;
}GPSMapFenceInfo_S, *LPGPSMapFenceInfo_S;

//��·
typedef struct _tagGPSMapLineInfo
{
	GPSMapFence_S mapFence;
	GPSMapLine_S mapLine;
}GPSMapLineInfo_S, *LPGPSMapLineInfo_S;

//�ͻ��������õ�����Ϣ
typedef struct _tagGPSUPFileInfo
{
	char	szModuleName[32];
	char	szVersion[128];
	char 	szPath[128];
	char	szSHA1[128];
	int		nFileLength;
	char	szReserve[32];	//����
}GPSUPFileInfo_S, *LPGPSUPFileInfo_S;

typedef struct _tagGPSUPVersion
{
	char	szVersion[32];
	char	szDate[32];
	char	szSHA1[128];
	char	szKeyModule[32];
	char	szReserve[32];	//����
}GPSUPVersion_S, *LPGPSUPVersion_S;

//�ͻ��˵�¼ʱ���ӷ������л�ȡ�ͻ���APP��Ϣ
typedef struct _tagGPSAppInfo
{
	int		nAppVersion;				//�ͻ��˰汾	6.1.1.1	=  6 * 1000000 + 1 * 10000 + 1 * 100 + 1	ÿ���汾�����������
	int		nWebPort;					//WEB�������˿�
	char	szHost[128];				//��ַ����  192.168.1.100������˲���Ϊ����ֱ��ʹ���û���������ip
	char	szWebApp[32];				//�����豸��ַ1
	char	szVerUrl[128];				//�汾��������		/product/gViewer/upgrade.html
										//˵�����ʵ�ַΪ  http://szHost:nWebPort/szWebApp/szVerUrl	���� http://�û�������ַ:nWebPort/szVerUrl
	char	cVersionChange;				//0:6.15.x.x֮ǰ�İ汾,1:6.15.x.x�汾,��������,�Ժ����Ϸ�����������,ͨ�����ô˲���������������İ汾hw2013/11/21
	char	cVersionChangeEx;			//hw2014/8/13 cVersionChange�汾�ͻ����ж�������,��������һ���汾,�Ժ�cVersionChange���ٸı�,�ô��ֶ�
	char	szRes[2];					//����2���ֽ�
	int		nAppVersionEx;				//�µİ汾��
	UINT	nAppMainVer;				//��ҵ�汾����������Ҫ�ǽ��治ͬ��ͨ������ű������ȥ, ͨ�ð汾��0��
	UINT	nAppFunVer;					//���ܶ��ư汾���ͻ����ڲ�ʹ�ð汾��־��ͨ���˰汾���ֲ�ͬ�Ĺ���, ͨ�ð汾��0��
	UINT	nAppFunSunVer;				//���ܶ����Ӱ汾, ͨ�ð汾��0
	char	szReserve[8];				//��������	30->8  hw 2015/3/27 
}GPSAppInfo_S;

//�û���ͼ������Ϣ
typedef struct _tagUserMapConfig
{
	int nMapType;		//��ͼ����
	int	nJingDu;		//����	4�ֽ� ��������	9999999 = 9.999999 
	int nWeiDu;			//γ��	4�ֽ� ��������	9999999 = 9.999999
	int nZoom;			//���ż���
	char szReserve[128];
}UserMapConfig_S, *LPUserMapConfig_S;

//������������Ϣ
typedef struct _tagSvrConfig
{
	unsigned long lSvrConfig;
}SvrConfig_S, *LPSvrConfig_S;

//�û���Ϣ
typedef struct _tagClientUserInfo
{
	char szCompanyLogoFile[MAX_PATH];		//��˾logo�ļ�·��
	SYSTEMTIME timeCompanyLogoUpdate;		//��˾logo����ʱ��
	char szUserLogoFile[MAX_PATH];			//�û�logo�ļ�·��
	SYSTEMTIME timeUserLogoUpdate;			//�û�logo����ʱ��
}ClientUserInfo_S, *LPClientUserInfo_S;

//�ͻ��˹���
typedef struct _tagClientFunction
{
	unsigned char nMDVRValid;				//MDVR
	unsigned char nDVSValid;				//DVS
	unsigned char nMoblieValid;				//Moblie
	unsigned char nWifiSvrValid;			//�Զ����ط�����
	unsigned char nTarckBackValid;			//�켣�ط�
	unsigned char nMapValid;				//��ͼ	
	unsigned char nPTZValid;				//��̨
	unsigned char nColorValid;				//ɫ��
	unsigned char nTalkbackValid;			//�Խ�
	unsigned char nAudioMonitorValid;		//����
	unsigned char nBroadcastValid;			//�㲥
	unsigned char nReportValid;				//�����ѯ
	unsigned char nBusMgr;					//У������
	unsigned char nDevStatus;				//�豸״̬
	char szReserve[14];						//����14
}ClientFunction_S, *LPClientFunction_S;

typedef struct _tagDevFixGPS
{
	char szDevIDNO[32];
	unsigned char ucMapValid;			//���õ�λ���Ƿ���Ч
	unsigned char ucMapType;			//��ͼ����
	int	nJingDu;						//����	4�ֽ� ��������	9999999 = 9.999999 
	int nWeiDu;							//γ��	4�ֽ� ��������	9999999 = 9.999999
}DevFixGPS_S, *LPDevFixGPS_S;

//����ֵ��Ӧ����
typedef struct _tagOilResistance
{
	char szDevIDNO[32];
	int nTimeCount;				//��λʱ��(��)
	int nChangeOil;				//�����仯ֵ(L)
	char szResistance[512];		//����ֵ
	char szOil[512];			//����	
}OilResistance_S, *LPOilResistance_S;


#define GPS_SNAPSHOT_PLAN_TIME_COUNT		2		//ץ��ʱ�����Ŀ
#define GPS_SNAPSHOT_PLAN_DAY_COUNT			7		//ץ�ļƻ�����

#define GPS_SNAPSHOT_MODE_LOOP				1		//1��ʾͨ��ѭ��ץ��(ץ��ͨ��1��,���ʱ�����ץ��ͨ��2)
#define GPS_SNAPSHOT_MODE_ALL				2		//2��ʾ��������ץ�ģ�ͬʱץ������ͨ��
//ʱ��
typedef struct _tagGPSSnapshotDay						//ץ��ÿ�ռƻ�
{	
	int	nBegin[GPS_SNAPSHOT_PLAN_TIME_COUNT];		//����Ϊ��λ(ʱ*3600+��*60+��)
	int nEnd[GPS_SNAPSHOT_PLAN_TIME_COUNT];			//ͬ��
}GPSSnapshotDay_S, *LPGPSSnapshotDay_S;
//ץ�ļƻ�
typedef struct _tagGPSSnapshotPlan						//ץ�ļƻ�
{	
	GPSSnapshotDay_S	Day[GPS_SNAPSHOT_PLAN_DAY_COUNT]; //0-����,1-��һ,...
	int nSpan;										//ץ�ļ�� ��λ��
	int	nSnapshotMode;								//1��ʾͨ��ѭ��ץ��(ץ��ͨ��1��,���ʱ�����ץ��ͨ��2)��2��ʾ��������ץ��
	int nChannel;									//ץ�ĵ�ͨ���ţ�0λ-��ʾͨ��0��1λ-��ʾͨ��1����������
}GPSSnapshotPlan_S, *LPGPSSnapshotPlan_S;

//�豸ץ�ļƻ�
typedef struct _tagGPSDevSnapshotPlan
{
	char szDevIDNO[32];								//�豸IDNO
	GPSSnapshotPlan_S Plan;							//�ƻ�
}GPSDevSnapshotPlan_S, *LPGPSDevSnapshotPlan_S;

//��������
const int HANLEWAY_TYPE_PROCESSING = -1;	//������
const int HANLEWAY_TYPE_OVERTIME = 0;		//��ʱδ����
const int HANLEWAY_TYPE_MMS = 1;			//���Ͳ���
const int HANLEWAY_TYPE_IGNORE = 2;			//������
typedef struct _tagDevHandleAlarm
{
	char guid[40];			//����guid
	char szAccount[40];		//��½�˻�
	char szHandleInfo[256];	//������
	int nHandleWay;
	char szDevIDNO[32];
	char szParam[92];		//����92
}DevHandleAlarm_S, *LPDevHandleAlarm_S;

//������ѯ
const int QUERY_ALARMINO_ALL = - 1;
typedef struct _tagAlarmQueryParam
{
	int nArmType;		//��������
	int nArmInfo;		//������Ϣ(Ϊ-1����Ըò���)
}AlarmQueryParam_S, *LPAlarmQueryParam_S;

//�����ļ���Ϣ
typedef struct _tagGPSOflFileInfo
{
	int nID;
	GPSFile2SvrMD5Ex_S FileInfo;
	int nSvrID;					//�洢��������ID
	SYSTEMTIME dtUploaded;		//�ļ��ϴ�ʱ��
}GPSOflFileInfo_S, *LPGPSOflFileInfo_S;

//�豸��������
typedef struct _tagGPSDevOflTask
{
	int nID;				//���ݿ�����
	char szDevIDNO[40];		//�豸ID
	int nFileType;			//�ļ����ͣ�1��ʾ�����ļ�
	int nFileID;			//�ļ�ID
	SYSTEMTIME dtCreate;	//���񴴽�ʱ��
	char szReserve[32];		//��������
}GPSDevOflTask_S, *LPGPSDevOflTask_S;

//¼������
#define AUTODOWN_DOWN_TYPE_ALL				1		//1�������У�2����¼��3����ͼƬ
#define AUTODOWN_DOWN_TYPE_RECORD			2		
#define AUTODOWN_DOWN_TYPE_JPEG				3		
#define AUTODOWN_DOWN_TYPE_RECORD_ALARM		4		
#define AUTODOWN_DOWN_TYPE_JPEG_ALARM		5
//�豸���ؼƻ�
#define TASK_STATUS_ALL			-1
#define TASK_STATUS_NO_FINISH	0
#define TASK_STATUS_SUCCESS		1
#define TASK_STATUS_FAIL		2
typedef struct _tagGPSDevDloadTask
{
	int nID;				//���ݿ�����
	char szIDNO[64];		//�豸��Ż��߳��ƺ�
	int  nChannle;			//ͨ����(����ͨ���Ż���ȫ��ͨ����)
	int  nType;				//����(1-���� 2-¼�� 3-ͼƬ 4-����¼�� 5-����ͼƬ);
	SYSTEMTIME BegTime;		//��ʼʱ��
	SYSTEMTIME EndTime;		//��ʼʱ��
	int	nStatus;			//״̬
	char szLable[256];		//��ǩ
	char szRemark[256];		//��ע
	int  nAlarmInfo;		//4-����¼�� 5-����ͼƬʱ�����ص��ļ�����	
							//REC_IOALARM = 0,	// IO ����	REC_SPEED_H = 1,	// ���ٱ���	REC_SPEED_L = 2,	// ���ٱ���		REC_GSENSOR = 3,	// GSensor 
							//REC_TEMP = 4,      // �¶ȱ���		REC_MD = 5,	   // �ƶ����		REC_UPSACT = 6,	 // UPS ����
	char szReserve[60];		//��������
}GPSDevDloadTask_S, *LPGPSDevDloadTask_S;



//809���ȷ����Ϣ
typedef struct _tagAck809Platform
{
	char szSvrIDNO[40];			//������IDNO
	unsigned int uiInfoID;		//��ϢID	��Ϊ��������ID����ʾ��������ID
	char szinfoContent[512];	//��Ϣ����
	unsigned int uiType;		//1��ʾ��ڣ�2��ʾ��������Ӧ�𣬱�������ʱ��szSvrIDNO��ʾ�豸���
	unsigned int uiResult;		//������������0�����У�1������أ�2������3��������
	BYTE  nObjType;				// ��ڶ�������;
	char szObjectID[15];		//Ӫ��֤��
	char szReserve[16];
}Ack809Platform_S, *LPAck809Platform_S;

//809���ҵ��
typedef struct _tagGPSJT809Business
{
	int	nType;				//����
	char szDevIDNO[GPS_DEV_ID_LEN];	//�豸���
	SYSTEMTIME begTime;		//��ʼʱ��
	SYSTEMTIME endTime;		//����ʱ��
	char szReserve[512];	//��������
}GPSJT809Business_S, *LPGPSJT809Business_S;

//������̬��Ϣ����ҵ��
#define JT809_BUSINESS_TYPE_HISTORY_LOCATION			1			//�¼�ƽ̨ ---��  �ϼ�ƽ̨		�Զ�����������ʷλ��		�豸��ţ���ʼʱ��ͽ���ʱ��
#define JT809_BUSINESS_TYPE_MONITOR_START_UP			2			//�¼�ƽ̨ ---��  �ϼ�ƽ̨		���뽻��������λ��Ϣ		���������ϼ�ƽ̨������Ϣʱʹ��		�豸��ţ���ʼʱ��ͽ���ʱ��
#define JT809_BUSINESS_TYPE_MONITOR_END				3				//�¼�ƽ̨ ---��  �ϼ�ƽ̨		ȡ�����뽻��������λ��Ϣ	���ƺ�
#define JT809_BUSINESS_TYPE_HISGNSSDATA				4				//�¼�ƽ̨ ---��  �ϼ�ƽ̨		����������λ��Ϣ����		�豸��ţ���ʼʱ��ͽ���ʱ��	

//�ݻ�
#define JT809_BUSINESS_TYPE_ADPT_TODO_INF			5				//�¼�ƽ̨ ---��  �ϼ�ƽ̨		�����ϱ�����������Ϣ		�豸��ţ�����ID��������	(0x00�������У�0x01���Ѵ�����ϣ�0x02����������0x03����������)

#define JT809_BUSINESS_TYPE_MAIN_LINK_CONNECT		6				//��¼����·�������ϼ�ƽ̨����ͨ����·�������͵�¼��
#define JT809_BUSINESS_TYPE_MAIN_LINK_DISCONN		7				//ע������·�������ϼ�ƽ̨����ע���������Ͽ�����
#define JT809_BUSINESS_TYPE_LINK_STATUS				8				//�鿴���ϼ����ƽ̨������״̬


//������ʻ״̬
typedef struct _tagGPSVehiDriveStatus
{
	char szVehiIDNO[32];		//���ƺ�
	char szDirverName[64];		//����
	char szCardNO[32];			//���֤
	char szLicense[64];			//��ҵ�ʸ�֤����
	char szOrgName[256];		//��֤��������
	char szWaybill[512];		//�˵���Ϣ
	char szReserve[128];		//��������
}GPSVehiDriveStatus_S, *LPGPSVehiDriveStatus;

//����
#define RULE_TYPE_UNDEFINE		0		//δ����
#define RULE_TYPE_FATIGUE		1		//ƣ�͹���
#define RULE_TYPE_AREAIN		2		//�������
#define RULE_TYPE_AREAOUT		3		//��������
#define RULE_TYPE_AREASPEED		4		//������ٳ��ٹ���
#define RULE_TYPE_TIMESPEED		5		//ʱ��ε��ٳ��ٹ���
#define RULE_TYPE_PARK			6		//ͣ��ʱ���������
#define RULE_TYPE_LINE			7		//��·����
#define RULE_TYPE_SNAP			8		//��ʱ����
#define RULE_TYPE_RECORD		9		//¼�����
#define RULE_TYPE_WIFIDLOAD		10		//WIFI���ع���
#define RULE_TYPE_SECTIONSPEED	11		//�ֶ�����
#define RULE_TYPE_POINT			12		//�ؼ�����
#define RULE_TYPE_ALARM_ACTION	13		//��������
#define RULE_TYPE_ROAD			14		//��·����

//����ͨ�ò���
typedef struct _tagGPSRuleParam 
{
	char szVehiIDNO[32];	//���ƺ�
	int	 nType;				//����
	int  nBeginTime;		//��ʼʱ��(��)
	int  nEndTime;			//����ʱ��(��)
	int  nAlarmType;		//��������
}GPSRuleParam_S, *LPGPSRuleParam_S;

//����
typedef struct _tagGPSRuleLink
{
	char szText[1024];		//tts
	int  nSnapFlag;			//���ձ�־(0-������)
	char cSnapChn[8];		//����ͨ��
	int  nRecordTime;		//¼��ʱ��	
	char cRecpChn[8];		//¼��ͨ��
	char szPhone[256];		//�绰;�ָ�
	char szEmail[256];		//�ʼ�;�ָ�
}GPSRuleLink_S, *LPGPSRuleLink_S;

//�洢�����ݿ��еĹ������
typedef struct _tagGPSRuleDB
{
	int nID;				//����ID
	GPSRuleParam_S	Param;	//����
	char szText[1024];		//tts
	char szParam[1024];		//�ַ�����
	SYSTEMTIME UpdateTime;	//����ʱ��
}GPSRuleDB_S, *LPGPSRuleDB_S;

//ƣ�͹���
typedef struct _tagGPSVehiRuleFatigue
{
	GPSRuleParam_S Param;	//����
	GPSRuleLink_S	Link;	//����
	int		nDriveTime;		//��ʻʱ��	
	int		nRestTime;		//��Ϣʱ��
	int		nMinSpeed;		//����ٶ�
}GPSVehiRuleFatigue_S, *LPGPSVehiRuleFatigue_S;

//�������
typedef struct _tagGPSVehiRuleAreaIn
{
	GPSRuleParam_S Param;	//����
	GPSRuleLink_S	Link;	//����
	int nAreaID;			//����ID
}GPSVehiRuleAreaIn_S, *LPGPSVehiRuleAreaIn_S;

//��������
typedef struct _tagGPSVehiRuleAreaOut
{
	GPSRuleParam_S Param;	//����
	GPSRuleLink_S	Link;	//����
	int nAreaID;			//����ID
}GPSVehiRuleAreaOut_S, *LPGPSVehiRuleAreaOut_S;

//������ٳ��ٹ���
typedef struct _tagGPSVehiRuleAreaSpeed
{
	GPSRuleParam_S Param;	//����
	GPSRuleLink_S	Link;	//����
	int nAreaID;			//����ID
	int nMinSpeed;			//����ٶ�
	int nMaxSpeed;			//����ٶ�
}GPSVehiRuleAreaSpeed_S, *LPGPSVehiRuleAreaSpeed_S;

//ʱ��ε��ٳ��ٹ���
typedef struct _tagGPSVehiRuleTimeSpeed
{
	GPSRuleParam_S Param;	//����
	GPSRuleLink_S	Link;	//����
	int nMinSpeed;			//����ٶ�
	int nMaxSpeed;			//����ٶ�
}GPSVehiRuleTimeSpeed_S, *LPGPSVehiRuleTimeSpeed_S;

//ͣ��ʱ���������
typedef struct _tagGPSVehiRulePark
{
	GPSRuleParam_S Param;	//����
	GPSRuleLink_S	Link;	//����
	int nParkTime;			//ͣ��ʱ��
}GPSVehiRulePark_S, *LPGPSVehiRulePark_S;

//��·����
typedef struct _tagGPSVehiRuleLine
{
	GPSRuleParam_S Param;	//����
	GPSRuleLink_S	Link;	//����
	int nAreaID;			//����ID
	int nMinSpeed;			//����ٶ�
	int nMaxSpeed;			//����ٶ�
	int nWidth;				//���
}GPSVehiRuleLine_S, *LPGPSVehiRuleLine_S;

//��ʱ���չ���
typedef struct _tagGPSVehiRuleSnap
{
	GPSRuleParam_S Param;	//����
	int nCondition;			//��������(0-��ʻͣ������ 1-��ʻ���� 2-ͣ������)
//	int nCount;				//���� ����1С��5
	int nIntervalSec;		//���(��) ����5����С��60����
	char cChnFlag[8];		//ͨ����־(1��ʾ��ͨ������)
}GPSVehiRuleSnap_S, *LPGPSVehiRuleSnap_S;

//��ʱ¼�����
typedef struct _tagGPSVehiRuleRecord
{
	GPSRuleParam_S Param;	//����
	char cChnFlag[8];		//ͨ����־(1��ʾ��ͨ��¼��)
}GPSVehiRuleRecord_S, *LPGPSVehiRuleRecord_S;

//WIFI���ع���
typedef struct _tagGPSVehiRuleWifiDLoad
{
	GPSRuleParam_S Param;	//����
	char cChnFlag[8];		//ͨ����־(1��ʾ���ظ�ͨ��)
}GPSVehiRuleWifiDLoad_S, *LPGPSVehiRuleWifiDLoad_S;


//�ؼ�����
typedef struct _tagGPSVehiRulePoint
{
	GPSRuleParam_S Param;
	GPSRuleLink_S	Link;	//����
	int nAreaID;			//����ID
	int nAreaType;			//��������(map_marker���� 1-��, 4-��·)
	char szJingDu[32];		//����
	char szWeiDu[32];		//ά��
	int nWidth;				//���
	int nMonitorType;		//0:δ����1:δ�뿪
}GPSVehiRulePoint_S, *LPGPSVehiRulePoint_S;

//�ֶ�����
typedef struct _tagGPSVehiRuleSectionSpeed
{
	GPSRuleParam_S Param;
	GPSRuleLink_S	Link;	//����
	int nAreaID;			//����ID
	char szJingDuS[32];		//��ʼ����
	char szWeiDuS[32];		//����γ��
	char szJingDuE[32];		//��ʼ����
	char szWeiDuE[32];		//����γ��
	int nMinSpeed;			//����ٶ�
	int nMaxSpeed;			//����ٶ�
	int nWidth;				//���
}GPSVehiRuleSectionSpeed_S, *LPGPSVehiRuleSectionSpeed_S;

//��������
typedef struct _tagGPSVehiRuleArmAction
{
	GPSRuleParam_S Param;
	GPSRuleLink_S	Link;	//����
}GPSVehiRuleArmAction_S, *LPGPSVehiRuleArmAction_S;

//��·����
typedef struct _tagGPSVehiRuleRoad
{
	GPSRuleParam_S Param;
	GPSRuleLink_S	Link;		//����
	int		nSpeedLimit[8];		//��·�ȼ�����
}GPSVehiRuleRoad_S, *LPGPSVehiRuleRoad_S;


//����������
typedef union _tagGPSVehiRule
{
	GPSVehiRuleFatigue_S	Fatigue;
	GPSVehiRuleAreaIn_S		AreaIn;
	GPSVehiRuleAreaOut_S	AreaOut;
	GPSVehiRuleAreaSpeed_S	AreaSpeed;
	GPSVehiRuleTimeSpeed_S	TimeSpeed;
	GPSVehiRulePark_S		Park;
	GPSVehiRuleLine_S		Line;
	GPSVehiRuleSnap_S		Snap;
	GPSVehiRuleRecord_S		Record;
	GPSVehiRuleWifiDLoad_S	WifiDLoad;
	GPSVehiRuleSectionSpeed_S SectionSpeed;
	GPSVehiRulePoint_S		Point;	
	GPSVehiRuleArmAction_S ArmAction;
	GPSVehiRuleRoad_S		Road;
}GPSVehiRule_S, *LPGPSVehiRule_S;

//����
typedef struct _tagGPSVehiRuleInfo
{
	int nType;
	GPSVehiRule_S Rule;
}GPSVehiRuleInfo_S, *LPGPSVehiRuleInfo_S;


const int REAMIND_TYPE_TIMESTAMP = 0;
const int REAMIND_TYPE_VEHI_INSURANCE = 1;
const int REAMIND_TYPE_VEHI_TRANSPORTATION = 2;
const int REAMIND_TYPE_VEHI_LICENSE = 3;
const int REAMIND_TYPE_DIRVER = 4;

//��������
typedef struct _tagGPSVehiInsuranceInfo
{
	int nVehiID;				//����ID
	char szCompany[64];			//���չ�˾
	char szTyp[64];				//��������
	char szNumber[64];			//����
	int	 nAmount;				//���ս�λ0.01Ԫ
	char szClaimStatus[64];		//����״̬
	SYSTEMTIME tmStart;			//��ʼʱ��
	SYSTEMTIME tmEnd;			//����ʱ��
	int nRemindDay;				//������������
}GPSVehiInsuranceInfo_S, *LPGPSVehiInsuranceInfo_S;

//��������֤
typedef struct _tagGPSVehiTransportationInfo
{
	int nVehiID;				//����ID
	char szBusinessLicense[64];	//��Ӫ���֤��
	char szBusinessScope[64];	//��Ӫ��Χ
	SYSTEMTIME tmStart;			//��ʼʱ��
	SYSTEMTIME tmEnd;			//����ʱ��
	int nRemindDay;				//������������
}GPSVehiTransportationInfo_S, *LPGPSVehiTransportationInfo_S;

//������ʻ֤
typedef struct _tagGPSVehiLicenseInfo
{
	int nVehiID;				//����ID
	char szIDCode[64];			//ʶ�����
	char szEngineCode[64];		//����������
	char szLicense[64];			//��ʻ֤
	char szUseNature[64];		//ʹ������
	char szBrandModel[64];		//Ʒ���ͺ�
	SYSTEMTIME tmStart;			//��ʼʱ��
	SYSTEMTIME tmEnd;			//����ʱ��
	int nRemindDay;				//������������
}GPSVehiLicenseInfo_S, *LPGPSVehiLicenseInfo_S;



#pragma pack()

#endif