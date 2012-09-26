/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString, NSNumber;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification  {
    NSString *_location;
    NSString *_calendarName;
    NSDate *_startDate;
    NSDate *_endDate;
    BOOL _allDay;
    NSString *_eventID;
    unsigned int _changeType;
    BOOL _dateChanged;
    BOOL _timeChanged;
    BOOL _locationChanged;
    BOOL _titleChanged;
    NSNumber *_createCount;
    NSNumber *_updateCount;
    NSNumber *_deleteCount;
}

@property(retain) NSString * location;
@property(retain) NSString * calendarName;
@property(retain) NSDate * startDate;
@property(retain) NSDate * endDate;
@property BOOL allDay;
@property(retain) NSString * eventID;
@property unsigned int changeType;
@property BOOL dateChanged;
@property BOOL timeChanged;
@property BOOL locationChanged;
@property BOOL titleChanged;
@property(retain) NSNumber * createCount;
@property(retain) NSNumber * updateCount;
@property(retain) NSNumber * deleteCount;


- (id)eventID;
- (BOOL)needsAlert;
- (void)setTitleChanged:(BOOL)arg1;
- (void)setLocationChanged:(BOOL)arg1;
- (void)setTimeChanged:(BOOL)arg1;
- (void)setDateChanged:(BOOL)arg1;
- (void)setDeleteCount:(id)arg1;
- (void)setUpdateCount:(id)arg1;
- (id)updateCount;
- (void)setCreateCount:(id)arg1;
- (id)createCount;
- (void)setChangeType:(unsigned int)arg1;
- (void)setEventID:(id)arg1;
- (id)calendarName;
- (void)setCalendarName:(id)arg1;
- (BOOL)locationChanged;
- (BOOL)titleChanged;
- (BOOL)timeChanged;
- (BOOL)dateChanged;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)endDate;
- (id)resourceChangeFromEventStore:(id)arg1;
- (void)setAllDay:(BOOL)arg1;
- (BOOL)allDay;
- (id)startDate;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)initWithType:(int)arg1;
- (unsigned int)changeType;
- (void)dealloc;
- (id)deleteCount;

@end
