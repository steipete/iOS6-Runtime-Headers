/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, <ABDateFieldDelegate>, UIDatePicker, <ABDatePickerPresentationDelegate>, NSDate;

@interface ABDateField : ABUILabelWithPlaceholder  {
    UIButton *_clearButton;
    BOOL _isClearButtonEnabled;
    NSDate *_date;
    UIDatePicker *_datePicker;
    struct CGSize { 
        float width; 
        float height; 
    } _datePickerSize;
    BOOL _usesDatePickerAsInputView;
    BOOL _isFirstResponder;
    BOOL _inBecomeFirstResponder;
    BOOL _editable;
    <ABDateFieldDelegate> *_delegate;
    <ABDatePickerPresentationDelegate> *_presentationDelegate;
}

@property(retain) NSDate * date;
@property(getter=isEditable) BOOL editable;
@property struct CGSize { float x1; float x2; } datePickerSize;
@property <ABDateFieldDelegate> * delegate;
@property <ABDatePickerPresentationDelegate> * presentationDelegate;


- (void)setPresentationDelegate:(id)arg1;
- (id)presentationDelegate;
- (void)setDatePickerSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_attachToDatePicker:(id)arg1;
- (void)datePickerDateDidChange:(id)arg1;
- (void)_updateClearButton;
- (void)_setDate:(id)arg1 andInformDelegate:(BOOL)arg2;
- (void)_setClearButtonEnabled:(BOOL)arg1;
- (BOOL)_shouldEnableClearButton;
- (void)_clearButtonPressed:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isClearButtonPresent:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_clearButtonRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)_extraWidthForClearButton;
- (struct CGSize { float x1; float x2; })_clearButtonSize;
- (void)_dettachFromDatePicker:(id)arg1;
- (void)_updateLabelText;
- (struct CGSize { float x1; float x2; })datePickerSize;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)isEditable;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)date;
- (void)endEditing;
- (void)setDate:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputView;
- (id)_clearButton;
- (BOOL)canResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
