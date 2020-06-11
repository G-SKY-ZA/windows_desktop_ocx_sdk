#ifndef _NET_DEVICE_DEF_H_
#define _NET_DEVICE_DEF_H_


//#include "hi_dataType.h"

#define GPS_FRM_TYPE_HEAD						1
#define GPS_FRM_TYPE_I							0x63643000
#define GPS_FRM_TYPE_P							0x63643100
#define GPS_FRM_TYPE_A							0x63643230
#define GPS_FRM_TYPE_INFO						0x63643939
#define GPS_FRM_TYPE_REC_HDR					2

#define GPS_RESOLUTION_QCIF				1	//�ֱ���
#define GPS_RESOLUTION_CIF				2	//�ֱ���
#define GPS_RESOLUTION_HD1				3	//�ֱ���
#define GPS_RESOLUTION_D1				4	//�ֱ���
#define GPS_RESOLUTION_720P				5	//�ֱ���
#define GPS_RESOLUTION_1080P			6	//�ֱ���

#define GPS_FILE_TYPE_NORMAL					0
#define GPS_FILE_TYPE_ALARM						1
#define GPS_FILE_TYPE_ALL						-1



#define GPS_CHANNEL_ALL							99

#define GPS_ALARM_TYPE_ALL						0		//���б���

#define GPS_ALARM_TYPE_USEDEFINE				1		//�Զ��屨��
#define GPS_ALARM_TYPE_URGENCY_BUTTON			2		//������ť����
#define GPS_ALARM_TYPE_SHAKE					3		//�񶯱���
#define GPS_ALARM_TYPE_VIDEO_LOST				4		//����ͷ���źű���
#define GPS_ALARM_TYPE_VIDEO_MASK				5		//����ͷ�ڵ�����
#define GPS_ALARM_TYPE_DOOR_OPEN_LAWLESS		6		//�Ƿ����ű���
#define GPS_ALARM_TYPE_WRONG_PWD				7		//����������󱨾�
#define GPS_ALARM_TYPE_FIRE_LOWLESS				8		//�Ƿ���𱨾�
#define GPS_ALARM_TYPE_TEMPERATOR				9		//�¶ȱ���		AlarmInfo��������ţ�0��ʾ������1��1��ʾ������2��, param[0]�¶����ͣ�0��ʾ�����£�1��ʾ�����£�, param[1]��ǰ�¶�10000=100�� 
#define GPS_ALARM_TYPE_DISK_ERROR				10		//Ӳ�̴��󱨾�
#define GPS_ALARM_TYPE_OVERSPEED				11		//���ٱ���
#define GPS_ALARM_TYPE_BEYOND_BOUNDS			12		//Խ�籨��
#define GPS_ALARM_TYPE_DOOR_ABNORMAL			13		//�쳣���س��ű���
#define GPS_ALARM_TYPE_PARK_TOO_LONG			14		//ͣ����������
#define GPS_ALARM_TYPE_MOTION					15		//�ƶ���ⱨ��
#define GPS_ALARM_TYPE_ACC_ON					16		//ACC��������
#define GPS_ALARM_TYPE_DEV_ONLINE				17		//�豸����
#define GPS_ALARM_TYPE_GPS_SIGNAL_LOSS          18      //GPSѶ�Ŷ�ʧ��ʼ
#define GPS_ALARM_TYPE_IO_1                     19      //IO_1����
#define GPS_ALARM_TYPE_IO_2                     20      //IO_2����
#define GPS_ALARM_TYPE_IO_3                     21      //IO_3����
#define GPS_ALARM_TYPE_IO_4                     22      //IO_4����
#define GPS_ALARM_TYPE_IO_5                     23      //IO_5����
#define GPS_ALARM_TYPE_IO_6                     24      //IO_6����
#define GPS_ALARM_TYPE_IO_7                     25		//IO_7����
#define GPS_ALARM_TYPE_IO_8                     26      //IO_8����
#define GPS_ALARM_TYPE_IN_FENCE		            27      //�������򱨾�
#define GPS_ALARM_TYPE_OUT_FENCE		        28      //�����򱨾�
#define GPS_ALARM_TYPE_IN_FENCE_OVER_SPEED      29      //�����ڸ��ٱ���
#define GPS_ALARM_TYPE_OUT_FENCE_OVER_SPEED     30      //��������ٱ���
#define GPS_ALARM_TYPE_IN_FENCE_LOW_SPEED       31      //�����ڵ��ٱ���
#define GPS_ALARM_TYPE_OUT_FENCE_LOW_SPEED      32      //��������ٱ���
#define GPS_ALARM_TYPE_IN_FENCE_STOP			33      //������ͣ������
#define GPS_ALARM_TYPE_OUT_FENCE_STOP			34      //������ͣ������
#define GPS_ALARM_TYPE_FIRE                     35      //��
#define GPS_ALARM_TYPE_PANIC                    36      //�پ�
#define GPS_ALARM_TYPE_TASK_FINISHED			37		//�����������
#define GPS_ALARM_TYPE_IMAGE_UPLOAD				38		//ͼƬ�ϴ����
#define GPS_ALARM_TYPE_DISK1_NO_EXIST			39		//Ӳ��1������
#define GPS_ALARM_TYPE_DISK2_NO_EXIST			40		//Ӳ��2������
#define GPS_ALARM_TYPE_IO_9                     41      //IO_9����
#define GPS_ALARM_TYPE_IO_10                    42      //IO_10����
#define GPS_ALARM_TYPE_IO_11                    43      //IO_11����
#define GPS_ALARM_TYPE_IO_12                    44      //IO_12����
#define GPS_ALARM_TYPE_GPS_UNENABLE				45		//GPS��Ч
#define GPS_ALARM_TYPE_REFUEL					46		//����	AlarmInfoΪ���͵�����(9999=99.99��)��Param[0]Ϊ����ǰ�ͺ�
#define GPS_ALARM_TYPE_STILL_FUEL				47		//͵��	AlarmInfoΪ͵�͵�����(9999=99.99��)��Param[0]Ϊ͵��ǰ�ͺ�
#define GPS_ALARM_TYPE_URGENCY_BUTTON_5			48		//������ť����(5��)
#define GPS_ALARM_TYPE_FATIGUE					49		//ƣ�ͼ�ʻ	AlarmInfo��ʾ��������	0 , û�У� 1  һ������ 2 ��������, 3 ��������, 4 ��ע�ȱ���



#define GPS_ALARM_TYPE_END_USEDEFINE			51		//�Զ��屨��
#define GPS_ALARM_TYPE_END_URGENCY_BUTTON		52		//������ť����
#define GPS_ALARM_TYPE_END_SHAKE				53		//�񶯱���
#define GPS_ALARM_TYPE_END_VIDEO_LOST			54		//����ͷ���źű���
#define GPS_ALARM_TYPE_END_VIDEO_MASK			55		//����ͷ�ڵ�����
#define GPS_ALARM_TYPE_END_DOOR_OPEN_LAWLESS	56		//�Ƿ����ű���
#define GPS_ALARM_TYPE_END_WRONG_PWD			57		//����������󱨾�
#define GPS_ALARM_TYPE_END_FIRE_LOWLESS			58		//�Ƿ���𱨾�
#define GPS_ALARM_TYPE_END_TEMPERATOR			59		//�¶ȱ���
#define GPS_ALARM_TYPE_END_DISK_ERROR			60		//Ӳ�̴��󱨾�
#define GPS_ALARM_TYPE_END_OVERSPEED			61		//���ٱ���
#define GPS_ALARM_TYPE_END_BEYOND_BOUNDS		62		//Խ�籨��
#define GPS_ALARM_TYPE_END_DOOR_ABNORMAL		63		//�쳣���س��ű���
#define GPS_ALARM_TYPE_END_PARK_TOO_LONG		64		//ͣ����������
#define GPS_ALARM_TYPE_END_MOTION				65		//�ƶ���ⱨ��
#define GPS_ALARM_TYPE_ACC_OFF					66		//ACC�رձ���
#define GPS_ALARM_TYPE_DEV_DISONLINE			67		//�豸����
#define GPS_ALARM_TYPE_END_GPS_SIGNAL_LOSS      68      //GPSѶ�Ŷ�ʧ����
#define GPS_ALARM_TYPE_END_IO_1                 69      //IO_1����
#define GPS_ALARM_TYPE_END_IO_2                 70      //IO_2����
#define GPS_ALARM_TYPE_END_IO_3                 71      //IO_3����
#define GPS_ALARM_TYPE_END_IO_4                 72      //IO_4����
#define GPS_ALARM_TYPE_END_IO_5                 73      //IO_5����
#define GPS_ALARM_TYPE_END_IO_6                 74      //IO_6����
#define GPS_ALARM_TYPE_END_IO_7                 75      //IO_7����
#define GPS_ALARM_TYPE_END_IO_8                 76      //IO_8����
#define GPS_ALARM_TYPE_END_IN_FENCE		            77      //�������򱨾�
#define GPS_ALARM_TYPE_END_OUT_FENCE		        78      //�����򱨾�
#define GPS_ALARM_TYPE_END_IN_FENCE_OVER_SPEED      79      //�����ڸ��ٱ���
#define GPS_ALARM_TYPE_END_OUT_FENCE_OVER_SPEED     80      //��������ٱ���
#define GPS_ALARM_TYPE_END_IN_FENCE_LOW_SPEED       81      //�����ڵ��ٱ���
#define GPS_ALARM_TYPE_END_OUT_FENCE_LOW_SPEED		82      //��������ٱ���
#define GPS_ALARM_TYPE_END_IN_FENCE_STOP			83      //������ͣ������
#define GPS_ALARM_TYPE_END_OUT_FENCE_STOP			84      //������ͣ������
#define GPS_ALARM_TYPE_END_GPS_UNENABLE				85		//GPS��Ч
//���ͺ�͵��û�н���
#define GPS_ALARM_TYPE_END_REFUEL					86		//����	AlarmInfoΪ���͵�����(9999=99.99��)��Param[0]Ϊ����ǰ�ͺ�
#define GPS_ALARM_TYPE_END_STILL_FUEL				87		//͵��	AlarmInfoΪ͵�͵�����(9999=99.99��)��Param[0]Ϊ͵��ǰ�ͺ�

#define GPS_ALARM_TYPE_END_IO_9				        91      //IO_9����
#define GPS_ALARM_TYPE_END_IO_10			        92      //IO_10����
#define GPS_ALARM_TYPE_END_IO_11					93      //IO_11����
#define GPS_ALARM_TYPE_END_IO_12					94      //IO_12��.

#define GPS_ALARM_TYPE_END_FATIGUE					99		//ƣ�ͼ�ʻ	AlarmInfo��ʾ��������	0 , û�У� 1  һ������ 2 ��������, 3 ��������, 4 ��ע�ȱ���


#define GPS_EVENT_TYPE_PARK						101		//ͣ���¼�			Param[0]Ϊͣ��������Param[1]Ϊͣ��ǰ�ͺ�(9999=99.99��)��Param[2]Ϊͣ�����ͺ�
#define GPS_EVENT_TYPE_PARK_ACCON				102		//ͣ��δϨ���¼�	Param[0]Ϊͣ��������Param[1]Ϊͣ��ǰ�ͺ�(9999=99.99��)��Param[2]Ϊͣ�����ͺ�
														//ͣ��δϨ���¼�һ�㴦��ͣ���¼������һ��ʱ���ڣ�11:00 - 11:20����ͣ����11:00 - 11:05 ����ͣ��δϨ��
#define GPS_EVENT_TYPE_NET_FLOW					103		//����	Param[0]Ϊ��ǰʱ�䣨��λ�룬�磺7206 = ����02:06ʱ ����Param[1]Ϊ����������Param[2]Ϊ��������
#define GPS_EVENT_TYPE_REFUEL					104		//����	AlarmInfoΪ���͵�����(9999=99.99��)��Param[0]Ϊ����ǰ�ͺ�
#define GPS_EVENT_TYPE_STILL_FUEL				105		//͵��	AlarmInfoΪ͵�͵�����(9999=99.99��)��Param[0]Ϊ͵��ǰ�ͺ�
#define GPS_EVENT_TYPE_OVERSPEED				106		//�����¼�	AlarmInfoΪ�ٶ�(999=99.9KM/H)��Param[0]���ٵ�ʱ�䣬Param[1]Ϊ�������ͣ������ٻ��߳����١���ʱ��Ч��
#define GPS_EVENT_TYPE_FENCE_ACCESS				107		//���������¼�	 Param[0]�����ţ�Param[1]�����򾭶ȣ�Param[2]������γ�ȣ�Param[3]����ͣ��ʱ��(�룩
#define GPS_EVENT_TYPE_FENCE_PARK				108		//����ͣ���¼�	 Param[0]�����ţ�Param[3]����ͣ��ʱ�䣨�룩
#define GPS_EVENT_TYPE_FILE_UPLOAD				109		//ͼƬ�ļ�����¼���ļ��ϴ�
#define GPS_EVENT_TYPE_STATION_INFO				110		//��վ��Ϣ
#define GPS_EVENT_TYPE_SEA_STATUS				111		//����״̬���� 1������ 2������ 3���⺣�������� 4���⺣������������
//#define GPS_EVENT_TYPE_LOCK_STATUS				112		//������״̬					
#define GPS_ALARM_TYPE_CUSTOM					113		//�Զ��屨��, AlarmInfo��ʾ����
										// param[0]��ʾ����1��param[1]��ʾ����2��param[2]��ʾ����3, param[3]��ʾ����4, 
										//szDesc��ʾ���ݣ�Ϊ�ַ�����ʽ���м䲻�������'\0'���Ϊ256���ֽ�
#define GPS_EVENT_TYPE_OVERSPEED_WARNING		114		//����Ԥ��
#define GPS_EVENT_TYPE_LOWSPEED_WARNING			115		//����Ԥ��
#define GPS_EVENT_TYPE_DRIVER					116		//��ʻԱ��Ϣ�ɼ��ϱ� AlarmInfo��1��ʾ��¼��0��ʾ��ǩ��
														//szReserve ��ʾ˾�����ƣ�szDesc ��ʾ��֤���أ�szImgFile���� ';' �ָ� ������֤��;��ҵ�ʸ�֤����
#define GPS_EVENT_TYPE_OVER_STATION				117		//��վ���� 
#define GPS_EVENT_TYPE_EXCEED_STATION			118		//Խվ������param[0],param[1]ǰһ����վʱ���վ��

#define GPS_EVENT_TYPE_TASK_READ				121		//guidΪ��Ӧ������guid,��Ա�Ѿ��鿴�˵�������
#define GPS_EVENT_TYPE_TASK_REPLY				122		//guidΪ��Ӧ������guid,��Ա�Ե�����������˻ظ���szDesc��Ϊ�ظ�����
#define GPS_ALARM_TYPE_MOBILE_USEDEFINE			123		//�Զ��屨��

#define GPS_ALARM_TYPE_TALK_BACK_REQ			127		//���������Խ������Ա�����ʽ����
#define GPS_ALARM_TYPE_DEVICE_INFO_CHANGE		128		//������Ϣ�����仯�����û��޸��豸��Ϣ
#define GPS_ALARM_TYPE_SNAPSHOT_FINISH			129		//�洢������ץ����ɣ��Ա�����ʽ���͸��ͻ���
#define GPS_ALARM_TYPE_DOWN_FINISH				130		//�洢�������ļ�����������ɣ��Ա�����ʽ���͸��ͻ���
#define GPS_ALARM_TYPE_DEVICE_INFO_CHANGE_EX	131		//������Ϣ�����仯�����û��޸��豸��Ϣ
#define GPS_ALARM_TYPE_TRANS_PORT				132		//͸������
#define GPS_ALAMT_TYPE_SWIPE_CARD				133		//ˢ����¼ ��ͬ��˾������ alarminfo��-1��ʾ�����³���ʾ�� 0-�ϳ��� 1-�³� desc:����

#define GPS_ALARM_TYPE_NIGHT_DRIVING 			151		//ҹ����ʻ����
#define GPS_ALARM_TYPE_END_NIGHT_DRIVING		152
#define GPS_ALARM_TYPE_GATHERING				153		//���ڱ���
#define GPS_ALARM_TYPE_END_GATHERING			154
#define GPS_ALARM_TYPE_USP_CUT		 			155		//UPS ���߱���
#define GPS_ALARM_TYPE_END_USP_CUT				156
#define GPS_ALARM_TYPE_HDD_HIGH_TEMPERATURE		157		//Ӳ�̳��±���
#define GPS_ALARM_TYPE_END_HDD_HIGH_TEMPERATURE	158
#define GPS_ALARM_TYPE_BEFORE_BOARD_OPENED		159		//ǰ��屻�˿�
#define GPS_ALARM_TYPE_END_BEFORE_BOARD_OPENED	160		
#define GPS_ALARM_TYPE_TURN_OFF					161		//�ػ��ϱ�	alarmInfoΪԭ��: 1 ACC ��Ч�ػ�,2��ʱ�ػ�,3�������, 4����쳣�ػ�,5����ػ�,6Ӳ�����򿪹ػ�
#define GPS_ALARM_TYPE_DISK_SPACE_WARNING		162		//Ӳ�̿ռ䱨��		Ӳ�̿ռ侯��,alarmInfoΪӲ�̺�,param[0]��ʾӲ������TTX_DISK_TYPE_SD, param[1]�ܿռ�, param[2]ʣ��ռ�,  16000��ʾ�ռ�Ϊ16000MB
#define GPS_ALARM_TYPE_END_DISK_SPACE_WARNING	163		//Ӳ�̿ռ䱨��
#define GPS_ALARM_TYPE_GSENSOR					164		//GSENSOR����
#define GPS_ALARM_TYPE_END_GSENSOR				165
#define GPS_ALARM_TYPE_SIM_LOST					166		//SIM����ʧ����
#define GPS_ALARM_TYPE_END_SIM_LOST				167
#define GPS_ALARM_TYPE_TPMS						168		//̥ѹ����			//	̥ѹ����, alarmInfo  TPMS�������ͣ�1��ʾ��ص�ѹ���棬2��ʾ̥ѹ�쳣������3��ʾ�¶��쳣��,
//			param[0] ��ǰ�¶� ��: 200 = 20��
//			param[1] ��ǰ̥ѹ ��: 25 = 2.5P
//			param[2] ��ǰ��ѹ ��: 102=10.2V
//			param[3] ��������ţ�01��ʾTPMS��1��02��ʾTPMS��2��03��ʾTPMS��3��04��ʾTPMS��4��11��ʾTPMS��1��12��ʾTPMS��2��13��ʾTPMS��3��14��ʾTPMS��4��
#define GPS_ALARM_TYPE_END_TPMS					169		//̥ѹ��������

#define GPS_ALARM_TYPE_FACE_WARNING				170		//����ʾ
#define GPS_ALARM_TYPE_END_FACE_WARNING			171		//
#define GPS_ALARM_TYPE_CLOSE_EYE_WARNING		172		//���۾�ʾ
#define GPS_ALARM_TYPE_END_CLOSE_EYE_WARNING	173		//
#define GPS_ALARM_TYPE_PHONE_WARNING			174		//�ֻ���ʾ
#define GPS_ALARM_TYPE_END_PHONE_WARNING		175		//
#define GPS_ALARM_TYPE_SMOKE_WARNING			176		//���̾�ʾ
#define GPS_ALARM_TYPE_END_SMOKE_WARNING		177		//

//808���ֱ���
#define GPS_ALARM_TYPE_AREA_OVERSPEED					200		//�����ٱ���
#define GPS_ALARM_TYPE_WARNING							201		//Ԥ��
#define GPS_ALARM_TYPE_GNSS_MOD_ERR						202		//GNSSģ�����
#define GPS_ALARM_TYPE_GNSS_WIRE_MISS					203		//GNSS����δ�ӻ��߼���
#define GPS_ALARM_TYPE_GNSS_WIRE_SHORTAGE				204		//GNSS���߶�·
#define GPS_ALARM_TYPE_VOLTAGE_LOW						205		//��ԴǷѹ
#define GPS_ALARM_TYPE_POWER_OFF						206		//��Դ����
#define GPS_ALARM_TYPE_LCD_ERR							207		//LCD������ʾ������
#define GPS_ALARM_TYPE_TTS_MOD_ERR						208		//TTSģ�����
#define GPS_ALARM_TYPE_CAMERA_MOD_ERR					209		//����ͷ����
#define GPS_ALARM_TYPE_DIRVE_TIMEOUT					210		//�ۼƼ�ʻ��ʱ
#define GPS_ALARM_TYPE_AREA_INOUT						211		//��������
#define GPS_ALARM_TYPE_LINE_INOUT						212		//������·
#define GPS_ALARM_TYPE_LINE_DRIVE_TIME					213		//·����ʻʱ�����/����
#define GPS_ALARM_TYPE_LINE_DEVIATE						214		//��·ƫ��
#define GPS_ALARM_TYPE_VSS_ERR							215		//VSS����
#define GPS_ALARM_TYPE_OIL_ABNORMAL						216		//�����쳣
#define GPS_ALARM_TYPE_STOLEN							217		//��������
#define GPS_ALARM_TYPE_MOVE_LAWLESS						218		//�Ƿ�λ��
#define GPS_ALARM_TYPE_COLLISION						219		//��ײ�෭����
#define GPS_ALARM_TYPE_PASSENGER_FORBID					220		//���˳�����ֹ  param[0]��ǰ��������ֵ
#define GPS_ALARM_TYPE_MOUNTAIN_FORBID					221		//ɽ����·��ֹ  param[0]-λ������ param[1]-���������·ID param[2]��ǰ��������ֵ 
#define GPS_ALARM_TYPE_OVERSPEED_L1_FIVE_LESS		    222		//����20%  5������
#define GPS_ALARM_TYPE_OVERSPEED_L1_FIVE_TO_TEN			223		//����20%  5(��)-10����
#define GPS_ALARM_TYPE_OVERSPEED_L1_TEN_MORE			224		//����20%  10(��)��������
#define GPS_ALARM_TYPE_OVERSPEED_L2_FIVE_LESS			225		//����20-50%  5������
#define GPS_ALARM_TYPE_OVERSPEED_L2_FIVE_TO_TEN			226		//����20-50%  5(��)-10����
#define GPS_ALARM_TYPE_OVERSPEED_L2_TEN_MORE			227		//����20-50%  10(��)��������
#define GPS_ALARM_TYPE_OVERSPEED_L3_FIVE_LESS			228		//����50%  5������
#define GPS_ALARM_TYPE_OVERSPEED_L3_FIVE_TO_TEN			229		//����50%  5(��)-10����
#define GPS_ALARM_TYPE_OVERSPEED_L3_TEN_MORE			230		//����50%  10(��)��������
#define GPS_ALARM_TYPE_OVERLAOD							231		//����

#define GPS_ALARM_TYPE_END_AREA_OVERSPEED				250		//�����ٱ���
#define GPS_ALARM_TYPE_END_WARNING						251		//Ԥ��
#define GPS_ALARM_TYPE_END_GNSS_MOD_ERR					252		//GNSSģ�����
#define GPS_ALARM_TYPE_END_GNSS_WIRE_MISS				253		//GNSS����δ�ӻ��߼���
#define GPS_ALARM_TYPE_END_GNSS_WIRE_SHORTAGE			254		//GNSS����δ�ӻ��߼���
#define GPS_ALARM_TYPE_END_VOLTAGE_LOW					255		//��ԴǷѹ
#define GPS_ALARM_TYPE_END_POWER_OFF					256		//��Դ����
#define GPS_ALARM_TYPE_END_LCD_ERR						257		//LCD������ʾ������
#define GPS_ALARM_TYPE_END_TTS_MOD_ERR					258		//TTSģ�����
#define GPS_ALARM_TYPE_END_CAMERA_MOD_ERR				259		//TTSģ�����
#define GPS_ALARM_TYPE_END_DIRVE_TIMEOUT				260		//�ۼƼ�ʻ��ʱ
#define GPS_ALARM_TYPE_END_AREA_INOUT					261		//��������
#define GPS_ALARM_TYPE_END_LINE_INOUT					262		//������·
#define GPS_ALARM_TYPE_END_LINE_DRIVE_TIME				263		//·����ʻʱ�����/����
#define GPS_ALARM_TYPE_END_LINE_DEVIATE					264		//��·ƫ��
#define GPS_ALARM_TYPE_END_VSS_ERR						265		//VSS����
#define GPS_ALARM_TYPE_END_OIL_ABNORMAL					266		//�����쳣
#define GPS_ALARM_TYPE_END_STOLEN						267		//��������
#define GPS_ALARM_TYPE_END_MOVE_LAWLESS					268		//�Ƿ�λ��
#define GPS_ALARM_TYPE_END_COLLISION					269		//��ײ�෭����
#define GPS_ALARM_TYPE_END_PASSENGER_FORBID				270		//���˳�����ֹ  param[0]��ǰ��������ֵ
#define GPS_ALARM_TYPE_END_MOUNTAIN_FORBID				271		//ɽ����·��ֹ  param[0]-λ������ param[1]-���������·ID param[2]��ǰ��������ֵ 
#define GPS_ALARM_TYPE_END_OVERSPEED_L1_FIVE_LESS		272		//����20%  5������
#define GPS_ALARM_TYPE_END_OVERSPEED_L1_FIVE_TO_TEN		273		//����20%  5(��)-10����
#define GPS_ALARM_TYPE_END_OVERSPEED_L1_TEN_MORE		274		//����20%  10(��)��������
#define GPS_ALARM_TYPE_END_OVERSPEED_L2_FIVE_LESS		275		//����20-50%  5������
#define GPS_ALARM_TYPE_END_OVERSPEED_L2_FIVE_TO_TEN		276		//����20-50%  5(��)-10����
#define GPS_ALARM_TYPE_END_OVERSPEED_L2_TEN_MORE		277		//����20-50%  10(��)��������
#define GPS_ALARM_TYPE_END_OVERSPEED_L3_FIVE_LESS		278		//����50%  5������
#define GPS_ALARM_TYPE_END_OVERSPEED_L3_FIVE_TO_TEN		279		//����50%  5(��)-10����
#define GPS_ALARM_TYPE_END_OVERSPEED_L3_TEN_MORE		280		//����50%  10(��)��������
#define GPS_ALARM_TYPE_END_OVERLAOD						281		//����

#define GPS_ALARM_TYPE_CMS_AREA_OVERSPEED			300		//�����ٱ���(ƽ̨����) param[0]-λ������ param[1]-���������·ID param[2]-�ٶȷ�ֵ
#define GPS_ALARM_TYPE_CMS_AREA_LOWSPEED			301		//������ٱ���(ƽ̨����) param[0]-λ������ param[1]-���������·ID param[2]-�ٶȷ�ֵ	
#define GPS_ALARM_TYPE_CMS_AREA_INOUT				302		//����������(ƽ̨����)	 param[0]-λ������ param[1]-���������·ID param[2]-0:��1:��
#define GPS_ALARM_TYPE_CMS_LINE_INOUT				303		//��·ƫ��(ƽ̨����)	 param[0]-λ������ param[1]-���������·ID param[2]-0:��1:��
#define GPS_ALARM_TYPE_CMS_OVERSPEED				304		//ʱ��γ��ٱ���(ƽ̨����) param[0]�ٶȷ�ֵ
#define GPS_ALARM_TYPE_CMS_LOWSPEED					305		//ʱ��ε��ٱ���(ƽ̨����) param[0]�ٶȷ�ֵ
#define GPS_ALARM_TYPE_CMS_FATIGUE					306		//ƣ�ͼ�ʻ(ƽ̨����)   
#define	GPS_ALARM_TYPE_CMS_PARK_TOO_LONG			307		//��ʱͣ��(ƽ̨����)
#define GPS_ALARM_TYPE_CMS_AREA_POINT				308		//�ؼ����ر���(ƽ̨����)	param[0]-λ������ param[1]-���������·ID param[2]-0:δ����1:δ�뿪
#define GPS_ALARM_TYPE_CMS_LINE_OVERSPEED			309		//��·���ٱ���(ƽ̨����) param[0]-λ������ param[1]-��·ID param[2]-�ٶȷ�ֵ
#define GPS_ALARM_TYPE_CMS_LINE_LOWSPEED			310		//��·���ٱ���(ƽ̨����) param[0]-λ������ param[1]-��·ID param[2]-�ٶȷ�ֵ
#define GPS_ALARM_TYPE_CMS_ROAD_LVL_OVERSPEED		311		//��·�ȼ����ٱ���(ƽ̨����) param[0]-��·�ȼ� param[1]-�б�־ param[2]-�ٶȷ�ֵ

#define GPS_ALARM_TYPE_END_CMS_AREA_OVERSPEED		350		//�����ٱ���(ƽ̨����) param[0]-λ������ param[1]-���������·ID param[2]-�ٶȷ�ֵ	
#define GPS_ALARM_TYPE_END_CMS_AREA_LOWSPEED		351		//������ٱ���(ƽ̨����) param[0]-λ������ param[1]-���������·ID param[2]-�ٶȷ�ֵ
#define GPS_ALARM_TYPE_END_CMS_AREA_INOUT			352		//����������(ƽ̨����)	 param[0]-λ������ param[1]-���������·ID param[2]-0:��1:��	
#define GPS_ALARM_TYPE_END_CMS_LINE_INOUT			353		//��·ƫ��(ƽ̨����)	 param[0]-λ������ param[1]-���������·ID param[2]-0:��1:��
#define GPS_ALARM_TYPE_END_CMS_OVERSPEED			354		//ʱ��γ��ٱ���(ƽ̨����)
#define GPS_ALARM_TYPE_END_CMS_LOWSPEED				355		//ʱ��ε��ٱ���(ƽ̨����)
#define GPS_ALARM_TYPE_END_CMS_FATIGUE				356		//ƣ�ͼ�ʻ(ƽ̨����)
#define	GPS_ALARM_TYPE_END_CMS_PARK_TOO_LONG		357		//��ʱͣ��(ƽ̨����)
#define GPS_ALARM_TYPE_END_CMS_AREA_POINT			358		//�ؼ����ر���(ƽ̨����)	param[0]-λ������ param[1]-���������·ID param[2]-0:δ����1:δ�뿪
#define GPS_ALARM_TYPE_END_CMS_LINE_OVERSPEED		359		//��·���ٱ���(ƽ̨����) param[0]-λ������ param[1]-��·ID param[2]-�ٶȷ�ֵ
#define GPS_ALARM_TYPE_END_CMS_LINE_LOWSPEED		360		//��·���ٱ���(ƽ̨����) param[0]-λ������ param[1]-��·ID param[2]-�ٶȷ�ֵ
#define GPS_ALARM_TYPE_END_CMS_ROAD_LVL_OVERSPEED	361		//��·�ȼ����ٱ���(ƽ̨����) param[0]-��·�ȼ� param[1]-�б�־ param[2]-�ٶȷ�ֵ


//�Զ��屨�����������Ͷ��� GPS_ALARM_TYPE_CUSTOM(113)
#define CUSTOM_ALARM_TYPE_PLATE					1	//����ͼƬץ��
#define CUSTOM_ALARM_TYPE_PRESON				2	//����ʶ��
#define CUSTOM_ALARM_TYPE_EMPTY_PASSENGER		3	//����
#define CUSTOM_ALARM_TYPE_LOAD_PASSENGER		4	//����
#define CUSTOM_ALARM_TYPE_FENCE_ACC_SPPED		5	//����Χ����,AAC��,�ٶ�0,����
#define CUSTOM_ALARM_TYPE_TTS_REPLY				6	//tts�ظ�
#define CUSTOM_ALARM_TYPE_OFF_ROUTE				7	//ƫ����·,PAD�ϴ�����
#define CUSTOM_ALARM_TYPE_TASK_FAILED			8	//����ʧ��,PAD�ϴ�����
#define CUSTOM_ALARM_TYPE_TASK_FINISHED			9	//�������,PAD�ϴ�����
#define CUSTOM_ALARM_TYPE_ALARM_ACTION			10	//��������
#define CUSTOM_ALARM_TYPE_START_ACC_SPEED5		11	//ACC�ź���Ч�����ٵ���5����/Сʱ ������ʼ
#define CUSTOM_ALARM_TYPE_END_ACC_SPEED5		12	//ACC�ź���Ч�����ٵ���5����/Сʱ ��������
#define CUSTOM_ALARM_TYPE_START_SPPED0_IO3		13	//ACC�ź���Ч������Ϊ0ʱ�����賵�Ĺ�Ͳ״̬��ת(IO_3) ������ʼ
#define CUSTOM_ALARM_TYPE_END_SPPED0_IO3		14	//ACC�ź���Ч������Ϊ0ʱ�����賵�Ĺ�Ͳ״̬��ת(IO_3) ��������

#define CUSTOM_ALARM_TYPE_EVENT_REPORT			15	//808�¼�����
#define CUSTOM_ALARM_TYPE_INFO_DEMAND			16	//808�㲥��Ϣ
#define CUSTOM_ALARM_TYPE_ELECTRONIC_WAYBILL	17	//808�����˵�
#define CUSTOM_ALARM_TYPE_COMPRESS_DATA			18	//ѹ������
#define CUSTOM_ALARM_TYPE_OFL_TASK				19	//��������֪ͨ
#define CUSTOM_ALARM_TYPE_MEDIA_EVETN			20	//ý���¼�

//809�����Ϣ��Ҫ�ڿͻ��˵�����ʾ���յ��û��������ٷ��ص��ϼ�ƽ̨
//�ظ�ʱ��Ҫ�������ϢID�ظ����ͻ���
// 	GPSVehicleAlarm_S VehiAlarm = {0};
// 	STRINGGenerateGUID(VehiAlarm.Alarm.guid);
//	strncpy(VehiAlarm.szDevIDNO, NETLOGIN_GetIDNO(), sizeof(VehiAlarm.szDevIDNO) - 1);
//	VehiAlarm.Alarm.AlarmType = GPS_ALARM_TYPE_CUSTOM;
//	VehiAlarm.Alarm.AlarmInfo = nAlarmInfo;
//	VehiAlarm.Alarm.Param[0] = pInfo->nObjType;
//	VehiAlarm.Alarm.Param[1] = pInfo->nMsgID;
//	VehiAlarm.Alarm.Param[2] = strlen(pInfo->szContent);
//	strncpy(VehiAlarm.Alarm.szDesc, pInfo->szObjID, sizeof(VehiAlarm.Alarm.szDesc) - 1);
//	strncpy(VehiAlarm.Alarm.szImgFile, pInfo->szContent, sizeof(VehiAlarm.Alarm.szImgFile) - 1);
#define CUSTOM_ALARM_TYPE_809_PLATFORM_POST_QUERY	21	//809�����Ϣ
//		�ϼ�ƽ̨ ---���¼�ƽ̨	ƽ̨�����Ϣ
//szDevIDNO�����ط��������
//Param1����ڶ�������
//Param2��������ϢID
//szDesc��Ӫ��֤��
//szImgFile����ѯ��Ϣ����
// ��������		
// 0x00  �¼�ƽ̨������һƽ̨
// 0X01  ��ǰ���ӵ��¼�ƽ̨����ƽ̨�������������ƽ̨Ψһ������ɣ�
// 0X02  �¼�ƽ̨������һҵ����Ϊҵ����Ӫ���֤��  
// 0X03  �¼�ƽ̨��������ҵ��
// 0X04  �¼�ƽ̨����ƽ̨
// 0X05  �¼�ƽ̨����ƽ̨��ҵ��
// 0X06  �¼�ƽ̨�����������ƽ̨������ضˣ�
// 0X07  �¼�ƽ̨������ҵ���ƽ̨
// 0X08  �¼�ƽ̨���о�Ӫ����ҵ���ƽ̨
// 0X09  �¼�ƽ̨���зǾ�Ӫ����ҵ���ƽ̨


//����Ϊ809��ص��¼�����Ҫ�ڿͻ�������ʾ
// 	GPSVehicleAlarm_S VehiAlarm = {0};
// 	STRINGGenerateGUID(VehiAlarm.Alarm.guid);
// 	strncpy(VehiAlarm.szDevIDNO, szDevIDNO, sizeof(VehiAlarm.szDevIDNO) - 1);		//�豸���
// 	VehiAlarm.Alarm.AlarmType = GPS_ALARM_TYPE_CUSTOM;				
// 	VehiAlarm.Alarm.AlarmInfo = nAlarmType;		��Ӧ Ϊ  CUSTOM_ALARM_TYPE_809_EVENT_MONITOR_START_UP ��			
// 	VehiAlarm.Alarm.Param[0] = nColor;			��Ӧ�ĳ�����ɫ		
// 	VehiAlarm.Alarm.Param[1] = nParam2;
// 	VehiAlarm.Alarm.bSendOnly = 1;
// 	strncpy(VehiAlarm.Alarm.szDesc, NETLOGIN_GetIDNO(), sizeof(VehiAlarm.Alarm.szDesc) - 1);		//���ط������ı��
// 	strncpy(VehiAlarm.Alarm.szImgFile, szContent, sizeof(VehiAlarm.Alarm.szImgFile) - 1);			//
#define CUSTOM_ALARM_TYPE_809_EVENT_RETURN_START_UP					22	
//		�ϼ�ƽ̨ ---���¼�ƽ̨	����������λ���ݽ���
//		�¼����ݣ�	�ϼ�ƽ̨����������λ��Ϣ����������Ϣ:����=%s, ��ɫ=%d,����ԭ��%s
//		������		nParam2��	����ԭ��		0����������ָ������		1���˹�ָ������		2��Ӧ��״̬�µĳ�����λ���ݻش���3������ԭ��
#define CUSTOM_ALARM_TYPE_809_EVENT_RETURN_END						23	
//		�ϼ�ƽ̨ ---���¼�ƽ̨	ֹͣ������λ���ݽ���
//		�¼����ݣ�	�ϼ�ƽֹ̨ͣ������λ��Ϣ����������Ϣ:����=%s, ��ɫ=%d,����ԭ��%s
//		������		nParam2��	ֹͣԭ��		//0�������뿪ָ������		1���˹�ֹͣ����		2������������		3������ԭ��		4������ԭ��
#define CUSTOM_ALARM_TYPE_809_EVENT_MONITOR_START_UP_ASK			24	
//		�ϼ�ƽ̨ ---���¼�ƽ̨	����������λ���ݽ���Ӧ��
//		�¼����ݣ�	���뽻���ƶ�������λ��ϢӦ����Ϣ:����=%s, ��ɫ=%d,�����%s
//		������		nParam2��	���	0������ɹ���1���ϼ�û�иó�����Ϣ��2������ʱ��δ���3������
#define CUSTOM_ALARM_TYPE_809_EVENT_MONITOR_END_ASK					25	
//		�ϼ�ƽ̨ ---���¼�ƽ̨	ȡ��������λ���ݽ���Ӧ��
//		�¼����ݣ�	ȡ�����뽻���ƶ�������λ��ϢӦ����Ϣ:����=%s, ��ɫ=%d,�����%s
//		������		nParam2��	0��ȡ������ɹ���1��֮ǰû�ж�Ӧ�ĸó�����Ϣ��2������
#define CUSTOM_ALARM_TYPE_809_EVENT_APPLY_HISGNSSDATA_ASK			26
//		�ϼ�ƽ̨ ---���¼�ƽ̨	�¼�ƽ̨���󲹴�������̬����Ӧ��
//		�¼����ݣ�	����������λ��ϢӦ����Ϣ:����=%s, ��ɫ=%d,�����%s
//		������		nParam2��	//0���ɹ����ϼ�ƽ̨���̲�����1���ɹ����ϼ�ƽ̨���������2��ʧ�ܣ��ϼ�ƽ̨�޶�Ӧ���붨λ���ݣ�3��ʧ�ܣ��������ݲ���ȷ��4������ԭ��
#define CUSTOM_ALARM_TYPE_809_EVENT_CAR_INFO						27
//		�ϼ�ƽ̨ ---���¼�ƽ̨	������̬����
//		�¼����ݣ�	����������̬��Ϣ��Ϣ:����=%s,��ɫ=%d, ������̬��Ϣ:%s
//		������		szContentΪ������̬��Ϣ
#define CUSTOM_ALARM_TYPE_809_PLATFORM_INFO							28	//ƽ̨����
//		�ϼ�ƽ̨ ---���¼�ƽ̨	ƽ̨����
//		�� CUSTOM_ALARM_TYPE_809_PLATFORM  �������ݶ���һ��
//		�¼����ݣ�	�·�ƽ̨����, ��������=%d, ��ϢID=%d, Ӫ��֤��=%s, ��Ϣ����=%s
#define CUSTOM_ALARM_TYPE_809_WARN_URGE_TODO						29	//��������
//		�ϼ�ƽ̨ ---���¼�ƽ̨	�������죬�ͻ�����Ҫ������лظ�
//		�¼����ݣ�	��������������Ϣ ����=%s, ��ϢID=%d, ��ϢԴ=%s, ���켶��=%s�� ��������=%s,����ʱ��=%s, ��������=%s  ������=%s,����绰=%s, ����Email=%s
//		������		param1��	������ɫ
//					param2��	��16λΪ  nWarnSrc����Դ	1�����նˣ�2��ҵƽ̨��3����ƽ̨��9����  
//							��16λΪ  usWarnType��������		
//								1  ���ٱ�����2 ƣ�ͼ�ʻ������3 ����������4 ����ָ�����򱨾���5  �뿪ָ�����򱨾�	6  ·����������   7  Σ��·�α���	
//								8  Խ��		9 ����		10  �پ�	11   ƫ��·��    12  �����ƶ�    13  ��ʱ��ʻ   FF  ��������
//					param3��	uiSuporVisionID		����ID
//					param4��	uiSuporVisionLeve	�������켶��		0������1һ��
//					szDesc		������;����绰;����Email
//					srcTime		����ʱ��
//					Gps.Time	���������ֹʱ��
#define CUSTOM_ALARM_TYPE_809_WARN_INFORMTIPS						30	//����Ԥ����Ϣ
//		�ϼ�ƽ̨ ---���¼�ƽ̨	����Ԥ����Ϣ
//		�¼����ݣ�	����Ԥ����Ϣ ����=%s, ��ɫ=%d, ��Ϣ��Դ=%s, ����ʱ��=%s, ������Ϣ=%s:%s
//		������		param1��	������ɫ
//					param2��	��16λΪ  nWarnSrc����Դ	1�����նˣ�2��ҵƽ̨��3����ƽ̨��9����  
//							��16λΪ  usWarnType��������	
//					srcTime		����ʱ��
//					szDesc		������Ϣ����
#define CUSTOM_ALARM_TYPE_809_WARN_EXG_INFO							31	//����������Ϣ
//		�ϼ�ƽ̨ ---���¼�ƽ̨	����������Ϣ
//		�� CUSTOM_ALARM_TYPE_809_WARN_INFORMTIPS  �������ݶ���һ��
//		�¼����ݣ�	ʵʱ����������Ϣ ����=%s, ��Ϣ��Դ=%s, ����ʱ��=%s, ������Ϣ=%s:%s
#define CUSTOM_ALARM_TYPE_809_CONN_MSG_INFO							32	//���ϼ�ƽ̨��������Ϣ
//		�ϼ�ƽ̨ ��---���¼�ƽ̨	������Ϣ
//		������		szImgFile		������Ϣ���ݣ�ֱ������ʾ������


#define CUSTOM_ALARM_TYPE_MEDIA_INFO								40
//֪ͨý����Ϣ(֪ͨ�����ط�����)


#define CUSTOM_ALARM_TYPE_QUESTION_ANSWER								41	//����Ӧ�� param[0] �ظ���ˮ�� param[1]�ظ���ID

#define CUSTOM_ALARM_TYPE_BARCODE_SCAN									42	//������ɨ�豨��

#define CUSTOM_ALARM_TYPE_PLATFORM_TEXT									43  //ƽ̨��ͨ�������ı���Ϣ  param[0]���ͷ��û�ID�� param[1]���ܷ��û�ID szDesc:��������

//����:�Զ��屨��
#define GPS_ALARM_TYPE_SIMUL_INFRARED_HILLFIRE      400     //ͬ�����ǣ������Դ��ⱨ��
#define GPS_ALARM_TYPE_SIMUL_ULTRAVIOLET_PHOTON     401     //ͬ�����ǣ�������·���ηŵ籨��
#define GPS_ALARM_TYPE_SIMUL_IO                     402     //ͬ�����ǣ�IO����
#define GPS_ALARM_TYPE_SIMUL_TEMPERATURE_OVERRUN    403     //ͬ�����ǣ��¶ȳ��ޱ���
#define GPS_ALARM_TYPE_SIMUL_WIND_SPEED_DIRECTION   404     //ͬ�����ǣ����ٷ��򱨾�
#define GPS_ALARM_TYPE_SIMUL_RAINFALL_OVERRUN       405     //ͬ�����ǣ��������ޱ���


//��·�ȼ�����
#define ROAD_LEVEL_UNKOWN				0	//δ֪
#define ROAD_LEVEL_HIGH_ROAD			1	//����·
#define ROAD_LEVEL_CITYHIGH_ROAD		2	//���и���·
#define ROAD_LEVEL_NATIONAL_ROAD		3	//����
#define ROAD_LEVEL_PROVINICIAL_ROAD		4	//ʡ��
#define ROAD_LEVEL_PREFECTURA_ROAD		5	//�ص�
#define ROAD_LEVEL_CONUTY_ROAD			6	//������
#define ROAD_LEVEL_OTHER_ROAD			7	//������·
#define ROAD_LEVEL_NINE_ROAD			8	//�ż�·
#define ROAD_LEVEL_FERRY_ROAD			9	//�ֶ�
#define ROAD_LEVEL_PEDESTRIAN_ROAD		10	//���˵�·


#define GPS_CNT_MSG_SUCCESS				0
#define GPS_CNT_MSG_FAILED				-1
#define GPS_CNT_MSG_DISCONNECT			-2
#define GPS_CNT_MSG_FINISHED			-3
#define GPS_CNT_MSG_USR_FULL_ERROR		-4
#define GPS_CNT_MSG_USR_ERROR			-5

#define GPS_NOTIFY_TYPE_AUDIO_COM		1

#define GPS_AUDIO_TYPE_HEAD				1
#define GPS_AUDIO_TYPE_DATA				2

#define GPS_SETUP_MODE_SEND_ONLY		1	//ֻ����ָ����ȴ�����
#define GPS_SETUP_MODE_WAIT_RET			2	//����ָ����ȴ�����
#define GPS_SETUP_MODE_WAIT_ASYN		3	//����ָ��ϲ��鷵��

#define GPS_GPS_VALID					1

#define GPS_DEV_TYPE_MDVR				1 //�����ն�
#define GPS_DEV_TYPE_MOBILE				2 //�ֻ��ն�
#define GPS_DEV_TYPE_DVR				3 //��ͨDVR
#define GPS_DEV_TYPE_PAD				4 //PAD����

#define GPS_MOBILE_TYPE_ANDROID			1 //�ֻ��ն�-Android
#define GPS_MOBILE_TYPE_IPHONE			2 //�ֻ��ն�-Iphone

#define GPS_MDVR_TYPE_HI3512_4			1 //�����ն�-3512
#define GPS_MDVR_TYPE_HI3515_4			2 //�����ն�-3515-4
#define GPS_MDVR_TYPE_HI3515_8			3 //�����ն�-3515-8

#define GPS_MOBILE_USER_POST_TEAM_MEMBER	1	//��Ա
#define GPS_MOBILE_USER_POST_TEAM_LEADER	2	//�ӳ�

#define GPS_MOBILE_USER_SEX_MAN				1	//��
#define GPS_MOBLIE_USER_SEX_WOMAN			2	//Ů

#define GPS_PTZ_MOVE_LEFT				0	//��
#define GPS_PTZ_MOVE_RIGHT				1	//��
#define GPS_PTZ_MOVE_TOP				2	//��
#define GPS_PTZ_MOVE_BOTTOM				3	//��
#define GPS_PTZ_MOVE_LEFT_TOP			4	//����
#define GPS_PTZ_MOVE_RIGHT_TOP			5	//����
#define GPS_PTZ_MOVE_LEFT_BOTTOM		6	//����
#define GPS_PTZ_MOVE_RIGHT_BOTTOM		7	//����

#define GPS_PTZ_FOCUS_DEL				8	//�����С
#define GPS_PTZ_FOCUS_ADD				9	//������
#define GPS_PTZ_LIGHT_DEL				10	//��Ȧ��С
#define GPS_PTZ_LIGHT_ADD				11	//��Ȧ���
#define GPS_PTZ_ZOOM_DEL				12	//������(����)
#define GPS_PTZ_ZOOM_ADD				13	//����ǰ��
#define GPS_PTZ_LIGHT_OPEN				14	//�ƹ�
#define GPS_PTZ_LIGHT_CLOSE				15
#define GPS_PTZ_WIPER_OPEN				16	//��ˢ
#define GPS_PTZ_WIPER_CLOSE				17
#define GPS_PTZ_CRUISE					18	//�Զ�Ѳ��
#define GPS_PTZ_MOVE_STOP				19	//ֹͣ

#define GPS_PTZ_PRESET_MOVE				21	//����
#define GPS_PTZ_PRESET_SET				22	//����
#define GPS_PTZ_PRESET_DEL				23	//ɾ��

#define GPS_PTZ_SPEED_MIN				0
#define GPS_PTZ_SPEED_MAX				255

#define GPS_GPSINTERVAL_TYPE_DISTANCE	1	//�������ϱ�
#define GPS_GPSINTERVAL_TYPE_TIME		2	//��ʱ���ϱ�

//�ͻ��˲�ѯ�����켣��ѡ��
#define GPS_QUERY_TRACK_TYPE_GPS		1  //��ѯGPS����
#define GPS_QUERY_TRACK_TYPE_GPSARLMR	2  //��ѯGPS�ͱ���
#define GPS_QUERY_TRACK_TYPE_ALARM		3  //��ѯ��������

//����
#define GPS_TRACK_DATA_TYPE_GPS			1  //GPS����
#define GPS_TRACK_DATA_TYPE_ALARM		2  //��������

//��������
#define GPS_NETWOKR_TYPE_3G				0	//3G����
#define GPS_NETWOKR_TYPE_WIFI			1	//WIFI����
#define GPS_NETWORK_TYPE_NET			2	//���������¼
#define GPS_NETWORK_TYPE_4G				3	//4G�����¼

//��������
#define GPS_DISK_TYPE_UNKOWN			0	//SD��
#define GPS_DISK_TYPE_SD				1	//SD��
#define GPS_DISK_TYPE_HDD				2	//Ӳ��
#define GPS_DISK_TYPE_SSD				3	//SSD


#define GPS_DISK_STATUS_UNKONW			0	
#define GPS_DISK_STATUS_NORMAL			1	//����
#define GPS_DISK_STATUS_BAD				2	//����

//�ļ���������
#define GPS_DOWN_TYPE_OFFSET			1		//���ļ�ƫ������
#define GPS_DOWN_TYPE_TIME				2		//��ʱ��ƫ������
#define GPS_DOWN_TYPE_SOURCE_SERVER		3		//�ӷ������������أ�������ɺ󣬻�������ɾ����Ӧ���ļ�

//Э������cProtocol��1-15��ͨ�ð汾
#define MDVR_PROTOCOL_TYPE_WKP			1
#define MDVR_PROTOCOL_TYPE_TTX			2
#define MDVR_PROTOCOL_TYPE_TQ			3
#define MDVR_PROTOCOL_TYPE_HANV			4
#define MDVR_PROTOCOL_TYPE_GOOME		5
#define MDVR_PROTOCOL_TYPE_JT808		6
#define MDVR_PROTOCOL_TYPE_RM			7
#define MDVR_PROTOCOL_TYPE_YD			8
#define MDVR_PROTOCOL_TYPE_UNIMV		9
#define MDVR_PROTOCOL_TYPE_BSJ			10
#define MDVR_PROTOCOL_TYPE_LHXY			11	//������ҵ


//�����豸����(WKPЭ���µ�������)cFactoryType
#define WKP_FACTORY_TYPE_UNKOWN			0
#define WKP_FACTORY_TYPE_WKP			1		
#define WKP_FACTORY_TYPE_AUDS			2
#define WKP_FACTORY_TYPE_KX				3
#define WKP_FACTORY_TYPE_EST			4
#define WKP_FACTORY_TYPE_YXHD			5
#define WKP_FACTORY_TYPE_COOINT			6
#define WKP_FACTORY_TYPE_7				7
#define WKP_FACTORY_TYPE_8				8
#define WKP_FACTORY_TYPE_9				9
#define WKP_FACTORY_TYPE_10				10
#define WKP_FACTORY_TYPE_11				11
#define WKP_FACTORY_TYPE_12				12
#define WKP_FACTORY_TYPE_13				13
#define WKP_FACTORY_TYPE_14				14
#define WKP_FACTORY_TYPE_15				15
#define WKP_FACTORY_TYPE_16				16
#define WKP_FACTORY_TYPE_17				17
#define WKP_FACTORY_TYPE_18				18	
#define WKP_FACTORY_TYPE_19				19	
#define WKP_FACTORY_TYPE_20				20	
#define WKP_FACTORY_TYPE_21				21	
#define WKP_FACTORY_TYPE_22				22	
#define WKP_FACTORY_TYPE_23				23  
#define WKP_FACTORY_TYPE_24				24
#define WKP_FACTORY_TYPE_25				25
#define WKP_FACTORY_TYPE_26				26
#define WKP_FACTORY_TYPE_27				27
#define WKP_FACTORY_TYPE_28				28
#define WKP_FACTORY_TYPE_29				29

//GPS�������Ͷ���
#define	GPS_COOR_TYPE_WSG84		0		//WSG84��������
#define	GPS_COOR_TYPE_GCJ02		1		//�������꣬�ߵµ�ͼʹ��
#define	GPS_COOR_TYPE_BD09		2		//�ٶ�����

//GPS��λ���Ͷ���
#define	GPS_LOC_TYPE_GPS			0		//GPS��λ
#define	GPS_LOC_TYPE_WIFI			1		//WIFI��λ

//�ͻ��˺��豸����͸������
#define GPS_TPD_TYPE_DJWL_SET_TASK_FAIL_TIME	1	//���������������ʧ��ʱ��
#define GPS_TPD_TYPE_DJWL_TASK_FAIL_CONFIRM		2	//�����������ʧ��ȷ��
#define GPS_TPD_TYPE_DJWL_TASK_STOP				3	//��������ֶ����������ɻ�ʧ��


#pragma pack(4)

typedef struct _tagGPSDeviceInfo
{
	char sVersion[64];///
	char sSerialNumber[32];  		
	char szDevIDNO[32];			///�������  		
	short sDevType;				///�豸����
	char cFactoryType;			//��������	
	char cFactoryDevType;		//�����豸����
	char cDiskNum;///Ӳ����Ŀ	
	char cChanNum;///ͨ����Ŀ
	char cProtocol;				//Э������
	unsigned char cAudioCodec:5;//��Ƶ����������
	unsigned char cDiskType:3;	//0��SD��1��Ӳ�̣�2��SSD
	char cPlateNumber[34];		//���ƺ�
	char cPlateUnicode:1;		//0��ʾ��unicode��1��ʾunicode
	char cPlateColor:7;			//������ɫ 1-��2-��3-��4-��9-����
	char bTimeZoneValid:1;		//ʱ���Ƿ���Ч
	char cTimeZone:7;			//ʱ��
}GPSDeviceInfo_S, *LPGPSDeviceInfo_S;

typedef struct _tagGPSDeviceIDNO
{
	char szDevIDNO[32];
}GPSDeviceIDNO_S, *LPGPSDeviceIDNO_S;

typedef struct _tagGPSSvrAddr
{
	char	IPAddr[80];
	unsigned short usPort;
	unsigned short Reserve;
}GPSSvrAddr_S;

typedef struct _tagGPSFile
{
	char	szFile[242]; 	/*��·�����ļ���*/	
	// 2016-3-16	243��Ϊ242�� ��������ʶ
	char	bStream;		//�Ƿ�Ϊ��ʽ�ļ�����Ϊ��ʽ�ļ�ʱ���ͻ��˻�ʹ�ûطŵķ�ʽ�����ļ�����
	// 2015-8-17	244��Ϊ243�� ����¼���ʶ
	char	bRecording;		//�Ƿ�����¼����ļ���0��ʾû�У�1��ʾ����¼��
	// 2015-4-30	248��Ϊ244�� �����ļ�ƫ����
	unsigned int nFileOffset;	//�ļ�ƫ����
	//2015-04-08 ԭ����252����Ϊ248������ nChnMask
	int		nChnMask;		//ͨ�����룬ÿ���ļ����ڶ��ͨ��
	//2015-03-14 ԭ����256����Ϊ252������ nAlarmInfo
	int		nAlarmInfo;		//������Ϣ��ÿ���ļ����ܻ��ж������
	int		nYear;
	int		nMonth;
	int		nDay;
	unsigned int uiBegintime;
	unsigned int uiEndtime;
	char	szDevIDNO[32];			//�豸ID
	int		nChn;
	unsigned int nFileLen;
	int		nFileType;
	int		nLocation;		//λ�ã��豸�ϵ�¼���ļ������Ǵ洢�����ϵ�¼���ļ�
	int		nSvrID;			//�洢������ID����Ϊ�洢�������ϵ��ļ�ʱ��Ч
}GPSFile_S, *LPGPSFile_S;

typedef struct _tagGPSRecFile
{
	char	szFile[230]; 	/*��·�����ļ���*/		
	// 2016-3-16	231��Ϊ230�� ��������ʶ
	char	bStream;		//�Ƿ�Ϊ��ʽ�ļ�����Ϊ��ʽ�ļ�ʱ���ͻ��˻�ʹ�ûطŵķ�ʽ�����ļ�����
	//ԭ����232��ȡ1���ֽ����ã�afu��20150817
	char	bRecording;		//�Ƿ�����¼����ļ���0��ʾû�У�1��ʾ����¼��
	//ԭ����236��ȡ4���ֽ����ã�afu��20150410
	int nChnMask;			//ͨ������
	//ԭ����240��ȡ4���ֽ����ã�afu��20150305
	int nAlarmInfo;	//ÿ���ļ����ܻ��ж������
	//ԭ����256��ȡ16���ֽ����ã�afu��20140815
	unsigned char ucYear;		//����������
	unsigned char ucMonth;		//����������
	unsigned char ucDay;		//����������
	char cReserve[13];		

	//char	szFile[256]; 	/*��·�����ļ���*/

	unsigned int uiBegintime;
	unsigned int uiEndtime;
	int		nChn;
	unsigned int nFileLen;
	int		nRecType;
}GPSRecFile_S, *LPGPSRecFile_S;

//ʱ��
typedef struct _tagGPSTime
{
	unsigned int ucYear:6;		//��(2000+ucYear) ��Χ(0-64)
	unsigned int ucMonth:4;		//��(1-12)	��Χ(0-16)
	unsigned int ucDay:5;		//��(1-31)  ��Χ(0-32)
	unsigned int ucHour:5;		//ʱ(0-23)	��Χ(0-32)
	unsigned int ucMinute:6;	//��(0-59)  ��Χ(0-64)
	unsigned int ucSecond:6;	//��(0-59)  ��Χ(0-64)
}GPSTime_S;

//����״̬,ÿλ��ʾ���������״̬
//uiStatus[0]����32λ
//0λ��ʾGPS��λ״̬		0��Ч1��Ч
//1λ��ʾACC״̬		0��ʾACC�ر�1��ʾACC����
//2λ��ʾ��ת״̬		0��Ч1��ת
//3λ��ʾ��ת״̬		0��Ч1��ת
//4λ��ʾɲ��״̬		0��Ч1ɲ��
//5λ��ʾ��ת״̬		0��Ч1��ת
//6λ��ʾ��ת״̬		0��Ч1��ת
//7λ��ʾGPS����״̬		0������1����
//8,9λΪ��ʾӲ��״̬		0�����ڣ�1���ڣ�2�ϵ�
//10,11,12λ��ʾ3Gģ��״̬  0ģ�鲻���ڣ�1���źţ�2�źŲ3�ź�һ�㣬4�źźã�5�ź���
//13λ��ʾ��ֹ״̬		1��ʾ��ֹ
//14λ��ʾ����״̬		1��ʾ����
//15λ��ʾ����״̬		1��ʾGPS����
//16λ����״̬
//17λ��ʾҹ��			0-��ʾ�ռ� 1-��ʾҹ�� ���жϳ��ٲ���Ч
//18λ��ʾ����״̬		0-���� 1-����
//19λ
//����ͣ��δϨ���������ֹ״̬�����Ҵ���ACC����״̬�����ʾͣ��δϨ��
//20λ��ʾIO1״̬	1��ʾ����
//21λ��ʾIO2״̬	1��ʾ����
//22λ��ʾIO3״̬	1��ʾ����
//23λ��ʾIO4״̬	1��ʾ����
//24λ��ʾIO5״̬	1��ʾ����
//25λ��ʾIO6״̬	1��ʾ����
//26λ��ʾIO7״̬	1��ʾ����
//27λ��ʾIO8״̬	1��ʾ����
//28λ��ʾ�̷�2״̬	1��ʾ��Ч
//29��30λ��ʾ��Ӳ��2��״̬		0�����ڣ�1���ڣ�2�ϵ�
//31λӲ��״̬��GPS�豸ʱʹ�ã�	1����Ч		0����Ч��Ҫ���ж�1��2��״̬
//uiStatus[1]
//0λ��ʾ�����򱨾�	 ���ն˲�����
//1λ��ʾ����·����	 ���ն˲�����	

//2λ��ʾ�����ڸ��ٱ���	
//3λ��ʾ�����ڵ��ٱ���	

//4λ��ʾ��������ٱ���
//5λ��ʾ��������ٱ���	

//6λ��ʾ������ͣ������	
//7λ��ʾ������ͣ������	
	
//8λ��ʾ������Ԥ��
//9λ��ʾ����������
//10λ��ʾ������Ԥ��
//11λ��ʾ����������

/*  --- ɾ�� hw2016-8-18
//12λ--���������ɺ󱸵�ع���
//13λ--���ſ�
//14λ--�������
//15λ--��ص�ѹ����
//16λ--��ػ�
//17λ--������
*/
//12: ��ҵ״̬: 1-��ҵ�� 0-����  ƽ̨����(������)
//13: �߷���ҵ: 1-�߷���ҵ			 ƽ̨����(������)
//14~16: ��������ҵ����(0~7)	 ƽ̨����(������)

//18λ--Ϊ���һ����Ч��GPS��Ϣ��״̬��ʾ�ɶ�λ��Ч����GPS�����ڵ�ͼ�϶�λ
//19λ--0-����״̬ 1-����״̬

//20����Ӫ״̬��1��ͣ��״̬(808)
//21����γ��δ���ܣ�1���Ѽ���(808)
//22����·������1����·�Ͽ�(808)
//23����·������1����·�Ͽ�(808)
//24�����Ž�����1�����ż���(808)
//25�������ٱ���(ƽ̨����)
//26��������ٱ���(ƽ̨����)
//27�������򱨾�(ƽ̨����)	 
//28����·ƫ��(ƽ̨����)
//29��ʱ��γ��ٱ���(ƽ̨����) 
//30��ʱ��ε��ٱ���(ƽ̨����) 
//31��ƣ�ͼ�ʻ(ƽ̨����)   

//uiStatus[2]
//0-7��ʾͨ����Ƶ��ʧ״̬
//8-15��ʾͨ��¼��״̬
//16-23��ʾIO����9-16 ״̬
//24-27��ʾIO���1-4 ״̬
//28-29 0��ʾGPS��λ��1��ʾ��վ��λ��2��ʾWifi��λ��  �ֻ���λҪ��ʾ�����λ��Ϣ
//30:�쳣��ʻ״̬
//30:�쳣��ʻ״̬ ���˳���ֹ��ʻ 0��ʾ����1��ʾ����
//31:�쳣��ʻ״̬ ɽ������ 0��ʾ����1��ʾ����

//uiStatus[3]
//0-2��ʾ��λ����	0��ʾWSG_84����׼��GPS������ϵ����1��ʾGCJ-02���������꣩��2��ʾBD09���ٶ����꣩
//3����������
//4�������ٱ���
//5��ƣ�ͼ�ʻ����
//6��Ԥ��
//7��GNSSģ�����
//8��GNSS����δ�ӻ��߼���
//9��GNSS���߶�·
//10���ն�LCD������ʾ������
//11��TTSģ�����
//12������ͷ����
//13�������ۼƼ�ʻ��ʱ
//14����ʱͣ��
//15��������
//16����·��
//17��·����ʻʱ�䲻������
//18��·��ƫ�뱨��
//19������VSS����
//20�����������쳣
//21����������
//22�������Ƿ����
//23�������Ƿ�λ��
//24����ײ�෭����
//25����ʱͣ��(ƽ̨����)
//26���ؼ���δ���ﱨ��(ƽ̨����)
//27����·���ٱ���(ƽ̨����) 
//28����·���ٱ���(ƽ̨����) 
//29: ��·���ٱ���(ƽ̨����)
//30: ��ʾ�����򱨾�	 ��ƽ̨������
//31: ��ʾ�ؼ���δ�뿪����	  ��ƽ̨������	


typedef struct _tagGPSVehicleGps
{
	GPSTime_S Time;
	unsigned int uiSpeed:14;	//�ٶ�ֵ KM/S	9999 = 999.9 	��Χ(0-16384)
	unsigned int uiYouLiang:18;	//����   ��	9999 = 99.99 	��Χ(0-262100)
	unsigned int uiLiCheng;		//���   ����	9999 = 9.999 	
	unsigned int uiHangXiang:9;	//���溽��(0-360) ��Χ(0-512)
	unsigned int uiMapType:3;	//��ͼ����		1��ʾGOOGLE��2��ʾ�ٶȣ�0��ʾ��Ч
	unsigned int uiNetWorkType:4;	//��������(3G��,WIFI,����,4G)
	unsigned int uiTachographSpeed:14;  //�ٶ�ֵ KM/S	9999 = 999.9 	��Χ(0-16384) ��ʻ��¼���ٶ�
	unsigned int uiReserve:2;  //����λ1
	unsigned int uiStatus[4];		//Ŀǰֻʹ�ã�ÿ1��״̬	0λ��ʾGPS��λ״̬��0��Ч��1��Ч��
	short sTempSensor[4];	//�¶ȴ�������״̬
	int	nJingDu;		//����	4�ֽ� ��������	9999999 = 9.999999 
	int nWeiDu;			//γ��	4�ֽ� ��������	9999999 = 9.999999
	short nGaoDu;			//�߶ȣ���ʱδʹ��
	unsigned short usSatellites:4;		//������������0ʱ��ʾ����Χ0-12
	unsigned short usReserve:12;		//�����ֶ�
	int	nParkTime;		//ͣ��ʱ�� ��	�ھ�ֹ״̬ʱ��Ч
	unsigned int uiLineID:29;			//��·��(���ݿ��й���)
	unsigned int uiDirection:1;			//���� 0-���У� 1-����
	unsigned int uiStationFlag:1;		//��0-վ�� 1-վ����
	unsigned int uiStationStatus:1;		//0-��վ 1-��һվ

	unsigned int uiODBVotage:9;		//OBD��ص�ѹ			123   = 12.3V		0-512			
	unsigned int uiODBJQTemp:7;		//ȼ�ͽ����¶�			33 = 33��			0 - 127			
	unsigned int uiODBStatus:6;		//��0λ��ʾACC �_�P	1 �x�����_�P  2	ɷ܇�_�P  3	PTO �_�P	4  �o���x܇	
	unsigned int uiODBJQMPos:10;	//������λ��			102 = 10.2 %		0-1024			

	unsigned int uiOBDRpm:14;		//������ת��			1000 = 1000ת		0-16384			
	unsigned int uiOBDSpeed:8;		//ODB�ٶ�				99 = 99����			(0-256)			
	unsigned int uiODBReserve:2;	//�����ֶ�		
	unsigned int uiPeopleCur:8;		//��ǰ��������		��Χ(0-256)

	unsigned int uiPeopleUp:12;		//�ϳ�����		��Χ(0-4096)
	unsigned int uiPeopleDown:12;	//�³�����		��Χ(0-4096)
	unsigned int uiStationIndex:8;	//վ������
}GPSVehicleGps_S;
//ע��Ŀǰ�ܳ���Ϊ72���ֽڣ�ÿ�θı�ṹ�����ʱ�����붼sizeof(GPSVehicleGps_S)�ж��£�������ĳ��������

typedef struct _GPSVehicleState
{
	char	szDevIDNO[32];
	GPSVehicleGps_S	Gps;
}GPSVehicleState_S;

typedef struct _GPSVehicleStatus
{
	char	szDevIDNO[32];
	BOOL	bOnline;
	int		nNetworkType;
	char	szNetworkName[32];
}GPSVehicleStatus_S;

typedef struct _tagGPSAlarmInfo
{
	char	guid[36];			//��ʶΨһ�ı�����Ϣ
	GPSVehicleGps_S Gps;		//����ʱ���GPS��Ϣ
	GPSTime_S Time;				//����ʱ��
	short 	AlarmType;			//��������
	short 	AlarmInfo;			//������Ϣ
	int	Param[4];				//��������
	char szDesc[256];			//��������
	//˵��srcAlarmType��srcTime������������Ϊ����ͼƬ�ϴ����ʱ��Ч����ʾ��Ӧ�ı���������Ϣ��ͼƬ�ϴ���ɱ�������
	//��������ΪͼƬ�ϴ�����ʱ��ֻʹ��AlarmType��szImgFile����������������ʾ��Ӧ��������
	short srcAlarmType;			//Դ��������
	short sReserve;				//�������� (V6�汾���������õ�)
	GPSTime_S srcTime;			//Դ����ʱ��
	char szImgFile[256];		//ͼƬ�ļ���Ϣ����;�ָ���Ϊhttp��ַ·��������Ϊ���ͼƬ��Ϣ
	//������ʼ����
	short AlarmStartType;
	char bSendOnly;				//1��ʾֻ���ͣ����ڱ����ص��У���ֹ�ٴΰѱ����������д���
	char cHandleStatus;			//�����־λ��0λ��0��ʾδ���� 1��ʾ�Ѵ��� 1λ��0��ʾδȷ�ϣ� 1��ʾ��ȷ��
	char szReserve[60];			//�����ֶ�
}GPSAlarmInfo_S, *LPGPSAlarmInfo_S;

typedef struct _GPSVehicleAlarm
{
	char	szDevIDNO[32];
	GPSAlarmInfo_S	Alarm;
}GPSVehicleAlarm_S;

//809�����Ϣ
typedef struct _tagCheckPost_S 
{
	GPSVehicleAlarm_S Alarm;
	char szContent[256];		//��������
	GPSTime_S tmEndTime;		//��ڴ���ʱ��
}CheckPost_S , *LPCheckPost_S ;

//hw 2014/1/23 
//-- begin
typedef struct _tagGPSAlarmInfoEx
{
	char	guid[36];			//��ʶΨһ�ı�����Ϣ
	GPSVehicleGps_S Gps;		//����ʱ���GPS��Ϣ
	GPSTime_S Time;				//����ʱ��
	short 	AlarmType;			//��������
}GPSAlarmInfoEx_S, *LPGPSAlarmInfoEx_S;

typedef struct _tagGPSConfigData
{
	int nLength;		//���ݻ��泤��
	char cBuffer[1024];	//��������
}GPSConfigData_S, *LPGPSConfigData_S;

typedef struct _tagGPSTransPortData
{
	int nType;					//����
	GPSConfigData_S	Data;		//͸������
}GPSTransPortData_S, *LPGPSTransPortData_S;

//͸��ת������
typedef struct tagGPSAlarmTPD 
{
	char	szDevIDNO[32];
	GPSAlarmInfoEx_S VehiAlarm;
	GPSTransPortData_S TPD;	
}GPSAlarmTPD_S, *LPGPSAlarmTPD_S;
//-- end

//������־��Ŀ
typedef struct _tagGPSAlarmCount
{
	int nCount;
	char szReserve[8];
}GPSAlarmCount_S, *LPGPSAlarmCount_S;

//�����켣(����GPS�ͱ���)
typedef struct _tagGPSVehicleTrack
{
	int nType;					//��ʶ����������(GPS���ݻ��߱�������)
	GPSVehicleAlarm_S Alarm;	//��������(�������ΪGPS���� ��ֻ��GPS�ֶ�������Ч)
}GPSVehicleTrack_S, *LPGPSVehicleTrack_S;

//�켣����Ŀ
typedef struct _tagGPSTrackCount
{
	int nCount;
	char szReserve[8];
}GPSTrackCount_S, *LPGPSTrackCount_S;

//�豸�켣����Ϣ
typedef struct _tagGPSDevTrackCountInfo
{
	char szDevIDNO[32];	//�豸���
	int nGPSValid;		//GPS��Ч(0-��Ч 1-��Ч)
	int nCount;			//��Ŀ
	char szReserve[8];
}GPSDevTrackCountInfo_S, *LPGPSDevTrackCountInfo_S;

//�豸�켣����Ŀ
typedef struct _tagGPSTrackDevCount
{
	int nDevCount;					//�豸��Ŀ
	GPSDevTrackCountInfo_S Info[8];	//���8���豸�켣��Ϣ
}GPSTrackDevCount_S, *LPGPSTrackDevCount_S;


typedef struct _tagGPSTrackInFenceInfo
{
	int		nVehiID;				//����ID
	GPSTime_S BeginTime;		//��ʼʱ��
	GPSTime_S EndTime;			//����ʱ��
	int		nStartJingDu;		//�������򾭶�	4�ֽ� ��������	9999999 = 9.999999 
	int		nStartWeiDu;		//��������γ��	4�ֽ� ��������	9999999 = 9.999999
	int		nEndJingDu;			//�뿪���򾭶�	4�ֽ� ��������	9999999 = 9.999999 
	int		nEndWeiDu;			//�뿪����γ��	4�ֽ� ��������	9999999 = 9.999999
	char szRes[32];				//����32
}GPSTrackInFenceInfo_S, *LPGPSTrackInFenceInfo_S;

const int GPS_VEHICLE_ALARM_LENGTH = sizeof(GPSVehicleAlarm_S);
const int GPS_ALARM_INFO_LENGTH = sizeof(GPSAlarmInfo_S);
const int GPS_VHIECLE_GPS_LENGTH = sizeof(GPSVehicleGps_S);
const int GPS_VHIECLE_RUN_LENGTH = sizeof(GPSVehicleState_S);
const int GPS_VEHICLE_STATUS_LENGTH = sizeof(GPSVehicleStatus_S);
const int GPS_VEHICLE_TRACK_LENGTH = sizeof(GPSVehicleTrack_S);

//͸����������
typedef struct _tagGPSTranPortData
{
	int nID;
	char szDevIDNO[32];	//�������
	int nType;			//����
	SYSTEMTIME Time;		//ʱ��
	int	nLength;		//����
	char cData[1280];	//���ݳ���
}GPSTranPortData_S, *LPGPSTranPortData_S;

//͸������������Ŀ
typedef struct _tagGPSTranPortDataCount
{
	int nCount;
	char szReserve[8];
}GPSTranPortDataCount_S, *LPGPSTranPortDataCount_S;

const int GPS_TRAN_PORT_DATA_LENGTH = sizeof(GPSTranPortData_S);

#define GPS_WLAN_TYPE_2G					0
#define GPS_WLAN_TYPE_3G_EVDO				1
#define GPS_WLAN_TYPE_3G_WCDMA				2
#define GPS_WLAN_TYPE_TD_WCDMA				3
#define GPS_WLAN_TYPE_TD_LED				4
#define GPS_WLAN_TYPE_FDD					5

typedef struct _tagGPSWLanStatus
{
	int nWLanActive;	//
	int	nWLanType;		////0����ʾ2G;1����ʾ3G-EVDO; 2����ʾ3G-WCDMA 
	int nWLanQuantity;	//�ź�ֵ	����ʾ
	char szWLanAddr[32];//�����ַ
}GPSWLanStatus_S, *LPGPSWLanStatus_S;

typedef struct _tagGPSWifiStatus
{
	int nWifiActive;
	char szWifiAP[32];	//hide
	int nWifiQuantity;	//hide
	char szWifiAddr[32];//
}GPSWifiStatus_S, *LPGPSWifiStatus_S;

typedef struct _tagGPSDiskInfo
{
//	int nAllVolume;		//15923	��ʾ159.23	G //������
	int nAllVolume:24;	//15923	��ʾ159.23	G //������
	int nDiskType:8;	//Ӳ������
	int nLeftVolume;	//ͬ��  ///ʣ������
}GPSDiskInfo_S, *LPGPSDiskInfo_S;

const int GPS_DISK_INFO_COUNT			= 8;	//���Ӳ����ĿΪ8��

typedef struct _tagGPSDeviceStatus
{
	//Ӳ�����к�, �� | �ָ�������Ӳ����Ŀ���к�			
		//DevInfo.sSerialNumber��DevInfo.szDevID���ڴ洢Ӳ�����к�
	GPSDeviceInfo_S	DevInfo;	//�豸��Ϣ
	GPSWLanStatus_S	WLanInfo;	//3G״̬
	GPSWifiStatus_S	WifiInfo;	//WIFI��Ϣ
	GPSDiskInfo_S	DiskInfo[GPS_DISK_INFO_COUNT];	//Ӳ����Ϣ
	int	nVideoLost;		//��Ƶ��ʧ״̬  1��ʾ����Ƶ��ʧ
	int nRecord;		//¼��״̬ 0��û��¼��1¼��
	int nVideoTran;		//��Ƶ������Ŀ
	long l3GFlow;		//KBΪ��λ�����½��տ�ʼ�㣬�ۼ�
	long l4GFlow;		//KBΪ��λ�����½��տ�ʼ�㣬�ۼ�
	char cDiskNum;		//Ӳ����Ŀ
	char cNetType;		//��������	0,3g,1 wifi, 2 net, 3 4g
	char cVersion;		//Ϊ1ʱ��cNetType��Ч  devinfo�����cPlateNumberΪimei��Ϣ
	char cReserve;	//��������
	int nReserve;	//��������
}GPSDeviceStatus_S, *LPGPSDeviceStatus_S;

const int GPS_MOTION_MASK = 9;

typedef struct _tagGPSMotionParam
{
	int	nMask[GPS_MOTION_MASK];	//��11λ��ʾ�ƶ����
	BOOL bEnable;	//�Ƿ�����
	int	nSensitive;	//������
}GPSMotionParam_S, *LPGPSMotionParam_S;

typedef struct _tagGPSVideoColor
{
	int nExposure;		//�����
	int	nBrightness;	
	int	nConstract;	
	int	nHue;				
	int	nSaturate;			 
}GPSVideoColor_S, *LPGPSVideoColor_S;

//////////////////////////////////////////////////////////////////////////
//hw 2012-11-07
//������������
typedef struct _tagGPSNetFlowParam
{
	int nIsOpenFlowCount;		//����ͳ�ƿ��� 0-�رգ�1-����
	int nIsOpenDayFlowRemind;	//���������� 0-������ 1-����
	int nIsOpenMonthFlwRemind;	//���������� 0-������ 1-����
	float fDayLimit;			//����������(MB)
	float fMonthLimit;			//����������(MB)
	int nDayRemind;				//ÿ���������ѣ��ٷֱȣ���20%��20
	int nMonthRemind;			//ÿ���������ѣ��ٷֱȣ���20%��20
	int nMonthTotleDay;			//�½���
	char szRes[32];				//����32
}GPSNetFlowParam_S, *LPGPSNetFlowParam_S;

//��������ͳ��
typedef struct _tagGPSNetFlowStatistics
{
	GPSNetFlowParam_S	FlowParam;	//��������
	float fFlowUsedToday;			//��������
	float fFlowUsedMonth;			//������ʹ������
	int nStatisticsTime;			//ͳ��ʱ��
	char szRes[32];					//����32
}GPSNetFlowStatistics_S, *LPGPSNetFlowStatistics_S;	
//end
//////////////////////////////////////////////////////////////////////////

//����ָ��
typedef struct _tabGPSDispatchCommand
{
	char szGuid[40];		//ָ��GUID
	int nMapType;			//Ŀ�ĵأ���ͼ���ͣ�1��ʾGOOGLE��2��ʾ�ٶ�
	int nJingDu;			//����
	int nWeiDu;				//γ��
	char szCommand[256];	//������
}GPSDispatchCommand_S, *LPGPSDispatchCommand_S;


typedef union _tagUNCfg
{
// 	HI_S_Video cfgVideo;				/* ��Ƶ���� */
// 	HI_S_Audio cfgAudio;				/* ��Ƶ���� */
// 	HI_E_AudioInput cfgAudioInput;		/* ��Ƶ������� */
// 	HI_S_PTZ cfgPTZ;					/* ��̨���� */
}GPSCfg, *LPGPSCfg;

//�ļ���Ϣ
typedef struct _tagGPSRecHead_S
{
	int	nYear;			//��	2013
	int	nMonth;			//��	5
	int nDay;			//��	29
	int nBegHour;		//��ʼʱ��
	int nBegMinute;		
	int nBegSecond;
	unsigned __int64 u64BegPts;	//�ļ���ʼ��ʱ���
	unsigned int uiTotalMinSecond;	//�ļ���ʱ��������
	unsigned int uiAudioCodec;		//��Ƶ����������	TTX_AUDIO_CODEC_G726_40KBPS
	unsigned int uiAudioChannel;		//��Ƶͨ��
	unsigned int uiAudioSamplesPerSec;	//��Ƶ������
	unsigned int uiAudioBitPerSamples;	//��Ƶÿ��ȡ�������λԪ��
	unsigned int uiInfoCodec;		//��Ϣ֡������	TTX_INFO_CODEC_WKP
	unsigned int uiVideoCodec;		//��Ƶ֡������	TTX_VIDEO_CODEC_H264
	unsigned char ucResolution;		//�ֱ���		TTX_RESOLUTION_720P
	char szReserve[59];		//�����ֶ�
} GPSRecHead_S, *LPGPSRecHead_S;

typedef struct _tagGPSUsrLog
{
	int nUsrID;
	int nMainType;
	int nSubType;
	char szDevIDNO[40];
	char szParam1[256];
	char szParam2[256];
	char szParam3[256];
	char szParam4[256];
	GPSTime_S time;
	char szReserve[64];
}GPSUsrLog_S, *LPGPSUsrLog_S;

//�û�������Ϣ
typedef struct _tagUserBasicInfo
{
	int nUserID;				//�û�ID		
	char szUserName[32];		//�û�����
	int nGroupID;				//����ID
	char cOnline;				//����״̬
	char szReserve[27];			//����32
}UserBasicInfo_S, *LPUserBasicInfo_S;


//�û���־��Ŀ
typedef struct _tagGPSUsrLogCount
{
	int nCount;
	char szReserve[8];
}GPSUsrLogCount_S, *LPGPSUsrLogCount_S;


//��ϵ��
typedef struct _tagContactInfo
{
	char szName[32];			//����
	char szPhone[16];			//�ֻ�
	char szTel[16];				//�绰
	char szReserve[16];			//����16
}ContactInfo_S, *LPContactInfo_S;

//ѧ����Ϣ
typedef struct _tagStudentInfo
{
	char szCarNum[32];			//����
	char szName[32];			//ѧ������
	int nStudySection;			//0-δ֪ 1-�׶�԰ 2-Сѧ 3-���� 4-���� 5-��ѧ
	int nGrade;					//0-δ֪��1-1�꼶��2-2�꼶
	int nClass;					//0-δ֪��1-1�� 2-2��
	ContactInfo_S Contact1;		//��ϵ��1
	ContactInfo_S Contact2;		//��ϵ��2
	char szEmail[64];			//email
	char szAddress[256];		//��ַ
	char szRemark[256];			//��ע
	char szReserve[256];		//����256
}StudentInfo_S, *LPStudentInfo_S;


typedef struct _tagDeviceDevIPInfo
{
	GPSDeviceIDNO_S DevIDNO;
	int nPort;
	char szIP[16];
	char szReserve[16];
}DeviceDevIPInfo_S, *LPDeviceDevIPInfo_S;


typedef struct _tagGPSPictureDataInfo
{
	unsigned char cDataPackIndex;		//ͼ�������ǵ�N����
	unsigned char cChannel;				//ͨ����0 ��ʼ
	unsigned char cPictureIndex;		//��ʾͼƬ���,��Χ��0~8
	unsigned char cStatus;				//����״̬:0x01 ��ʾ�پ���0x02��ʾ�Զ���ߣ�0x03��ʾ�Զ���ͣ�0x04��ʾ��ʱ�ش�ͼ��0x05��ʾ��׽ͼ��ش�
	unsigned char cCountPack;			//�ܰ���
	char nResult;						//��� 0���ɹ�/ȷ�ϣ�1��ʧ�ܣ�2����Ϣ����3����֧�֣�4������ȷ�ϴ���
	char bMediaFinished;				//�Ƿ����
	char cReserve;						//����
}GPSPictureDataInfo_S, *LPGPSPictureDataInfo_S;

//�豸Ҫ���ص��ļ���Ϣ
typedef struct _tagGPSDownFileInfo
{
	int nFileType;		//�ļ����ͣ�1ͼƬ�ļ���2��ʾ�����ļ�
	char szParam[256];	//�м�ʹ�ö���(,)�ָ�
	int nFileID;		//�ļ�ID
	char szFile[256];	//�ļ�·��
	char szIP[64];		//������IP
	unsigned short usPort;	//�˿�
	unsigned short usReserve;
	char szMd5[40];		//MD5У��
	char szReserve[32];	//��������
}GPSDownFileInfo_S;

//JT808ý������
typedef struct _tagGPSMediaDataInfo
{
	unsigned int uiMediaID;				//ý��ID
	unsigned char ucMediaType;			//ý������ 0-ͼƬ;1-��Ƶ;2-��Ƶ
	unsigned char ucCodeFormat;			//�����ʽ 0-JPEG;1-TIF;2-MP3;3-WAV;4-WMV	
	unsigned char ucEventType;			//�¼��� 0-ƽ̨�·�ָ��;1-��ʱ����;2-���ٱ�������;4-��ײ�෭��������;��������
	unsigned char ucChannel;			//ͨ��ID
	unsigned short usTotal;				//�ܰ���
	unsigned short usIndex;				//����ţ���1��ʼ
	char nReserve[32];					//����
}GPSMediaDataInfo_S, *LPGPSMediaDataInfo_S;

typedef struct _tagGPS808TerminalInfo
{
	unsigned short	usProvince;		//ʡ��ID
	unsigned short  usCity;			//�м�ID
	char szFactory[12];				//�����̱���
	char szTerminalType[24];		//�ն��ͺ�
	char szTerminalID[24];			//�ն�ID
	unsigned char  ucPlateColor;	//������ɫ
	char szPlate[31];				//���ƺ�
	char cRegisterFlag;				//ע���־λ
	char szFactoryAsc[11];			//������ASC
	char szReserve[52];				//��������
}GPS808TerminalInfo_S, *LPGPS808TerminalInfo_S;


//�豸����¼�񱨾����Ͷ���
typedef enum
{
	FILE_ALARM_INFO_URGENCY_BUTTON  =0 ,		//������ť����
	FILE_ALARM_INFO_OVERSPEED 		=1 ,		//���ٱ���
	FILE_ALARM_INFO_LOWSPEED 		=2 ,		//���ٱ���
	FILE_ALARM_INFO_SHARK			=3 ,		//�񶯱���
	FILE_ALARM_INFO_TEMPERATOR 		=4 ,		//�¶ȱ���
	FILE_ALARM_INFO_TMOTION			=5 ,		//�ƶ���ⱨ��
	FILE_ALARM_INFO_UPS_CUT			=6 ,		//UPS���ϱ���
	FILE_ALARM_INFO_COLLISION		=7 ,		//��ײ�෭
	FILE_ALARM_INFO_FATIGUE			=8 ,		//ƣ�ͼ�ʻ
	FILE_ALARM_INFO_IO1				=9 ,		//IO1����
	FILE_ALARM_INFO_IO2				=10, 		//IO2����
	FILE_ALARM_INFO_IO3				=11,		//IO3����
	FILE_ALARM_INFO_IO4				=12, 		//IO4����
	FILE_ALARM_INFO_IO5				=13, 		//IO5����
	FILE_ALARM_INFO_IO6				=14, 		//IO6����
	FILE_ALARM_INFO_IO7				=15, 		//IO7����
	FILE_ALARM_INFO_IO8				=16, 		//IO8����
	FILE_ALARM_INFO_RAPID_ACCELERATION =17,		//�����ٸ澯 ��������
	FILE_ALARM_INFO_RAPID_DECELERATION =18,		//�����ٸ澯 ��������
	FILE_ALARM_INFO_REVERSING		 =19,		//�����澯 ��������
	FILE_ALARM_INFO_CUS_OVER_SPEED	 =20,		//���ٸ澯 ��������
}GPS_ALARM_REC_TYPE_E;


//��վ��Ϣ
const char REPORT_FALG_GPS = 0;			//GPS
const char REPORT_FALG_STATION = 1;		//վ��
typedef struct _tagGPSStation_S
{
	GPSTime_S	Time;						//��վʱ��
	GPSVehicleGps_S	Gps;					//GPSλ��
	char szJobNum[32];						//˾������
	char szLineName[32];					//��·����
	unsigned short usReportType;			//�ϱ�����(0-GPS 1-��վ)
// 	char szStationName[32];					//վ������ �20���ֽڵ��ַ�
	unsigned short uiLimitSpeed;			//���� ��Ϊ0����Ч��
	char cSendOnly;							//ֻ���Ͳ��洢
	unsigned char cReserve[31];				//�����ֶ�
}GPSStation_S, *LPGPSStation_S;

typedef struct _tagGPSVehicleStation_S
{
	char szDevIDNO[32];
	GPSStation_S Station;
}GPSVehicleStation_S, *LPGPSVehicleStation_S;

//�豸��չ����
#define  GPS_EXDATA_TYPE_808_ALARM  1

typedef struct _tagGPSVehicleStateExData
{
	char szDevIDNO[32];
	GPSTime_S Time;
	int nDataType;
	char cData[512];
}GPSVehicleStateExData_S;

typedef struct _tagGPSVehicleStateAlarmParam
{
	int nParam[4];
}GPSVehicleStateAlarmParam_S;


//��0λ �����ٱ���
//��1λ ������·����
//��2λ ·����ʻʱ�䲻��/��������
//��3λ �쳣��ʻ����:���˳���ֹ��ʻ
//��4λ �쳣��ʻ������ɽ������
typedef struct _tagGPSVehicleStateExDataAlarm
{
	int nAlarmFlag;								//������־λ
	GPSVehicleStateAlarmParam_S ArmParam[16];		//��������
}GPSVehicleStateExDataAlarm_S;


const int GPS_VHIECLE_STATE_EXDATA_LENGTH = sizeof(GPSVehicleStateExData_S);

#pragma pack()

#endif	
