/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABNamePropertyGroup, UILabel, NSString, ABStyleProvider, UIView, UIFont;

@interface ABPersonNameDisplayView : ABPasteboardControl  {
    ABNamePropertyGroup *_namePropertyGroup;
    int _primaryProperty;
    NSString *_primaryPropertyFormattingCountryCode;
    float _minimumHeight;
    BOOL _alignOnBottom;
    UILabel *_headlineLabel;
    UILabel *_tagLineLabel;
    UILabel *_messageLabel;
    UILabel *_messageDetailLabel;
    UIFont *_messageFont;
    UIFont *_messageDetailFont;
    ABStyleProvider *_styleProvider;
    NSString *_customHeadline;
    NSString *_customTagLine;
    NSString *_customMessage;
    NSString *_customMessageDetail;
    UIView *_customMessageView;
}

@property(retain) ABNamePropertyGroup * namePropertyGroup;
@property int primaryProperty;
@property(copy) NSString * primaryPropertyFormattingCountryCode;
@property float minimumHeight;
@property BOOL alignOnBottom;
@property(copy) NSString * headline;
@property(copy) NSString * tagLine;
@property(copy) NSString * message;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) ABStyleProvider * styleProvider;
@property(retain) UIView * customMessageView;


- (id)tagLine;
- (id)headline;
- (void)setAlignOnBottom:(BOOL)arg1;
- (BOOL)alignOnBottom;
- (void)setPrimaryPropertyFormattingCountryCode:(id)arg1;
- (id)primaryPropertyFormattingCountryCode;
- (void)_setSubviewsHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)reloadNameDataAnimated:(BOOL)arg1;
- (void)setTagLine:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)_setLabel:(id)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_appendString:(id)arg1 withFormatKey:(id)arg2 toTagLine:(id)arg3;
- (id)_copyTagLine;
- (id)_copyPrimaryValue;
- (void)_adjustLabelTextColorForPasteboardSelection:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })multilineLabel:(id)arg1 sizeThatFits:(struct CGSize { float x1; float x2; })arg2;
- (float)_heightForLabelsForWidth:(float)arg1;
- (void)initializeHeadlineAndTaglineIfNeeded;
- (id)_newLabelWithFont:(id)arg1 numberOfLines:(unsigned int)arg2;
- (void)_setFont:(id)arg1 isDetail:(BOOL)arg2;
- (void)_setMessageText:(id)arg1 isDetail:(BOOL)arg2;
- (void)_updateTagLineText;
- (void)_updateHeadlineText;
- (void)setNamePropertyGroup:(id)arg1;
- (id)namePropertyGroup;
- (int)primaryProperty;
- (void)setPrimaryProperty:(int)arg1;
- (void)setCustomMessageView:(id)arg1;
- (id)customMessageView;
- (void)setMessageDetailFont:(id)arg1;
- (id)messageDetailFont;
- (id)messageDetail;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (BOOL)abShouldShowMenu;
- (id)styleProvider;
- (void)setStyleProvider:(id)arg1;
- (void)setMinimumHeight:(float)arg1;
- (float)minimumHeight;
- (id)messageFont;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)message;
- (void)dealloc;
- (void)setMessage:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
