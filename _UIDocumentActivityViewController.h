/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDocumentInteractionController;

@interface _UIDocumentActivityViewController : UIActivityViewController  {
    BOOL hideSystemActivities;
    UIDocumentInteractionController *_documentInteractionController;
    BOOL _hideSystemActivities;
}

@property UIDocumentInteractionController * documentInteractionController;
@property BOOL hideSystemActivities;


- (void)setHideSystemActivities:(BOOL)arg1;
- (BOOL)hideSystemActivities;
- (void)setDocumentInteractionController:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (void)_performActivity:(id)arg1;
- (id)documentInteractionController;
- (void)viewDidDisappear:(BOOL)arg1;

@end
