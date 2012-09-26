/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSAuthenticationContext, NSString, NSArray, NSLock, NSMutableDictionary;

@interface ISDialog : NSObject  {
    BOOL _allowDuplicates;
    SSAuthenticationContext *_authenticationContext;
    BOOL _authorizationIsForced;
    NSArray *_buttons;
    int _defaultButtonIndex;
    NSString *_displayCountKey;
    BOOL _dismissOnHomeButton;
    BOOL _dismissOnLock;
    BOOL _expectsResponse;
    BOOL _groupsTextFields;
    int _kind;
    NSLock *_lock;
    int _maxDisplayCount;
    NSString *_message;
    BOOL _oneButtonPerLine;
    BOOL _shouldDismissAfterUnlock;
    BOOL _shouldDisplayAsTopMost;
    BOOL _shouldHideButtonsInAwayView;
    BOOL _shouldPendInSetupIfNotAllowed;
    NSArray *_textFields;
    NSString *_title;
    int _unlockActionButtonIndex;
    NSMutableDictionary *_userInfo;
    struct __CFDictionary { } *_userNotificationValues;
}

@property(retain) NSArray * buttons;
@property int defaultButtonIndex;
@property BOOL oneButtonPerLine;
@property int unlockActionButtonIndex;
@property BOOL groupsTextFields;
@property(retain) NSArray * textFields;
@property(retain) NSString * message;
@property(retain) NSString * title;
@property BOOL allowDuplicates;
@property BOOL authorizationIsForced;
@property BOOL dismissOnHomeButton;
@property BOOL dismissOnLock;
@property BOOL expectsResponse;
@property BOOL shouldDismissAfterUnlock;
@property BOOL shouldDisplayAsTopMost;
@property BOOL shouldHideButtonsInAwayView;
@property BOOL shouldPendInSetupIfNotAllowed;
@property int kind;
@property(copy) SSAuthenticationContext * authenticationContext;
@property(copy) NSString * displayCountKey;
@property int maximumDisplayCount;
@property(getter=isDisplayable,readonly) BOOL displayable;

+ (int)displayCountForKey:(id)arg1;

- (void)setUnlockActionButtonIndex:(int)arg1;
- (void)setShouldPendInSetupIfNotAllowed:(BOOL)arg1;
- (void)setShouldHideButtonsInAwayView:(BOOL)arg1;
- (void)setShouldDisplayAsTopMost:(BOOL)arg1;
- (void)setShouldDismissAfterUnlock:(BOOL)arg1;
- (void)setOneButtonPerLine:(BOOL)arg1;
- (BOOL)expectsResponse;
- (void)setDismissOnLock:(BOOL)arg1;
- (void)setDismissOnHomeButton:(BOOL)arg1;
- (BOOL)authorizationIsForced;
- (id)valueForUserInfoKey:(id)arg1;
- (void)setValue:(void*)arg1 forCFUserNotificationKey:(struct __CFString { }*)arg2;
- (void)setValue:(id)arg1 forUserInfoKey:(id)arg2;
- (void)setMaximumDisplayCount:(int)arg1;
- (void)setDisplayCountKey:(id)arg1;
- (int)maximumDisplayCount;
- (id)displayCountKey;
- (void*)copyValueForCFUserNotificationKey:(struct __CFString { }*)arg1;
- (id)initWithOfferDeviceError:(id)arg1;
- (BOOL)shouldPendInSetupIfNotAllowed;
- (BOOL)shouldDismissAfterUnlock;
- (BOOL)shouldHideButtonsInAwayView;
- (BOOL)shouldDisplayAsTopMost;
- (BOOL)oneButtonPerLine;
- (BOOL)dismissOnLock;
- (BOOL)dismissOnHomeButton;
- (id)textFields;
- (int)unlockActionButtonIndex;
- (int)_kindForString:(id)arg1;
- (void)setAuthorizationIsForced:(BOOL)arg1;
- (void)setTextFields:(id)arg1;
- (id)initWithAuthenticationChallege:(id)arg1;
- (void)incrementDisplayCount;
- (BOOL)allowDuplicates;
- (id)copyUserNotification;
- (BOOL)isDisplayable;
- (void)setExpectsResponse:(BOOL)arg1;
- (void)setAllowDuplicates:(BOOL)arg1;
- (id)authenticationContext;
- (void)setAuthenticationContext:(id)arg1;
- (id)initWithDialogDictionary:(id)arg1;
- (void)setButtons:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithError:(id)arg1;
- (id)message;
- (id)init;
- (void)dealloc;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)kind;
- (int)defaultButtonIndex;
- (void)setGroupsTextFields:(BOOL)arg1;
- (BOOL)groupsTextFields;
- (id)buttons;
- (void)setDefaultButtonIndex:(int)arg1;
- (void)setMessage:(id)arg1;
- (void)setKind:(int)arg1;

@end
