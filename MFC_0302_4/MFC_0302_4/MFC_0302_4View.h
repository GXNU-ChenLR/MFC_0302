
// MFC_0302_4View.h : CMFC_0302_4View ��Ľӿ�
//

#pragma once


class CMFC_0302_4View : public CView
{
protected: // �������л�����
	CMFC_0302_4View();
	DECLARE_DYNCREATE(CMFC_0302_4View)

// ����
public:
	CMFC_0302_4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC_0302_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC_0302_4View.cpp �еĵ��԰汾
inline CMFC_0302_4Doc* CMFC_0302_4View::GetDocument() const
   { return reinterpret_cast<CMFC_0302_4Doc*>(m_pDocument); }
#endif
