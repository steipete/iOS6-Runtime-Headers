/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray;

@interface ABDelayedNotificationSender : NSObject  {
    struct __CFArray { } *_delegatesForDelayedNotification;
    NSMutableArray *_delayedNotifications;
    struct __CFDictionary { } *_delayedNotificationInfos;
}


- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1 andDeliverDelayedNotifications:(BOOL)arg2;
- (void)addDelayedNotification:(id)arg1 withInfo:(struct __CFDictionary { }*)arg2 allowDuplicateNotification:(BOOL)arg3;
- (void)addDelayedNotification:(id)arg1;
- (BOOL)containsDelegate:(id)arg1;
- (void)dealloc;

@end
