
// calculatorDlg.h : ͷ�ļ�
//

#pragma once


// CcalculatorDlg �Ի���
class CcalculatorDlg : public CDialogEx
{
// ����
public:
	CcalculatorDlg(CWnd* pParent = NULL);	// ��׼���캯��
	

// �Ի�������
	enum { IDD = IDD_CALCULATOR_DIALOG };

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
	CString m_str;
	afx_msg void OnBnClicked1();
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClicked0();
	afx_msg void OnBnClicked10();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedReduce();
	afx_msg void OnBnClickedRide();
	afx_msg void OnBnClickedDivide();
	afx_msg void OnBnClickedCalculator();
	int flag;
	double temp;
	afx_msg void OnBnClickedEliminate();
	afx_msg void OnBnClickedClear();
	afx_msg void OnBnClickedDeleteback();
	afx_msg void OnBnClickedOpposite();
	afx_msg void OnBnClickedReciprocal();
	afx_msg void OnBnClickedSquareroot();
	afx_msg void OnBnClickedOpposite3();
};
