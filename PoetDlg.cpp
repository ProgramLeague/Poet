// PoetDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Poet.h"
#include "PoetDlg.h"


#include "MyRand.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CPoetDlg 对话框




CPoetDlg::CPoetDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CPoetDlg::IDD, pParent)

{
	output_text = _T("");
	PLine = 6;
	PPart = 3;

	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);





//诗句各种形式 普通
Form[0]= "<名词>是<形容词>的";
Form[1]= "所以<名词>是<形容词>的";
Form[2]= "我看到，<形容词>的<名词>在<动词>";
Form[3]= "我面对着<形容词>的<名词>和<形容词>的<名词>";
Form[4]= "我面对着<形容词>的<名词>";
Form[5]= "我面对着<形容词>的<名词>和<形容词>的<名词>";
Form[6]= "<形容词>的<名词>在<动词>";
Form[7]= "我想<动词>";
Form[8]= "我想<动词>，我想<形容词>的<动词>";
Form[9]= "因为<名词>是<形容词>的";
Form[10]= "<名词><形容词>的<动词>";
Form[11]= "<名词>曾经是<形容词>的";
Form[12]= "在那<形容词>的<名词>，<名词><动词>了<名词>";
Form[13]= "在<名词>的存在中";
Form[14]= "一切都是<形容词>的";
Form[15]= "一切都在<动词>着，只有<名词>在<动词>";
Form[16]= "一切都在<动词>着，只有<名词>在被<动词>";
Form[17]= "一切都在<动词>，一切都在<动词>，一切都在<动词>，啊~~";
Form[18]= "<形容词>的，<形容词>的，<形容词>的……";
Form[19]= "从<名词>到<名词>……";
Form[20]= "在那<名词>旁，我<动词>着……";
Form[21]= "我在<动词><名词>……";
Form[22]= "<名词>，在<名词>上<动词>……";
Form[23]= "唉！<名词>";
Form[24]= "嘘！<名词>在<动词>";
Form[25]= "啊，<名词>在<动词>！";
Form[26]= "啊~，<名词>是多么<形容词>！";
Form[27]= "咦，这<形容词>的<名词>，这<形容词>的<名词>啊！";
Form[28]= "噢，她是我的<名词>！";
Form[29]= "噢，<名词>是我的<名词>！";
Form[30]= "呀，<形容词>如<形容词>的<名词>……";
Form[31]= "哦，一切都在<动词>着……";
Form[32]= "<动词>吧！";
Form[33]= "<名词>，<名词>，<名词>！";
Form[34]= "天啊！<名词>";
Form[35]= "天啊！我的<名词>";
Form[36]= "天啊！<名词>在<动词>！！";
Form[37]= "欧！！<形容词>的<名词>";
Form[38]= "欧！~ 我是<名词>，我是<名词>，我是<名词>，我还是<名词>！";
Form[39]= "哈，这<形容词>的<名词>啊！";
Form[40]= "哈哈哈哈！ <名词>，<名词>，和<名词>";
Form[41]= "哈哈哈！ <名词>在<动词>";
Form[42]= "我是 <名词>！我是<名词>！！";
Form[43]= "看，<名词>是多么<形容词>！";
Form[44]= "看，<名词>是多么想<动词>！";
Form[45]= "当<名词><动词>时，我要<动词>！！";
Form[46]= "<名词>，把我<动词>吧！";
Form[47]= "不，我不想<动词>！！";
Form[48]= "我是<名词>！我是<名词>！！";
Form[49]= "你把我<动词>吧！";
Form[50]= "你<动词>我吧！";
Form[51]= "<名词>把我<动词>吧！";
Form[52]= "<名词>，请<动词>吧！";
Form[53]= "<名词>被<动词>了！";
Form[54]= "我<动词>了……";
Form[55]= "<形容词>的<名词><动词>了";
Form[56]= "<动词>吧！";
Form[57]= "<动词>吧，<名词>！";
Form[58]= "<形容词><名词>，像<名词>";



//诗句各种形式 压韵
Form_YY[0]= "<名词>是<压韵形容词>的";
Form_YY[1]= "所以<名词>是<压韵形容词>的";
Form_YY[2]= "我看到，<形容词><名词>在<压韵动词>";
Form_YY[3]= "我面对着<形容词>的<名词>和<形容词>的<压韵名词>";
Form_YY[4]= "我面对着<形容词>的<压韵名词>";
Form_YY[5]= "我面对着<形容词>的<名词>和<形容词>的<压韵名词>";
Form_YY[6]= "<形容词><名词>在<压韵动词>";
Form_YY[7]= "我想<压韵动词>";
Form_YY[8]= "我想<动词>，我想<形容词>的<压韵动词>";
Form_YY[9]= "因为<名词>是<压韵形容词>的";
Form_YY[10]= "<名词><形容词>的<压韵动词>";
Form_YY[11]= "<名词>曾经是<压韵形容词>的";
Form_YY[12]= "在那<形容词>的<名词>，<名词><动词>了<压韵名词>";
Form_YY[13]= "在<压韵名词>的存在中";
Form_YY[14]= "一切都是<压韵形容词>的";
Form_YY[15]= "一切都在<动词>着，只有<名词>在<压韵动词>";
Form_YY[16]= "一切都在<动词>着，只有<名词>在被<压韵动词>";
Form_YY[17]= "一切都在<动词>，一切都在<压韵动词>，一切都在<压韵动词>，啊~~";
Form_YY[18]= "<形容词>的，<形容词>的，<压韵形容词>的……";
Form_YY[19]= "从<名词>到<压韵名词>……";
Form_YY[20]= "在那<名词>旁，我<压韵动词>着……";
Form_YY[21]= "我在<动词><压韵名词>……";
Form_YY[22]= "<名词>，在<名词>上<压韵动词>……";
Form_YY[23]= "唉！<压韵名词>";
Form_YY[24]= "嘘！<名词>在<压韵动词>";
Form_YY[25]= "啊，<名词>在<压韵动词>！";
Form_YY[26]= "啊~，<名词>是多么<压韵形容词>！";
Form_YY[27]= "咦，这<形容词>的<名词>，这<形容词>的<压韵名词>啊！";
Form_YY[28]= "噢，她是我的<压韵名词>！";
Form_YY[29]= "噢，<名词>是我的<压韵名词>！";
Form_YY[30]= "呀，<形容词>如<形容词>的<压韵名词>……";
Form_YY[31]= "哦，一切都在<压韵动词>着……";
Form_YY[32]= "<压韵动词>吧！";
Form_YY[33]= "<名词>，<名词>，<压韵名词>！";
Form_YY[34]= "天啊！<压韵名词>";
Form_YY[35]= "天啊！我的<压韵名词>";
Form_YY[36]= "天啊！<名词>在<压韵动词>！！";
Form_YY[37]= "欧！！<形容词>的<压韵名词>";
Form_YY[38]= "欧！~ 我是<名词>，我是<名词>，我是<名词>，我还是<压韵名词>！";
Form_YY[39]= "哈，这<形容词>的<压韵名词>啊！";
Form_YY[40]= "哈哈哈哈！ <名词>，<名词>，和<压韵名词>";
Form_YY[41]= "哈哈哈！ <名词>在<压韵动词>";
Form_YY[42]= "我是 <名词>！我是<压韵名词>！！";
Form_YY[43]= "看，<名词>是多么<压韵形容词>！";
Form_YY[44]= "看，<名词>是多么想<压韵动词>！";
Form_YY[45]= "当<名词><动词>时，我要<压韵动词>！！";
Form_YY[46]= "<名词>，把我<压韵动词>吧！";
Form_YY[47]= "不，我不想<压韵动词>！！";
Form_YY[48]= "我是<名词>！我是<压韵名词>！！";
Form_YY[49]= "你把我<压韵动词>吧！";
Form_YY[50]= "你<压韵动词>我吧！";
Form_YY[51]= "<名词>把我<压韵动词>吧！";
Form_YY[52]= "<名词>，请<压韵动词>吧！";
Form_YY[53]= "<名词>被<压韵动词>了！";
Form_YY[54]= "我<压韵动词>了……";
Form_YY[55]= "<形容词>的<名词><压韵动词>了";
Form_YY[56]= "<压韵动词>吧！";
Form_YY[57]= "<动词>吧，<压韵名词>！";
Form_YY[58]= "<形容词><名词>，像<压韵名词>";



//加载资源中的TXT文件到字符串
 CK_MC = Load_Res_TXT(IDR_TEXT_CK_MC);
 CK_DC = Load_Res_TXT(IDR_TEXT_CK_DC);
 CK_XRC = Load_Res_TXT(IDR_TEXT_CK_XRC);


/*
 TxtFileRead_to_CString("CK/CK_MC.txt",&CK_MC); //加载TXT文件到字符串
 TxtFileRead_to_CString("CK/CK_DC.txt",&CK_DC); //加载TXT文件到字符串
 TxtFileRead_to_CString("CK/CK_XRC.txt",&CK_XRC); //加载TXT文件到字符串
*/



/*
//字符串解密
 My_String_JieMi(CK_MC,&CK_MC);
 My_String_JieMi(CK_DC,&CK_DC);
 My_String_JieMi(CK_XRC,&CK_XRC);
*/




 YaYun_X=1; //压韵的编号
 YaYun_Flag=0;


}

void CPoetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, output_text);
	DDX_Text(pDX, IDC_hs, PLine);
	DDX_Text(pDX, IDC_ds, PPart);
}

BEGIN_MESSAGE_MAP(CPoetDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON2, &CPoetDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CPoetDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CPoetDlg 消息处理程序

BOOL CPoetDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	//设置默认项目


 //是否压韵
CComboBox *m_combo = (CComboBox*)GetDlgItem(IDC_COMBO1);
m_combo->SetCurSel(1);
 //选择韵脚
CComboBox *m_combo2 = (CComboBox*)GetDlgItem(IDC_COMBO2);
m_combo2->SetCurSel(0);




	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CPoetDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CPoetDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CPoetDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CPoetDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码

  CAboutDlg  dlg;


  dlg.DoModal();
}
















int CPoetDlg::Return_String_Words_Sum(CString text) //返回字符串中单词的数量
{
 
 int sum=0;
 int i=0;
 CString tt,tmpch;

 int end=0;

 if(text.IsEmpty()==1)  return 0;  //检查字符串是否为空



   while(1)  //跳掉前面的空格 和 *
  {
   if(text[i]=='\0') //流的末尾  
          {
           end=1;break; //启动关闭
          } 

       if(text[i]==' ') {     i++; continue; }
  else if(text[i]=='*') {     i++; continue;  }
  else {break;}

  }






 while(1)

 {


   while(1)  //跳掉前面的空格 和 *
  {
   if(text[i]=='\0') //流的末尾  
          {
           end=1;break; //启动关闭
          } 

       if(text[i]==' ') {     i++; continue; }
  else if(text[i]=='*') {     i++; continue;  }
  else {break;}

  }


  if(end==1) break;

  tt.Empty();

  for(;;)  //读取有空格的文字 
  {


    i++;

    if(text[i]==' ' || text[i]=='\0') //发现文字 或者结束符
      {
               

	if(text[i]=='\0') //流的末尾
	  {

           end=1;; //启动关闭

				   
	   }


        break;

      }



   }//for


 

 sum++;

     



 }



 return sum;

}







void CPoetDlg::Return_String_SN_start_end(CString text,int SN,int *SN_start,int *SN_end) //返回字符串中 第SN个单词 偏移的地址 开始 结束
{
 
 int sum=0;
 int i=0;
 
 int n_start=-1,n_end=-1;



 int end=0;

 if(text.IsEmpty()==1)  end=1;  //检查字符串是否为空



   while(1)  //跳掉前面的空格 和 *
  {
   if(text[i]=='\0') //流的末尾  
          {
           end=1;break; //启动关闭
          } 

       if(text[i]==' ') {     i++; continue; }
 
  else {break;}

  }


 int iii=Return_String_Words_Sum(text); //返回字符串中单词的数量
 if(iii==0) end=1;
 if(iii<SN) end=1;

 while(1)

 {


   while(1)  //跳掉前面的空格 和 *
  {
   if(text[i]=='\0') //流的末尾  
          {
           end=1;break; //启动关闭
          } 

       if(text[i]==' ') {     i++; continue; }

  else {break;}

  }


  if(end==1) break;

  if(SN-sum==1) n_start=i;



  for(;;)  //读取有空格的文字 
  {


    i++;

    if(text[i]==' ' || text[i]=='\0') //发现文字 或者结束符
      {
               

	if(text[i]=='\0') //流的末尾
	  {

           end=1; //启动关闭

				   
	   }


	if(SN-sum==1)
	  {

            n_end=i-1; 

           end=1; //启动关闭

				   
	   }


        break;

      }



   }//for


 

 sum++;

     



 }



 *SN_start=n_start;
 *SN_end=n_end;

}








CString CPoetDlg::Return_YunJiao_String(CString S_CString,int YunJiao) //返回韵脚所在的行
{
  CString L,R;

  CString tt;

  CString X_CString;

       if(YunJiao==0) {YunJiao=Xrand(1,18);} //0是随机选压韵行

       if(YunJiao==1) {X_CString="A:";}
  else if(YunJiao==2) {X_CString="AI:";}
  else if(YunJiao==3) {X_CString="AN:";}
  else if(YunJiao==4) {X_CString="ANG:";}
  else if(YunJiao==5) {X_CString="AO:";}
  else if(YunJiao==6) {X_CString="E:";}
  else if(YunJiao==7) {X_CString="EE:";}
  else if(YunJiao==8) {X_CString="EI:";}
  else if(YunJiao==9) {X_CString="EN:";}
  else if(YunJiao==10){X_CString="ENG:";}
  else if(YunJiao==11){X_CString="I:";}
  else if(YunJiao==12){X_CString="ING:";}
  else if(YunJiao==13){X_CString="O:";}
  else if(YunJiao==14){X_CString="ONG:";}
  else if(YunJiao==15){X_CString="R:";}
  else if(YunJiao==16){X_CString="U:";}
  else if(YunJiao==17){X_CString="UI:";}
  else if(YunJiao==18){X_CString="V:";}



  int X_CString_length=X_CString.GetLength();//字符串的长度


   int X_weizhi=S_CString.Find(X_CString) + X_CString_length;//+ 1;



   while(1)  
  {
   if(S_CString[X_weizhi]=='\0') //流的末尾  
          {
           break; //启动关闭
          } 

   if(S_CString[X_weizhi]=='\n') //流的末尾  
          {
           break; //启动关闭
          } 

  tt+=S_CString[X_weizhi];

   X_weizhi++;

  }



return tt;


}




CString CPoetDlg::Rand_Crossword(int kind) //随机填词
{


 int SUM,SN;

 int t_start,t_end;
 CString get_text;
 CString tmp;


   if(kind==1)  //名词
     {

      tmp=Return_YunJiao_String(CK_MC,0); //返回韵脚0

      SUM=Return_String_Words_Sum(tmp); //返回字符串中单词的数量

      SN=Xrand(1,SUM);

      Return_String_SN_start_end(tmp,SN,&t_start,&t_end); //返回字符串中 第SN个单词 偏移的地址 开始 结束

      get_text = tmp.Mid(t_start, t_end-t_start+1);


     }

   else if(kind==2)  //动词
     {
      tmp=Return_YunJiao_String(CK_DC,0); //返回韵脚0

      SUM=Return_String_Words_Sum(tmp); //返回字符串中单词的数量

      SN=Xrand(1,SUM);

      Return_String_SN_start_end(tmp,SN,&t_start,&t_end); //返回字符串中 第SN个单词 偏移的地址 开始 结束

      get_text = tmp.Mid(t_start, t_end-t_start+1);


     }

   else if(kind==3)  //形容词
     {
      tmp=Return_YunJiao_String(CK_XRC,0); //返回韵脚0

      SUM=Return_String_Words_Sum(tmp); //返回字符串中单词的数量

      SN=Xrand(1,SUM);

      Return_String_SN_start_end(tmp,SN,&t_start,&t_end); //返回字符串中 第SN个单词 偏移的地址 开始 结束

      get_text = tmp.Mid(t_start, t_end-t_start+1);

     }


   else if(kind==4)  //压韵名词
     {
      tmp=Return_YunJiao_String(CK_MC,YaYun_X); //返回韵脚所在的行

      SUM=Return_String_Words_Sum(tmp); //返回字符串中单词的数量

      SN=Xrand(1,SUM);

      Return_String_SN_start_end(tmp,SN,&t_start,&t_end); //返回字符串中 第SN个单词 偏移的地址 开始 结束

      get_text = tmp.Mid(t_start, t_end-t_start+1);


     }

   else if(kind==5)  //压韵动词
     {
      tmp=Return_YunJiao_String(CK_DC,YaYun_X); //返回韵脚所在的行

      SUM=Return_String_Words_Sum(tmp); //返回字符串中单词的数量

      SN=Xrand(1,SUM);

      Return_String_SN_start_end(tmp,SN,&t_start,&t_end); //返回字符串中 第SN个单词 偏移的地址 开始 结束

      get_text = tmp.Mid(t_start, t_end-t_start+1);

     }

   else if(kind==6)  //压韵形容词
     {
      tmp=Return_YunJiao_String(CK_XRC,YaYun_X); //返回韵脚所在的行

      SUM=Return_String_Words_Sum(tmp); //返回字符串中单词的数量

      SN=Xrand(1,SUM);

      Return_String_SN_start_end(tmp,SN,&t_start,&t_end); //返回字符串中 第SN个单词 偏移的地址 开始 结束

      get_text = tmp.Mid(t_start, t_end-t_start+1);

     }


 return get_text;

}






void CPoetDlg::Form_Replace(CString *_text) //格式化替换
{
 

 int i=0;
 CString tt,tmpch;

 CString text=*_text;

 int end=0;

 if(text.IsEmpty()==1)  return;  //检查字符串是否为空
 text.TrimLeft(); //去除左边的空格
 text.TrimRight(); //去除右边的空格






   i=0;


 tt.Empty();




 while(1)

 {


   while(1)  //跳掉前面的空格 
  {
   if(text[i]=='\0') //流的末尾  
          {
           end=1;break; //启动关闭
          } 

       if(text[i]==' ') {     i++; continue; }

  else if(text[i]=='<') { i++;break;}

  tt+=text[i];

   i++;

  }



  if(end==1) break;




  tmpch.Empty();

  for(;;)  //读取<>里的的文字 
  {



    tmpch+=text[i];

    i++;

    if(text[i]=='>'  || text[i]=='\0') //发现文字 或者结束符
      {

  

    	if(text[i]=='\0') //流的末尾
		{
                 tmpch+='\0';
                 end=1;; //启动关闭
                 break;
				   
		}

        i++;  //跳过>
        break;

      }



   }//for

   if(tmpch=="名词")  tmpch=Rand_Crossword(1); //随机填词
   else if(tmpch=="动词")  tmpch=Rand_Crossword(2); //随机填词
   else if(tmpch=="形容词")  tmpch=Rand_Crossword(3); //随机填词
   else if(tmpch=="压韵名词")  tmpch=Rand_Crossword(4); //随机填词
   else if(tmpch=="压韵动词")  tmpch=Rand_Crossword(5); //随机填词
   else if(tmpch=="压韵形容词")  tmpch=Rand_Crossword(6); //随机填词

    tt+=tmpch;



     



 }






*_text=tt;

}




CString CPoetDlg::Write_Poetry(int Line,int Part,int YaYun)  //写诗
{
 int l,p,r;
 CString get_test;
 CString tt;
 CString text;

 for(p=0;p<Part;p++)
 {

  for(l=0;l<Line;l++)
  {
   r=Xrand(0,Form_SUM-1);     //随机一个句式种类

   if(YaYun==0)
   get_test=Form[r];  //得到一个句式

   else if(YaYun==1)
   get_test=Form_YY[r];  //得到一个句式

   Form_Replace(&get_test); //格式化替换句式


   tt.Format("%s\r\n",get_test);
   text+=tt;

  }

   tt.Format("\r\n");
   text+=tt;
 }



  return text;
}


CString CPoetDlg::Load_Res_TXT(UINT ID) //加载资源中的TXT文件到字符串
{
 CString strRes;

 strRes.Empty();

 HRSRC hRes = FindResource(NULL, MAKEINTRESOURCE(ID), "TEXT");
 if (hRes==NULL)
 return strRes;

 HRSRC hResLoad=(HRSRC)LoadResource(NULL, hRes);
 if (hResLoad==NULL)
 return strRes;

 LPVOID lpResLock = LockResource(hResLoad);


 strRes.Format("%s", lpResLock);
 return  strRes;
}









void CPoetDlg::My_String_JiaMi(CString S_TEXT, CString *D_TEXT)
{
 
 *D_TEXT=S_TEXT;

 int i=0;
 int  x;
char cx;

 int fff=0;

 CString tt,tmp_TEXT;

  while(1)
       {

          if(S_TEXT[i]=='\0')  
		  {
			  *D_TEXT=tmp_TEXT;
              break;
		  }


  

           cx=S_TEXT.GetAt(i);
           x=cx;

           //加密公式---------------
           int xx;


            xx=x;
           if(fff==0)
		   {
                    x=x+91; 

                    fff=1;
		   }

           else if(fff==1)
		   {
                    x=x+5; 

                    fff=2;
		   }

           else if(fff==2)
		   {
                    x=x-12; 

                    fff=0;
		   }


		   //-------------------------





           tt.Format("%d ",x);


           tmp_TEXT+=tt;
 


       i++;

      }



}



void CPoetDlg::My_String_JieMi(CString S_TEXT, CString *D_TEXT)
{
int i=0;
int  x;

CString tt;
char cx;
CString tmpch,JieMi_TEXT;


 int fff=0;


int end=0;


 while(1)
       {

          if(S_TEXT[i]=='\0')  
		  {

              break;
		  }
         if(end==1) break;



        while(1)
		{
           
           tt=S_TEXT.GetAt(i);


          if(S_TEXT[i]=='\0' || S_TEXT[i]==' ' )  
		  {
           i++;
		   if(S_TEXT[i]=='\0' ) end=1;
           break;
          }


           tmpch+=tt;

 

         i++;

		}



        x=atoi(tmpch);  //数字的字符串变 int





 

          //解密公式------------------

           if(fff==0)
		   {
                    x=x-91; 

                    fff=1;
		   }

           else if(fff==1)
		   {
                    x=x-5; 

                    fff=2;
		   }


           else if(fff==2)
		   {
                    x=x+12; 

                    fff=0;

                   }

        //--------------------------



        cx=char(x);

       JieMi_TEXT+=cx;
       tmpch.Empty();

      }


*D_TEXT=JieMi_TEXT;

}




void CPoetDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码


	
 UpdateData();

 //是否压韵
CComboBox *m_combo = (CComboBox*)GetDlgItem(IDC_COMBO1);
int n_select = m_combo->GetCurSel();
CString szname;
m_combo->GetLBText(n_select,szname);

if(szname=="是")  YaYun_Flag=1;
else if(szname=="否")  YaYun_Flag=0;


 //选择韵脚
CComboBox *m_combo2 = (CComboBox*)GetDlgItem(IDC_COMBO2);
int n_select2 = m_combo2->GetCurSel();
CString szname2;
m_combo2->GetLBText(n_select2,szname2);

       if(szname2=="A") {YaYun_X=1;}
  else if(szname2=="AI") {YaYun_X=2;}
  else if(szname2=="AN") {YaYun_X=3;}
  else if(szname2=="ANG") {YaYun_X=4;}
  else if(szname2=="AO") {YaYun_X=5;}
  else if(szname2=="E") {YaYun_X=6;}
  else if(szname2=="EE") {YaYun_X=7;}
  else if(szname2=="EI") {YaYun_X=8;}
  else if(szname2=="EN") {YaYun_X=9;}
  else if(szname2=="ENG"){YaYun_X=10;}
  else if(szname2=="I"){YaYun_X=11;}
  else if(szname2=="ING"){YaYun_X=12;}
  else if(szname2=="O"){YaYun_X=13;}
  else if(szname2=="ONG"){YaYun_X=14;}
  else if(szname2=="R"){YaYun_X=15;}
  else if(szname2=="U"){YaYun_X=16;}
  else if(szname2=="UI"){YaYun_X=17;}
  else if(szname2=="V"){YaYun_X=18;}

  else YaYun_X=1;



  output_text = Write_Poetry(PLine,PPart,YaYun_Flag);  //写诗  行数  段数  是否压韵;




 UpdateData(0);


}








//加载TXT文件到字符串
void CPoetDlg::TxtFileRead_to_CString(CString FileName,CString *CStr) 
{
 

 CString Str;

    FILE *fp;
    errno_t err;//检测文件问题

    LPCTSTR filename=FileName;  

 if((err = fopen_s(&fp,filename,"r")) !=0)
	{
          CString ET;
          ET.Format("错误，%s文件不能读取!!",FileName);
          AfxMessageBox(ET);
		   PostMessage(WM_QUIT,0,0);
	}



   ///////////////////////////////////////////////////////////////

 char ch;
	   
 CString tmpch;
 
  Str.Empty();

  while(!feof(fp))
       {
          ch=fgetc(fp);





          tmpch.Format("%c",ch);

          Str+=tmpch;
 


      }


   fclose(fp);



 *CStr=Str;
	
}



