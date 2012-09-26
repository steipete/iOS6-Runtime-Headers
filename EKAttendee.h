/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAttendee : EKParticipant  {
}

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;

- (id)_persistentAttendee;
- (void)setParticipantType:(int)arg1;
- (void)setPendingStatus:(int)arg1;
- (int)pendingStatus;
- (void)setParticipantRole:(int)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (int)participantRole;
- (int)participantType;
- (void)setParticipantStatus:(int)arg1;
- (int)participantStatus;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)owner;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end