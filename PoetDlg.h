// PoetDlg.h : 头文件
//

#pragma once


#define Form_SUM 59

// CPoetDlg 对话框
class CPoetDlg : public CDialog
{
// 构造
public:
	CPoetDlg(CWnd* pParent = NULL);	// 标准构造函数




public:
	//句式种类
	CString Form[Form_SUM]; //普通
	CString Form_YY[Form_SUM]; //压韵

 CString CK_MC ;  //词库 名词
 CString CK_DC ;  //词库 动词
 CString CK_XRC ; //词库 形容词词


 int YaYun_X;
 bool  YaYun_Flag;




    int Return_String_Words_Sum(CString text); //返回字符串中单词的数量
	void Return_String_SN_start_end(CString text,int SN,int *SN_start,int *SN_end); //返回字符串中 第SN个单词 偏移的地址 开始 结束

    CString Return_YunJiao_String(CString S_CString,int YunJiao); //返回韵脚所在的行

    CString Rand_Crossword(int kind); //随机填词
	void Form_Replace(CString *_text);   //格式化替换

	CString Write_Poetry(int Line,int Part,int YaYun);  //写诗

	CString CPoetDlg::Load_Res_TXT(UINT ID); //加载资源中的TXT文件到字符串

void My_String_JiaMi(CString S_TEXT, CString *D_TEXT); //字符串加密
void My_String_JieMi(CString S_TEXT, CString *D_TEXT); //字符串解密


//加载TXT文件到字符串
void TxtFileRead_to_CString(CString FileName,CString *CStr);




// 对话框数据
	enum { IDD = IDD_POET_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
