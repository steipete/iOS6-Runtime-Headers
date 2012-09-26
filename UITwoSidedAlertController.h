/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIAlertView;

@interface UITwoSidedAlertController : NSObject  {
    UIAlertView *_front;
    UIAlertView *_back;
    UIAlertView *_currentAlert;
    id _delegate;
}


- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)flip;
- (void)dealloc;
- (void)backAlertClickedButtonAtIndex:(int)arg1;
- (void)frontAlertClickedButtonAtIndex:(int)arg1;
- (id)backAlert;
- (id)frontAlert;
- (id)createBackAlert;
- (id)createFrontAlert;
- (void)didPresentAlertView:(id)arg1;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
- (void)dismiss;
- (void)alertViewCancel:(id)arg1;
- (void)show;
- (void)setDelegate:(id)arg1;

@end