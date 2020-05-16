
// MFC_0302_2View.cpp : CMFC_0302_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0302_2.h"
#endif

#include "MFC_0302_2Doc.h"
#include "MFC_0302_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0302_2View

IMPLEMENT_DYNCREATE(CMFC_0302_2View, CView)

BEGIN_MESSAGE_MAP(CMFC_0302_2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC_0302_2View ����/����

CMFC_0302_2View::CMFC_0302_2View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(256);
}

CMFC_0302_2View::~CMFC_0302_2View()
{
}

BOOL CMFC_0302_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0302_2View ����

void CMFC_0302_2View::OnDraw(CDC* pDC)
{
	CMFC_0302_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CClientDC dc(this);
	for (int i = 0; i < ca.GetSize(); i++)
	{
		dc.Ellipse(ca.GetAt(i));
	}
}


// CMFC_0302_2View ���

#ifdef _DEBUG
void CMFC_0302_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0302_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0302_2Doc* CMFC_0302_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0302_2Doc)));
	return (CMFC_0302_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0302_2View ��Ϣ�������


void CMFC_0302_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0302_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	/*pDoc->x = point.x;
	pDoc->y = point.y;
	pDoc->cr.left = pDoc->x - pDoc->r;
	pDoc->cr.top = pDoc->y - pDoc->r;
	pDoc->cr.right = pDoc->x + pDoc->r;
	pDoc->cr.bottom = pDoc->y + pDoc->r;
	CClientDC dc(this);
	dc.Ellipse(&pDoc->cr);*/

	int r = rand() % 50 + 5;
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
