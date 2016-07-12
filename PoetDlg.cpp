// PoetDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Poet.h"
#include "PoetDlg.h"


#include "MyRand.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// CPoetDlg �Ի���




CPoetDlg::CPoetDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CPoetDlg::IDD, pParent)

{
	output_text = _T("");
	PLine = 6;
	PPart = 3;

	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);





//ʫ�������ʽ ��ͨ
Form[0]= "<����>��<���ݴ�>��";
Form[1]= "����<����>��<���ݴ�>��";
Form[2]= "�ҿ�����<���ݴ�>��<����>��<����>";
Form[3]= "�������<���ݴ�>��<����>��<���ݴ�>��<����>";
Form[4]= "�������<���ݴ�>��<����>";
Form[5]= "�������<���ݴ�>��<����>��<���ݴ�>��<����>";
Form[6]= "<���ݴ�>��<����>��<����>";
Form[7]= "����<����>";
Form[8]= "����<����>������<���ݴ�>��<����>";
Form[9]= "��Ϊ<����>��<���ݴ�>��";
Form[10]= "<����><���ݴ�>��<����>";
Form[11]= "<����>������<���ݴ�>��";
Form[12]= "����<���ݴ�>��<����>��<����><����>��<����>";
Form[13]= "��<����>�Ĵ�����";
Form[14]= "һ�ж���<���ݴ�>��";
Form[15]= "һ�ж���<����>�ţ�ֻ��<����>��<����>";
Form[16]= "һ�ж���<����>�ţ�ֻ��<����>�ڱ�<����>";
Form[17]= "һ�ж���<����>��һ�ж���<����>��һ�ж���<����>����~~";
Form[18]= "<���ݴ�>�ģ�<���ݴ�>�ģ�<���ݴ�>�ġ���";
Form[19]= "��<����>��<����>����";
Form[20]= "����<����>�ԣ���<����>�š���";
Form[21]= "����<����><����>����";
Form[22]= "<����>����<����>��<����>����";
Form[23]= "����<����>";
Form[24]= "�꣡<����>��<����>";
Form[25]= "����<����>��<����>��";
Form[26]= "��~��<����>�Ƕ�ô<���ݴ�>��";
Form[27]= "�ף���<���ݴ�>��<����>����<���ݴ�>��<����>����";
Form[28]= "�ޣ������ҵ�<����>��";
Form[29]= "�ޣ�<����>���ҵ�<����>��";
Form[30]= "ѽ��<���ݴ�>��<���ݴ�>��<����>����";
Form[31]= "Ŷ��һ�ж���<����>�š���";
Form[32]= "<����>�ɣ�";
Form[33]= "<����>��<����>��<����>��";
Form[34]= "�찡��<����>";
Form[35]= "�찡���ҵ�<����>";
Form[36]= "�찡��<����>��<����>����";
Form[37]= "ŷ����<���ݴ�>��<����>";
Form[38]= "ŷ��~ ����<����>������<����>������<����>���һ���<����>��";
Form[39]= "������<���ݴ�>��<����>����";
Form[40]= "���������� <����>��<����>����<����>";
Form[41]= "�������� <����>��<����>";
Form[42]= "���� <����>������<����>����";
Form[43]= "����<����>�Ƕ�ô<���ݴ�>��";
Form[44]= "����<����>�Ƕ�ô��<����>��";
Form[45]= "��<����><����>ʱ����Ҫ<����>����";
Form[46]= "<����>������<����>�ɣ�";
Form[47]= "�����Ҳ���<����>����";
Form[48]= "����<����>������<����>����";
Form[49]= "�����<����>�ɣ�";
Form[50]= "��<����>�Ұɣ�";
Form[51]= "<����>����<����>�ɣ�";
Form[52]= "<����>����<����>�ɣ�";
Form[53]= "<����>��<����>�ˣ�";
Form[54]= "��<����>�ˡ���";
Form[55]= "<���ݴ�>��<����><����>��";
Form[56]= "<����>�ɣ�";
Form[57]= "<����>�ɣ�<����>��";
Form[58]= "<���ݴ�><����>����<����>";



//ʫ�������ʽ ѹ��
Form_YY[0]= "<����>��<ѹ�����ݴ�>��";
Form_YY[1]= "����<����>��<ѹ�����ݴ�>��";
Form_YY[2]= "�ҿ�����<���ݴ�><����>��<ѹ�϶���>";
Form_YY[3]= "�������<���ݴ�>��<����>��<���ݴ�>��<ѹ������>";
Form_YY[4]= "�������<���ݴ�>��<ѹ������>";
Form_YY[5]= "�������<���ݴ�>��<����>��<���ݴ�>��<ѹ������>";
Form_YY[6]= "<���ݴ�><����>��<ѹ�϶���>";
Form_YY[7]= "����<ѹ�϶���>";
Form_YY[8]= "����<����>������<���ݴ�>��<ѹ�϶���>";
Form_YY[9]= "��Ϊ<����>��<ѹ�����ݴ�>��";
Form_YY[10]= "<����><���ݴ�>��<ѹ�϶���>";
Form_YY[11]= "<����>������<ѹ�����ݴ�>��";
Form_YY[12]= "����<���ݴ�>��<����>��<����><����>��<ѹ������>";
Form_YY[13]= "��<ѹ������>�Ĵ�����";
Form_YY[14]= "һ�ж���<ѹ�����ݴ�>��";
Form_YY[15]= "һ�ж���<����>�ţ�ֻ��<����>��<ѹ�϶���>";
Form_YY[16]= "һ�ж���<����>�ţ�ֻ��<����>�ڱ�<ѹ�϶���>";
Form_YY[17]= "һ�ж���<����>��һ�ж���<ѹ�϶���>��һ�ж���<ѹ�϶���>����~~";
Form_YY[18]= "<���ݴ�>�ģ�<���ݴ�>�ģ�<ѹ�����ݴ�>�ġ���";
Form_YY[19]= "��<����>��<ѹ������>����";
Form_YY[20]= "����<����>�ԣ���<ѹ�϶���>�š���";
Form_YY[21]= "����<����><ѹ������>����";
Form_YY[22]= "<����>����<����>��<ѹ�϶���>����";
Form_YY[23]= "����<ѹ������>";
Form_YY[24]= "�꣡<����>��<ѹ�϶���>";
Form_YY[25]= "����<����>��<ѹ�϶���>��";
Form_YY[26]= "��~��<����>�Ƕ�ô<ѹ�����ݴ�>��";
Form_YY[27]= "�ף���<���ݴ�>��<����>����<���ݴ�>��<ѹ������>����";
Form_YY[28]= "�ޣ������ҵ�<ѹ������>��";
Form_YY[29]= "�ޣ�<����>���ҵ�<ѹ������>��";
Form_YY[30]= "ѽ��<���ݴ�>��<���ݴ�>��<ѹ������>����";
Form_YY[31]= "Ŷ��һ�ж���<ѹ�϶���>�š���";
Form_YY[32]= "<ѹ�϶���>�ɣ�";
Form_YY[33]= "<����>��<����>��<ѹ������>��";
Form_YY[34]= "�찡��<ѹ������>";
Form_YY[35]= "�찡���ҵ�<ѹ������>";
Form_YY[36]= "�찡��<����>��<ѹ�϶���>����";
Form_YY[37]= "ŷ����<���ݴ�>��<ѹ������>";
Form_YY[38]= "ŷ��~ ����<����>������<����>������<����>���һ���<ѹ������>��";
Form_YY[39]= "������<���ݴ�>��<ѹ������>����";
Form_YY[40]= "���������� <����>��<����>����<ѹ������>";
Form_YY[41]= "�������� <����>��<ѹ�϶���>";
Form_YY[42]= "���� <����>������<ѹ������>����";
Form_YY[43]= "����<����>�Ƕ�ô<ѹ�����ݴ�>��";
Form_YY[44]= "����<����>�Ƕ�ô��<ѹ�϶���>��";
Form_YY[45]= "��<����><����>ʱ����Ҫ<ѹ�϶���>����";
Form_YY[46]= "<����>������<ѹ�϶���>�ɣ�";
Form_YY[47]= "�����Ҳ���<ѹ�϶���>����";
Form_YY[48]= "����<����>������<ѹ������>����";
Form_YY[49]= "�����<ѹ�϶���>�ɣ�";
Form_YY[50]= "��<ѹ�϶���>�Ұɣ�";
Form_YY[51]= "<����>����<ѹ�϶���>�ɣ�";
Form_YY[52]= "<����>����<ѹ�϶���>�ɣ�";
Form_YY[53]= "<����>��<ѹ�϶���>�ˣ�";
Form_YY[54]= "��<ѹ�϶���>�ˡ���";
Form_YY[55]= "<���ݴ�>��<����><ѹ�϶���>��";
Form_YY[56]= "<ѹ�϶���>�ɣ�";
Form_YY[57]= "<����>�ɣ�<ѹ������>��";
Form_YY[58]= "<���ݴ�><����>����<ѹ������>";



//������Դ�е�TXT�ļ����ַ���
 CK_MC = Load_Res_TXT(IDR_TEXT_CK_MC);
 CK_DC = Load_Res_TXT(IDR_TEXT_CK_DC);
 CK_XRC = Load_Res_TXT(IDR_TEXT_CK_XRC);


/*
 TxtFileRead_to_CString("CK/CK_MC.txt",&CK_MC); //����TXT�ļ����ַ���
 TxtFileRead_to_CString("CK/CK_DC.txt",&CK_DC); //����TXT�ļ����ַ���
 TxtFileRead_to_CString("CK/CK_XRC.txt",&CK_XRC); //����TXT�ļ����ַ���
*/



/*
//�ַ�������
 My_String_JieMi(CK_MC,&CK_MC);
 My_String_JieMi(CK_DC,&CK_DC);
 My_String_JieMi(CK_XRC,&CK_XRC);
*/




 YaYun_X=1; //ѹ�ϵı��
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


// CPoetDlg ��Ϣ�������

BOOL CPoetDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	//����Ĭ����Ŀ


 //�Ƿ�ѹ��
CComboBox *m_combo = (CComboBox*)GetDlgItem(IDC_COMBO1);
m_combo->SetCurSel(1);
 //ѡ���Ͻ�
CComboBox *m_combo2 = (CComboBox*)GetDlgItem(IDC_COMBO2);
m_combo2->SetCurSel(0);




	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CPoetDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CPoetDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CPoetDlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

  CAboutDlg  dlg;


  dlg.DoModal();
}
















int CPoetDlg::Return_String_Words_Sum(CString text) //�����ַ����е��ʵ�����
{
 
 int sum=0;
 int i=0;
 CString tt,tmpch;

 int end=0;

 if(text.IsEmpty()==1)  return 0;  //����ַ����Ƿ�Ϊ��



   while(1)  //����ǰ��Ŀո� �� *
  {
   if(text[i]=='\0') //����ĩβ  
          {
           end=1;break; //�����ر�
          } 

       if(text[i]==' ') {     i++; continue; }
  else if(text[i]=='*') {     i++; continue;  }
  else {break;}

  }






 while(1)

 {


   while(1)  //����ǰ��Ŀո� �� *
  {
   if(text[i]=='\0') //����ĩβ  
          {
           end=1;break; //�����ر�
          } 

       if(text[i]==' ') {     i++; continue; }
  else if(text[i]=='*') {     i++; continue;  }
  else {break;}

  }


  if(end==1) break;

  tt.Empty();

  for(;;)  //��ȡ�пո������ 
  {


    i++;

    if(text[i]==' ' || text[i]=='\0') //�������� ���߽�����
      {
               

	if(text[i]=='\0') //����ĩβ
	  {

           end=1;; //�����ر�

				   
	   }


        break;

      }



   }//for


 

 sum++;

     



 }



 return sum;

}







void CPoetDlg::Return_String_SN_start_end(CString text,int SN,int *SN_start,int *SN_end) //�����ַ����� ��SN������ ƫ�Ƶĵ�ַ ��ʼ ����
{
 
 int sum=0;
 int i=0;
 
 int n_start=-1,n_end=-1;



 int end=0;

 if(text.IsEmpty()==1)  end=1;  //����ַ����Ƿ�Ϊ��



   while(1)  //����ǰ��Ŀո� �� *
  {
   if(text[i]=='\0') //����ĩβ  
          {
           end=1;break; //�����ر�
          } 

       if(text[i]==' ') {     i++; continue; }
 
  else {break;}

  }


 int iii=Return_String_Words_Sum(text); //�����ַ����е��ʵ�����
 if(iii==0) end=1;
 if(iii<SN) end=1;

 while(1)

 {


   while(1)  //����ǰ��Ŀո� �� *
  {
   if(text[i]=='\0') //����ĩβ  
          {
           end=1;break; //�����ر�
          } 

       if(text[i]==' ') {     i++; continue; }

  else {break;}

  }


  if(end==1) break;

  if(SN-sum==1) n_start=i;



  for(;;)  //��ȡ�пո������ 
  {


    i++;

    if(text[i]==' ' || text[i]=='\0') //�������� ���߽�����
      {
               

	if(text[i]=='\0') //����ĩβ
	  {

           end=1; //�����ر�

				   
	   }


	if(SN-sum==1)
	  {

            n_end=i-1; 

           end=1; //�����ر�

				   
	   }


        break;

      }



   }//for


 

 sum++;

     



 }



 *SN_start=n_start;
 *SN_end=n_end;

}








CString CPoetDlg::Return_YunJiao_String(CString S_CString,int YunJiao) //�����Ͻ����ڵ���
{
  CString L,R;

  CString tt;

  CString X_CString;

       if(YunJiao==0) {YunJiao=Xrand(1,18);} //0�����ѡѹ����

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



  int X_CString_length=X_CString.GetLength();//�ַ����ĳ���


   int X_weizhi=S_CString.Find(X_CString) + X_CString_length;//+ 1;



   while(1)  
  {
   if(S_CString[X_weizhi]=='\0') //����ĩβ  
          {
           break; //�����ر�
          } 

   if(S_CString[X_weizhi]=='\n') //����ĩβ  
          {
           break; //�����ر�
          } 

  tt+=S_CString[X_weizhi];

   X_weizhi++;

  }



return tt;


}




CString CPoetDlg::Rand_Crossword(int kind) //������
{


 int SUM,SN;

 int t_start,t_end;
 CString get_text;
 CString tmp;


   if(kind==1)  //����
     {

      tmp=Return_YunJiao_String(CK_MC,0); //�����Ͻ�0

      SUM=Return_String_Words_Sum(tmp); //�����ַ����е��ʵ�����

      SN=Xrand(1,SUM);

      Return_String_SN_start_end(tmp,SN,&t_start,&t_end); //�����ַ����� ��SN������ ƫ�Ƶĵ�ַ ��ʼ ����

      get_text = tmp.Mid(t_start, t_end-t_start+1);


     }

   else if(kind==2)  //����
     {
      tmp=Return_YunJiao_String(CK_DC,0); //�����Ͻ�0

      SUM=Return_String_Words_Sum(tmp); //�����ַ����е��ʵ�����

      SN=Xrand(1,SUM);

      Return_String_SN_start_end(tmp,SN,&t_start,&t_end); //�����ַ����� ��SN������ ƫ�Ƶĵ�ַ ��ʼ ����

      get_text = tmp.Mid(t_start, t_end-t_start+1);


     }

   else if(kind==3)  //���ݴ�
     {
      tmp=Return_YunJiao_String(CK_XRC,0); //�����Ͻ�0

      SUM=Return_String_Words_Sum(tmp); //�����ַ����е��ʵ�����

      SN=Xrand(1,SUM);

      Return_String_SN_start_end(tmp,SN,&t_start,&t_end); //�����ַ����� ��SN������ ƫ�Ƶĵ�ַ ��ʼ ����

      get_text = tmp.Mid(t_start, t_end-t_start+1);

     }


   else if(kind==4)  //ѹ������
     {
      tmp=Return_YunJiao_String(CK_MC,YaYun_X); //�����Ͻ����ڵ���

      SUM=Return_String_Words_Sum(tmp); //�����ַ����е��ʵ�����

      SN=Xrand(1,SUM);

      Return_String_SN_start_end(tmp,SN,&t_start,&t_end); //�����ַ����� ��SN������ ƫ�Ƶĵ�ַ ��ʼ ����

      get_text = tmp.Mid(t_start, t_end-t_start+1);


     }

   else if(kind==5)  //ѹ�϶���
     {
      tmp=Return_YunJiao_String(CK_DC,YaYun_X); //�����Ͻ����ڵ���

      SUM=Return_String_Words_Sum(tmp); //�����ַ����е��ʵ�����

      SN=Xrand(1,SUM);

      Return_String_SN_start_end(tmp,SN,&t_start,&t_end); //�����ַ����� ��SN������ ƫ�Ƶĵ�ַ ��ʼ ����

      get_text = tmp.Mid(t_start, t_end-t_start+1);

     }

   else if(kind==6)  //ѹ�����ݴ�
     {
      tmp=Return_YunJiao_String(CK_XRC,YaYun_X); //�����Ͻ����ڵ���

      SUM=Return_String_Words_Sum(tmp); //�����ַ����е��ʵ�����

      SN=Xrand(1,SUM);

      Return_String_SN_start_end(tmp,SN,&t_start,&t_end); //�����ַ����� ��SN������ ƫ�Ƶĵ�ַ ��ʼ ����

      get_text = tmp.Mid(t_start, t_end-t_start+1);

     }


 return get_text;

}






void CPoetDlg::Form_Replace(CString *_text) //��ʽ���滻
{
 

 int i=0;
 CString tt,tmpch;

 CString text=*_text;

 int end=0;

 if(text.IsEmpty()==1)  return;  //����ַ����Ƿ�Ϊ��
 text.TrimLeft(); //ȥ����ߵĿո�
 text.TrimRight(); //ȥ���ұߵĿո�






   i=0;


 tt.Empty();




 while(1)

 {


   while(1)  //����ǰ��Ŀո� 
  {
   if(text[i]=='\0') //����ĩβ  
          {
           end=1;break; //�����ر�
          } 

       if(text[i]==' ') {     i++; continue; }

  else if(text[i]=='<') { i++;break;}

  tt+=text[i];

   i++;

  }



  if(end==1) break;




  tmpch.Empty();

  for(;;)  //��ȡ<>��ĵ����� 
  {



    tmpch+=text[i];

    i++;

    if(text[i]=='>'  || text[i]=='\0') //�������� ���߽�����
      {

  

    	if(text[i]=='\0') //����ĩβ
		{
                 tmpch+='\0';
                 end=1;; //�����ر�
                 break;
				   
		}

        i++;  //����>
        break;

      }



   }//for

   if(tmpch=="����")  tmpch=Rand_Crossword(1); //������
   else if(tmpch=="����")  tmpch=Rand_Crossword(2); //������
   else if(tmpch=="���ݴ�")  tmpch=Rand_Crossword(3); //������
   else if(tmpch=="ѹ������")  tmpch=Rand_Crossword(4); //������
   else if(tmpch=="ѹ�϶���")  tmpch=Rand_Crossword(5); //������
   else if(tmpch=="ѹ�����ݴ�")  tmpch=Rand_Crossword(6); //������

    tt+=tmpch;



     



 }






*_text=tt;

}




CString CPoetDlg::Write_Poetry(int Line,int Part,int YaYun)  //дʫ
{
 int l,p,r;
 CString get_test;
 CString tt;
 CString text;

 for(p=0;p<Part;p++)
 {

  for(l=0;l<Line;l++)
  {
   r=Xrand(0,Form_SUM-1);     //���һ����ʽ����

   if(YaYun==0)
   get_test=Form[r];  //�õ�һ����ʽ

   else if(YaYun==1)
   get_test=Form_YY[r];  //�õ�һ����ʽ

   Form_Replace(&get_test); //��ʽ���滻��ʽ


   tt.Format("%s\r\n",get_test);
   text+=tt;

  }

   tt.Format("\r\n");
   text+=tt;
 }



  return text;
}


CString CPoetDlg::Load_Res_TXT(UINT ID) //������Դ�е�TXT�ļ����ַ���
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

           //���ܹ�ʽ---------------
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



        x=atoi(tmpch);  //���ֵ��ַ����� int





 

          //���ܹ�ʽ------------------

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
	// TODO: �ڴ���ӿؼ�֪ͨ����������


	
 UpdateData();

 //�Ƿ�ѹ��
CComboBox *m_combo = (CComboBox*)GetDlgItem(IDC_COMBO1);
int n_select = m_combo->GetCurSel();
CString szname;
m_combo->GetLBText(n_select,szname);

if(szname=="��")  YaYun_Flag=1;
else if(szname=="��")  YaYun_Flag=0;


 //ѡ���Ͻ�
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



  output_text = Write_Poetry(PLine,PPart,YaYun_Flag);  //дʫ  ����  ����  �Ƿ�ѹ��;




 UpdateData(0);


}








//����TXT�ļ����ַ���
void CPoetDlg::TxtFileRead_to_CString(CString FileName,CString *CStr) 
{
 

 CString Str;

    FILE *fp;
    errno_t err;//����ļ�����

    LPCTSTR filename=FileName;  

 if((err = fopen_s(&fp,filename,"r")) !=0)
	{
          CString ET;
          ET.Format("����%s�ļ����ܶ�ȡ!!",FileName);
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



