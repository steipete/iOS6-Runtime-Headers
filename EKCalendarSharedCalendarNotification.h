/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification  {
    int _sharingInvitationResponse;
}

@property int sharingInvitationResponse;


- (BOOL)needsAlert;
- (int)sharingInvitationResponse;
- (void)setSharingInvitationResponse:(int)arg1;
- (id)calendarFromEventStore:(id)arg1;
- (id)initWithType:(int)arg1;

@end
