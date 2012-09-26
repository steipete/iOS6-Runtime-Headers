/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIBarButtonItem, NSString;

@interface DevicePINController : PSDetailController  {
    int _mode;
    int _substate;
    NSString *_oldPassword;
    NSString *_lastEntry;
    BOOL _success;
    id _pinDelegate;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    NSString *_error1;
    NSString *_error2;
}

+ (BOOL)settingEnabled;

- (BOOL)_success;
- (id)pinInstructionsPromptFont;
- (id)pinInstructionsPrompt;
- (void)pinEntered:(id)arg1;
- (int)pinLength;
- (void)performActionAfterPINEntry;
- (void)performActionAfterPINRemove;
- (void)setOldPassword:(id)arg1;
- (BOOL)_attemptValidationWithPIN:(id)arg1;
- (void)_showPINConfirmationError;
- (void)performActionAfterPINSet;
- (void)setPIN:(id)arg1;
- (BOOL)completedInputIsValid:(id)arg1;
- (void)_showUnacceptablePINError:(id)arg1 password:(id)arg2;
- (void)_slidePasscodeField;
- (void)setLastEntry:(id)arg1;
- (BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2;
- (void)_updatePINButtons;
- (void)adjustButtonsForPasswordLength:(unsigned int)arg1;
- (BOOL)simplePIN;
- (void)cancelButtonTapped;
- (void)_updateErrorTextAndFailureCount:(BOOL)arg1;
- (void)_showFailedAttempts;
- (id)stringsTable;
- (id)stringsBundle;
- (BOOL)_isBlocked;
- (void)_setUnblockTime:(double)arg1;
- (void)_setNumberOfFailedAttempts:(int)arg1;
- (int)_numberOfFailedAttempts;
- (void)_clearBlockedState;
- (double)_unblockTime;
- (struct __CFString { }*)blockedStateKey;
- (struct __CFString { }*)blockTimeIntervalKey;
- (struct __CFString { }*)failedAttemptsKey;
- (int)_getScreenType;
- (BOOL)validatePIN:(id)arg1;
- (struct CGSize { float x1; float x2; })pinContentSizeForViewInPopover;
- (void)_updateUI;
- (struct __CFString { }*)defaultsID;
- (BOOL)useProgressiveDelays;
- (void)setPane:(id)arg1;
- (BOOL)requiresKeyboard;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paneFrame;
- (void)willUnlock;
- (void)setSpecifier:(id)arg1;
- (void)suspend;
- (id)init;
- (void)dealloc;
- (void)_dismiss;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;

@end
