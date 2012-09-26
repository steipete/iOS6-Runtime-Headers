/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSIndexSet, NSString, NSArray;

@interface GKTableSectionButtonRow : GKTableSection  {
    NSArray *_buttonTitles;
    NSArray *_buttonActions;
    int _buttonType;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _buttonInsets;
    NSArray *_buttons;
    BOOL _hidden;
    BOOL _useFullColumnWidth;
    float _headerHeight;
    float _footerHeight;
    float _minButtonWidthForWideTable;
    float _minButtonWidthForNarrowTable;
    float _minButtonWidthThreshold;
    NSString *_footerText;
    float _betweenButtonsMargin;
    NSIndexSet *_buttonIndexesShowingLoadingIndicator;
    float _footerSideMargin;
    BOOL _useStackedButtons;
}

@property(retain) NSArray * buttonTitles;
@property(retain) NSArray * buttonActions;
@property(retain) NSString * footerText;
@property int buttonType;
@property float headerHeight;
@property float footerHeight;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } buttonInsets;
@property BOOL hidden;
@property BOOL useFullColumnWidth;
@property BOOL useStackedButtons;
@property float minButtonWidthForWideTable;
@property float minButtonWidthForNarrowTable;
@property float minButtonWidthThreshold;
@property float betweenButtonsMargin;
@property float footerSideMargin;
@property(retain) NSArray * buttons;
@property(retain) NSIndexSet * buttonIndexesShowingLoadingIndicator;

+ (id)sectionWithButtonTitle:(id)arg1 action:(SEL)arg2;

- (float)betweenButtonsMargin;
- (void)setFooterText:(id)arg1;
- (void)setMinButtonWidthThreshold:(float)arg1;
- (void)setMinButtonWidthForNarrowTable:(float)arg1;
- (void)setMinButtonWidthForWideTable:(float)arg1;
- (void)setButtonInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setButtonType:(int)arg1;
- (void)stopLoadingIndicatorForButtonAtIndex:(int)arg1 inTableView:(id)arg2;
- (void)startLoadingIndicatorForButtonAtIndex:(int)arg1 inTableView:(id)arg2;
- (void)centerButton:(id)arg1 tableWidth:(float)arg2;
- (BOOL)useFullColumnWidth;
- (float)minButtonWidthForTable:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })buttonInsets;
- (float)minButtonWidthForNarrowTable;
- (float)minButtonWidthForWideTable;
- (float)minButtonWidthThreshold;
- (id)buttonActions;
- (void)buttonWasTouched:(id)arg1;
- (float)tableView:(id)arg1 contentViewWidthForRow:(int)arg2;
- (void)setButtons:(id)arg1;
- (id)buttonTitles;
- (float)tableView:(id)arg1 contentViewHeightForRow:(int)arg2;
- (BOOL)useStackedButtonsInTableView:(id)arg1;
- (BOOL)useStackedButtons;
- (float)footerSideMargin;
- (id)footerText;
- (void)setButtonIndexesShowingLoadingIndicator:(id)arg1;
- (id)buttonIndexesShowingLoadingIndicator;
- (void)setFooterSideMargin:(float)arg1;
- (void)setBetweenButtonsMargin:(float)arg1;
- (void)setButtonActions:(id)arg1;
- (void)setButtonTitles:(id)arg1;
- (void)setUseFullColumnWidth:(BOOL)arg1;
- (void)setUseStackedButtons:(BOOL)arg1;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (id)viewForSectionFooterInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)rowCountInTableView:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)hidden;
- (id)init;
- (void)dealloc;
- (void)setFooterHeight:(float)arg1;
- (void)setHeaderHeight:(float)arg1;
- (float)footerHeight;
- (float)headerHeight;
- (id)buttonAtIndex:(int)arg1;
- (id)buttons;
- (int)buttonType;
- (float)heightForFooterInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
