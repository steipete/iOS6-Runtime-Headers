/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextSelection, UIView, NSTimer, UITextRangeView, NSArray, UITextInteractionAssistant;

@interface UITextSelectionView : UIView  {
    UITextInteractionAssistant *m_interactionAssistant;
    UITextSelection *m_selection;
    NSTimer *m_caretTimer;
    UIView *m_caretView;
    UITextRangeView *m_rangeView;
    BOOL m_caretBlinks;
    BOOL m_caretShowingNow;
    BOOL m_visible;
    BOOL m_activated;
    BOOL m_wasShowingCommands;
    BOOL m_delayShowingCommands;
    BOOL m_dictationReplacementsMode;
    int m_showingCommandsCounter;
    NSArray *m_replacements;
    BOOL m_deferSelectionCommands;
    struct __CFRunLoopObserver { } *m_observer;
}

@property(readonly) UITextInteractionAssistant * interactionAssistant;
@property(readonly) UITextSelection * selection;
@property BOOL caretBlinks;
@property BOOL visible;
@property(readonly) BOOL selectionCommandsShowing;
@property(retain) NSArray * replacements;
@property(readonly) UIView * caretView;
@property(readonly) UITextRangeView * rangeView;


- (void)detach;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)invalidate;
- (void)configureForReplacementMode;
- (void)updateSelectionRectsIfNeeded;
- (void)doneMagnifying;
- (void)prepareForMagnification;
- (void)updateSelectionCommands;
- (void)caretBlinkTimerFired:(id)arg1;
- (void)hideCaret:(int)arg1;
- (void)calculateAndShowReplacements:(id)arg1;
- (void)deferredUpdateSelectionCommands;
- (id)replacements;
- (void)setReplacements:(id)arg1;
- (BOOL)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clippedTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)showCommandsWithReplacements:(id)arg1;
- (void)touchCaretBlinkTimer;
- (void)showCaret:(int)arg1;
- (id)caretView;
- (void)installIfNecessary;
- (void)clearRange;
- (void)clearCaretBlinkTimer;
- (void)clearCaret;
- (BOOL)shouldBeVisible;
- (void)inputViewDidChange;
- (void)inputViewWillChange;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (void)showCalloutBarAfterDelay:(double)arg1;
- (BOOL)affectedByScrollerNotification:(id)arg1;
- (id)rangeView;
- (void)appearOrFadeIfNecessary;
- (void)viewAnimate:(id)arg1;
- (void)inputViewDidAnimate;
- (void)inputViewWillAnimate;
- (void)inputViewDidMove;
- (void)inputViewWillMove;
- (void)windowDidResignOrBecomeKey;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)scaleDidChange:(id)arg1;
- (void)scaleWillChange:(id)arg1;
- (void)selectionDidScroll:(id)arg1;
- (void)selectionWillScroll:(id)arg1;
- (void)textSelectionViewActivated:(id)arg1;
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(BOOL)arg2 afterDelay:(double)arg3;
- (BOOL)selectionCommandsShowing;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)updateSelectionDots;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)cancelDelayedCommandRequests;
- (void)configureForSelectionMode;
- (void)showSelectionCommands;
- (void)configureForHighlightMode;
- (id)initWithInteractionAssistant:(id)arg1;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (id)scrollView;
- (void)startCaretBlinkIfNeeded;
- (BOOL)visible;
- (BOOL)caretBlinks;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionBoundingBox;
- (void)hideSelectionCommands;
- (void)selectionChanged;
- (id)selection;
- (void)setVisible:(BOOL)arg1;
- (void)activate;
- (void)deactivate;
- (void)deferredUpdateSelectionRects;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)updateSelectionRects;
- (id)interactionAssistant;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
