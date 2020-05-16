
// MFC_0302_3View.cpp : CMFC_0302_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC_0302_3.h"
#endif

#include "MFC_0302_3Doc.h"
#include "MFC_0302_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0302_3View

IMPLEMENT_DYNCREATE(CMFC_0302_3View, CView)

BEGIN_MESSAGE_MAP(CMFC_0302_3View, CView)
END_MESSAGE_MAP()

// CMFC_0302_3View 构造/析构

CMFC_0302_3View::CMFC_0302_3View()
{
	// TODO: 在此处添加构造代码

}

CMFC_0302_3View::~CMFC_0302_3View()
{
}

BOOL CMFC_0302_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC_0302_3View 绘制

void CMFC_0302_3View::OnDraw(CDC* pDC)
{
	CMFC_0302_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC_0302_3View 诊断

#ifdef _DEBUG
void CMFC_0302_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0302_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0302_3Doc* CMFC_0302_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0302_3Doc)));
	return (CMFC_0302_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0302_3View 消息处理程序
