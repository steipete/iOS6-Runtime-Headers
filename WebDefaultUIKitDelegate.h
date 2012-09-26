/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebDefaultUIKitDelegate : NSObject  {
}

+ (id)sharedUIKitDelegate;

- (void)webViewDidDrawTiles:(id)arg1;
- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;
- (BOOL)isUnperturbedDictationResultMarker:(id)arg1;
- (int)getPasteboardChangeCount;
- (BOOL)performsTwoStepPaste:(id)arg1;
- (BOOL)hasRichlyEditableSelection;
- (int)getPasteboardItemsCount;
- (id)readDataFromPasteboard:(id)arg1 withIndex:(int)arg2;
- (void)writeDataToPasteboard:(id)arg1;
- (id)checkSpellingOfString:(id)arg1;
- (void)webViewDidLayout:(id)arg1;
- (void)deleteFromInput;
- (void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2;
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;
- (void)webViewDidRestoreFromPageCache:(id)arg1;
- (BOOL)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint { float x1; float x2; })arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(BOOL)arg4;
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentVisibleRectForWebView:(id)arg1;
- (struct CGPoint { float x1; float x2; })contentsPointForWebView:(id)arg1;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(BOOL)arg6 allowVerticalScrollbar:(BOOL)arg7;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;
- (void)webViewDidEndOverflowScroll:(id)arg1;
- (void)webViewDidStartOverflowScroll:(id)arg1;
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveDocTypeForFrame:(id)arg2;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(BOOL)arg3 acceptMIMETypes:(id)arg4;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;

@end
