
// MFC_0302_4View.cpp : CMFC_0302_4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0302_4.h"
#endif

#include "MFC_0302_4Doc.h"
#include "MFC_0302_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0302_4View

IMPLEMENT_DYNCREATE(CMFC_0302_4View, CView)

BEGIN_MESSAGE_MAP(CMFC_0302_4View, CView)
END_MESSAGE_MAP()

// CMFC_0302_4View ����/����

CMFC_0302_4View::CMFC_0302_4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC_0302_4View::~CMFC_0302_4View()
{
}

BOOL CMFC_0302_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0302_4View ����

void CMFC_0302_4View::OnDraw(CDC* pDC)
{
	CMFC_0302_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	this->GetClientRect(&cr);
	CBrush brush;
	brush.CreateSysColorBrush(COLOR_BTNFACE);
	CBrush* oldBr = pDC->SelectObject(&brush);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldBr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0302_4View ���

#ifdef _DEBUG
void CMFC_0302_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0302_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0302_4Doc* CMFC_0302_4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0302_4Doc)));
	return (CMFC_0302_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0302_4View ��Ϣ�������
