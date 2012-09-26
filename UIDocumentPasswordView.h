/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UILabel, NSObject<UIDocumentPasswordViewDelegate>, UITextField, UIDocumentPasswordField;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {
    UIImageView *_iconView;
    UIDocumentPasswordField *_passwordTextField;
    UILabel *_label;
    NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;
}

@property NSObject<UIDocumentPasswordViewDelegate> * passwordDelegate;
@property(readonly) UITextField * passwordField;


- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)passwordDelegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_iconRectForContainerRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_passwordEntered:(id)arg1;
- (void)setPasswordDelegate:(id)arg1;
- (id)initWithDocumentName:(id)arg1;
- (id)passwordField;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)layoutSubviews;

@end
