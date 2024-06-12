
// ImageProc2024_20221665View.h: CImageProc202420221665View 클래스의 인터페이스
//

#pragma once


class CImageProc202420221665View : public CScrollView
{
protected: // serialization에서만 만들어집니다.
	CImageProc202420221665View() noexcept;
	DECLARE_DYNCREATE(CImageProc202420221665View)

// 특성입니다.
public:
	CImageProc202420221665Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // 생성 후 처음 호출되었습니다.
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CImageProc202420221665View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPixelAdd();
	afx_msg void OnPixelSubtraction();
	afx_msg void OnPixelMultiplication();
	afx_msg void OnPixelDivision();
	afx_msg void OnHistogramEqualization();
	afx_msg void OnPixelStretching();
	afx_msg void OnPixelBinarization();
	afx_msg void OnPixelTwoImageAdd();
	afx_msg void OnPixelTwoImageSubtraction();
	afx_msg void OnRegionMeaning();
	void Convolve(unsigned char** InImg, unsigned char** Resmg, int cols, int rows, float mask[][3], int bias, int depth);
	afx_msg void OnRegionEmbossing();
	afx_msg void OnRegionPrewitt();
	afx_msg void OnRegionRobert();
	afx_msg void OnRegionSobel();
	afx_msg void OnRegionSharpning();
	afx_msg void OnAverageFiltering();
	afx_msg void OnMediumFiltering();
	afx_msg void OnMopologyColorGray();
	afx_msg void OnMopologyBinarization();
	afx_msg void OnMopologyErosion();
	afx_msg void OnMopologyDilation();
	afx_msg void OnOpening();
	void CopyResultToInput();
	afx_msg void OnMopologyClosing();
	afx_msg void OnGeometryZoominPixelCopy();
	afx_msg void OnGeometryZoominInterpolation();
	afx_msg void OnGeometryZoomoutSubsampling();
	afx_msg void OnGeometryZoomoutMinsub();
	afx_msg void OnGeometryZoomoutAvg();
	afx_msg void OnGeometryRotate();
	afx_msg void OnGeometryMirror();
	afx_msg void OnGeometryFlip();
	afx_msg void OnGeometryWarping();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnMButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnAviView();
	CString AviFileName;
	bool bAviMode;
	void LoadAVIFile(CDC* pDC);
};

#ifndef _DEBUG  // ImageProc2024_20221665View.cpp의 디버그 버전
inline CImageProc202420221665Doc* CImageProc202420221665View::GetDocument() const
   { return reinterpret_cast<CImageProc202420221665Doc*>(m_pDocument); }
#endif

