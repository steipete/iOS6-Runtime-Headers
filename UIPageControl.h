/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSMutableArray, UIImage;

@interface UIPageControl : UIControl  {
    NSMutableArray *_indicators;
    int _currentPage;
    int _displayedPage;
    struct { 
        unsigned int hideForSinglePage : 1; 
        unsigned int defersCurrentPageDisplay : 1; 
    } _pageControlFlags;
    UIImage *_currentPageImage;
    UIImage *_pageImage;
    UIColor *_currentPageIndicatorTintColor;
    UIColor *_pageIndicatorTintColor;
}

@property int numberOfPages;
@property int currentPage;
@property BOOL hidesForSinglePage;
@property BOOL defersCurrentPageDisplay;
@property(retain) UIColor * pageIndicatorTintColor;
@property(retain) UIColor * currentPageIndicatorTintColor;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (int)_displayedPage;
- (id)pageIndicatorTintColor;
- (id)currentPageIndicatorTintColor;
- (struct CGSize { float x1; float x2; })sizeForNumberOfPages:(int)arg1;
- (void)updateCurrentPageDisplay;
- (BOOL)defersCurrentPageDisplay;
- (void)setDefersCurrentPageDisplay:(BOOL)arg1;
- (BOOL)hidesForSinglePage;
- (void)setHidesForSinglePage:(BOOL)arg1;
- (int)currentPage;
- (void)_updateCurrentPageDisplay;
- (void)_setDisplayedPage:(int)arg1;
- (void)_setCurrentPage:(int)arg1;
- (id)_pageIndicatorCurrentImageForPage:(int)arg1;
- (id)_pageIndicatorImageForPage:(int)arg1;
- (int)numberOfPages;
- (void)setPageIndicatorTintColor:(id)arg1;
- (void)setCurrentPageIndicatorTintColor:(id)arg1;
- (void)setCurrentPage:(int)arg1;
- (void)setNumberOfPages:(int)arg1;
- (void)_commonPageControlInit;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)layoutSubviews;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
