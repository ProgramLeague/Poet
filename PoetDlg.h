// PoetDlg.h : ͷ�ļ�
//

#pragma once


#define Form_SUM 59

// CPoetDlg �Ի���
class CPoetDlg : public CDialog
{
// ����
public:
	CPoetDlg(CWnd* pParent = NULL);	// ��׼���캯��




public:
	//��ʽ����
	CString Form[Form_SUM]; //��ͨ
	CString Form_YY[Form_SUM]; //ѹ��

 CString CK_MC ;  //�ʿ� ����
 CString CK_DC ;  //�ʿ� ����
 CString CK_XRC ; //�ʿ� ���ݴʴ�


 int YaYun_X;
 bool  YaYun_Flag;




    int Return_String_Words_Sum(CString text); //�����ַ����е��ʵ�����
	void Return_String_SN_start_end(CString text,int SN,int *SN_start,int *SN_end); //�����ַ����� ��SN������ ƫ�Ƶĵ�ַ ��ʼ ����

    CString Return_YunJiao_String(CString S_CString,int YunJiao); //�����Ͻ����ڵ���

    CString Rand_Crossword(int kind); //������
	void Form_Replace(CString *_text);   //��ʽ���滻

	CString Write_Poetry(int Line,int Part,int YaYun);  //дʫ

	CString CPoetDlg::Load_Res_TXT(UINT ID); //������Դ�е�TXT�ļ����ַ���

void My_String_JiaMi(CString S_TEXT, CString *D_TEXT); //�ַ�������
void My_String_JieMi(CString S_TEXT, CString *D_TEXT); //�ַ�������


//����TXT�ļ����ַ���
void TxtFileRead_to_CString(CString FileName,CString *CStr);




// �Ի�������
	enum { IDD = IDD_POET_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString output_text;
	UINT PLine;
	UINT PPart;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
};
