/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSSet, NSString;

@interface EKSource : EKObject  {
}

@property(readonly) NSString * sourceIdentifier;
@property(readonly) int sourceType;
@property(readonly) NSString * title;
@property(readonly) NSSet * calendars;


- (int)displayOrderForNewCalendar;
- (void)setDefaultAlarmOffset:(id)arg1;
- (id)defaultAlarmOffset;
- (BOOL)isFacebookSource;
- (id)_persistentItem;
- (id)readWriteCalendarsForEntityType:(unsigned int)arg1;
- (id)calendars;
- (id)allCalendars;
- (id)calendarsForEntityType:(unsigned int)arg1;
- (BOOL)commit:(id*)arg1;
- (id)externalID;
- (id)sourceIdentifier;
- (BOOL)isEnabled;
- (id)init;
- (id)title;
- (id)description;
- (int)sourceType;
- (id)constraints;
- (BOOL)remove:(id*)arg1;

@end
