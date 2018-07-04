// TestView.cpp : implementation of the CTestView class
//

#include "stdafx.h"
#include "Test.h"

#include "TestDoc.h"
#include "TestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestView

IMPLEMENT_DYNCREATE(CTestView, CView)

BEGIN_MESSAGE_MAP(CTestView, CView)
	//{{AFX_MSG_MAP(CTestView)
	ON_WM_CREATE()
	ON_WM_LBUTTONDOWN()
	ON_WM_CANCELMODE()
	ON_WM_CAPTURECHANGED()
	ON_WM_CHAR()
	ON_WM_LBUTTONUP()
	ON_WM_CONTEXTMENU()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestView construction/destruction

CTestView::CTestView()
{
 m_ptOrigin=0;// TODO: add construction code here

}

CTestView::~CTestView()
{
}

BOOL CTestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTestView drawing

void CTestView::OnDraw(CDC* pDC)
{
	CTestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CString str;
	str.LoadString(IDS_STRING61446);
	pDC->TextOut(50,50,str);


	CSize sz = pDC->GetTextExtent(str);
    pDC->BeginPath();
	pDC->Rectangle(50,50,50+sz.cx,50+sz.cy);
	pDC->EndPath();
	pDC->SelectClipPath(RGN_DIFF);

	for(int i=0; i<300; i+=10)
	{
		pDC->MoveTo(0,i);
		pDC->LineTo(300,i);
		pDC->MoveTo(i,0);
		pDC->LineTo(i,300);
	}

	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CTestView printing

BOOL CTestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTestView diagnostics

#ifdef _DEBUG
void CTestView::AssertValid() const
{
	CView::AssertValid();
}

void CTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTestDoc* CTestView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTestDoc)));
	return (CTestDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTestView message handlers

int CTestView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	bitmap.LoadBitmap(IDB_BITMAP1);
	CreateCaret(&bitmap);
	ShowCaret();
	
	//�����豸������
/*	CClientDC dc(this);
	//�����ı���Ϣ�ṹ�����
	TEXTMETRIC tm;
	//����豸�������е��ı���Ϣ
	dc.GetTextMetrics(&tm);
	//���������С���������ʵĲ����
	CreateSolidCaret(tm.tmAveCharWidth/8, tm.tmHeight);
	//��ʾ�����
	ShowCaret();
	*/
	// TODO: Add your specialized creation code here
	//m_btn.Create("ά��",WS_CHILD | WS_VISIBLE | BS_AUTO3STATE,
	//	CRect(0,0,100,100),GetParent(),/*this,*/123);
	//m_btn.ShowWindow(SW_SHOWNORMAL);
	//	m_btn.Create("��ť",WS_CHILD | BS_DEFPUSHBUTTON,	CRect(0,0,100,100),GetParent(),123);
//	m_btn.Create("��ť",WS_CHILD | BS_DEFPUSHBUTTON,CRect(0,0,100,100),this,123);
//	m_btn.ShowWindow(SW_SHOWNORMAL);
	
	return 0;
}

void CTestView::OnLButtonDown(UINT nFlags, CPoint point) 
{
//	m_ptOrigin = point;
	//m_ptOld = point;
//	m_bDraw = TRUE;
	CView::OnLButtonDown(nFlags, point);
}

void CTestView::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

void CTestView::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	//	MessageBox("skfgdsfg");
	CView::OnCaptureChanged(pWnd);
}

//DEL void CTestView::OnRButtonUp(UINT nFlags, CPoint point) 
//DEL {
//DEL // ���Ȼ�ô��ڵ��豸������
//DEL 	// ���Ȼ�ô��ڵ��豸������
//DEL 	HDC hdc;
//DEL 	hdc = ::GetDC(m_hWnd);
//DEL 	//�ƶ������������
//DEL 	MoveToEx(hdc, m_ptOrigin.x, m_ptOrigin.y, NULL);
//DEL 	//����
//DEL 	LineTo(hdc, point.x, point.y);
//DEL 	//�ͷ��豸������
//DEL 	::ReleaseDC(m_hWnd,hdc);
//DEL }

void CTestView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	
	CView::OnChar(nChar, nRepCnt, nFlags);
}

void CTestView::OnLButtonUp(UINT nFlags, CPoint point) 
{	// ���Ȼ�ô��ڵ��豸������
/*	HDC hdc;
	hdc = ::GetDC(m_hWnd);
	//�ƶ������������
	MoveToEx(hdc, m_ptOrigin.x, m_ptOrigin.y, NULL);
	//����
	LineTo(hdc, point.x, point.y);
	//�ͷ��豸������
	::ReleaseDC(m_hWnd,hdc);
	CView::OnLButtonUp(nFlags, point);*/
//����һ����ɫ��ˢ
//	CBrush brush(RGB(255,0,0));
	//����������豸������
	//CClientDC dc(this);
	//���ú�ɫ��ˢ��������ҷ�������γɵľ�������
//	dc.FillRect(CRect(m_ptOrigin,point),&brush);
	
}

void CTestView::OnContextMenu(CWnd* pWnd, CPoint point) 
{
	// TODO: Add your message handler code here
	
}
