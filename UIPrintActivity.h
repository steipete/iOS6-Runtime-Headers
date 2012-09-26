/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIViewController;

@interface UIPrintActivity : UIActivity  {
    UIViewController *_wrapperViewController;
}

@property(retain) UIViewController * wrapperViewController;


- (void)dealloc;
- (id)wrapperViewController;
- (id)printInteractionController;
- (void)cancelPrintOptions;
- (void)setWrapperViewController:(id)arg1;
- (id)_embeddedActivityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)activityDidFinish:(BOOL)arg1;

@end
