/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidate, UIKeyboardCandidateSortControl, NSMutableArray, UIKeyboardCandidateScrollViewController, UIView, UIImage, <UIKeyboardCandidateListDelegate>, UIColor, NSArray;

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateList, UIKeyboardCandidateScrollViewControllerDelegate> {
    NSArray *m_candidates;
    NSMutableArray *m_buttons;
    <UIKeyboardCandidateListDelegate> *m_delegate;
    UIKeyboardCandidateScrollViewController *m_scrollViewController;
    int m_columns;
    int m_candidatesPerColumn;
    int m_candidatesPerPage;
    int m_current;
    int m_firstShown;
    int m_firstComposition;
    int m_candidateCount;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_symbolRect;
    UIColor *m_textColor;
    UIColor *m_highlightColor;
    BOOL m_respondsToSelect;
    BOOL m_respondsToAccept;
    UIView *_clippingView;
    UIView *_topBorder;
    UIImage *m_highlightImage;
    BOOL m_handwritingDictationEnabled_iPhone;
    UIKeyboardCandidate *dictationCandidate;
    UIKeyboardCandidateSortControl *m_scrollViewSortControl;
    UIKeyboardCandidate *m_dictationCandidate;
    unsigned int _selectedSortIndex;
}

@property unsigned int selectedSortIndex;
@property(retain) UIKeyboardCandidateScrollViewController * scrollViewController;
@property(retain) UIKeyboardCandidateSortControl * scrollViewSortControl;
@property(retain) UIColor * highlightColor;
@property(retain) UIKeyboardCandidate * dictationCandidate;


- (void)layout;
- (void)addSubview:(id)arg1;
- (void)dealloc;
- (unsigned int)count;
- (id).cxx_construct;
- (void)setDictationCandidate:(id)arg1;
- (id)highlightColor;
- (id)indexTitlesForGroupTitles:(id)arg1;
- (id)groupedCandidatesForUnsortedCandidates:(id)arg1;
- (id)groupedCandidatesFromCandidates:(id)arg1 forSortIndex:(unsigned int)arg2;
- (void)setSelectedSortIndex:(unsigned int)arg1;
- (void)setScrollViewController:(id)arg1;
- (void)setScrollViewSortControl:(id)arg1;
- (void)sortSelectionBarAction:(id)arg1;
- (id)scrollViewSortControl;
- (id)sortingMethodTitles;
- (id)scrollViewController;
- (unsigned int)selectedSortIndex;
- (void)jumpToCompositions;
- (void)updateAppearanceForDictationButton:(id)arg1;
- (void)selectCandidate:(id)arg1;
- (void)clearScrollViewController;
- (void)clearButtons;
- (void)setHighlightColor:(id)arg1;
- (id)dictationCandidate;
- (void)updateScrollViewController;
- (void)updateForKeyboard:(id)arg1 key:(id)arg2;
- (void)nextCandidatesAction;
- (void)refreshForDictationAvailablityDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 key:(id)arg3 state:(int)arg4;
- (void)configureKeyboard:(id)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (unsigned int)currentIndex;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateList;
- (id)currentCandidate;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
