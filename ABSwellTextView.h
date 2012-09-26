/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABSwellTextViewDelegate>, UIColor, NSString, UITextView, UIFont;

@interface ABSwellTextView : UIView <UITextViewDelegate> {
    UITextView *_textView;
    float _maxHeight;
    BOOL _allowsEditing;
    <ABSwellTextViewDelegate> *_delegate;
    struct { 
        unsigned int delegateImplementsShouldBeginEditing : 1; 
        unsigned int delegateImplementsShouldEndEditing : 1; 
        unsigned int delegateImplementsDidBeginEditing : 1; 
        unsigned int delegateImplementsDidEndEditing : 1; 
        unsigned int delegateImplementsDidChange : 1; 
    } _flags;
}

@property float maxHeight;
@property <ABSwellTextViewDelegate> * delegate;
@property BOOL allowsEditing;
@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property(getter=isHighlighted) BOOL highlighted;
@property UIColor * highlightedTextColor;
@property NSString * text;
@property UIFont * font;
@property UIColor * textColor;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;

+ (float)lineHeightWithFont:(id)arg1;

- (void)setKeyboardSettings:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection;
- (float)abUITextView:(id)arg1 heightForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (void)textViewTextDidChange:(id)arg1;
- (void)abUITextView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setMaxHeight:(float)arg1;
- (float)maxHeight;
- (id)text;
- (id)font;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)dealloc;
- (void)setAllowsEditing:(BOOL)arg1;
- (BOOL)allowsEditing;
- (void)setHighlightedTextColor:(id)arg1;
- (id)highlightedTextColor;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)_endPinningInputViews;
- (void)_beginPinningInputViews;
- (BOOL)canResignFirstResponder;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (BOOL)isFirstResponder;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)isScrollEnabled;
- (void)setFont:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
