/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement> {
}


- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)elementAtPoint:(struct CGPoint { float x1; float x2; })arg1 allowShadowContent:(BOOL)arg2;
- (id)elementAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)layout;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (oneway void)_webcore_releaseOnWebThread;
- (oneway void)release;

@end
