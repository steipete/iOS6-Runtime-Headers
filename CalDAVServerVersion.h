/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, NSString;

@interface CalDAVServerVersion : NSObject <NSCopying> {
    double _version;
    BOOL _supportsTimeRangeFilter;
    BOOL _supportsTodoTimeRangeFilter;
    BOOL _supportsTimeRangeFilterWithoutEndDate;
    BOOL _supportsTimeRangeFilterOnInbox;
    BOOL _supportsAutoSchedule;
    BOOL _supportsPrivateComments;
    BOOL _supportsSharing;
    BOOL _supportsSharingNoScheduling;
    BOOL _supportsCalendarProxy;
    BOOL _supportsInboxAvailability;
    BOOL _supportsPrivateEvents;
    BOOL _supportsSubscriptionCalendars;
    BOOL _supportsPrincipalPropertySearch;
    BOOL _supportsExtendedCalendarQuery;
    BOOL _supportsRequestCompression;
    BOOL _supportsManagedAttachments;
    NSString *_supportedCalendarComponentSets;
    NSSet *_complianceClasses;
    NSString *_serverHeader;
}

@property(readonly) NSString * type;
@property double version;
@property BOOL supportsTimeRangeFilter;
@property BOOL supportsTodoTimeRangeFilter;
@property BOOL supportsTimeRangeFilterWithoutEndDate;
@property BOOL supportsTimeRangeFilterOnInbox;
@property BOOL supportsAutoSchedule;
@property BOOL supportsPrivateComments;
@property BOOL supportsSharing;
@property BOOL supportsSharingNoScheduling;
@property BOOL supportsCalendarProxy;
@property BOOL supportsInboxAvailability;
@property BOOL supportsPrivateEvents;
@property BOOL supportsSubscriptionCalendars;
@property BOOL supportsPrincipalPropertySearch;
@property BOOL supportsExtendedCalendarQuery;
@property BOOL supportsRequestCompression;
@property BOOL supportsManagedAttachments;
@property(copy) NSString * supportedCalendarComponentSets;
@property(retain) NSSet * complianceClasses;
@property(copy) NSString * serverHeader;

+ (id)versionWithPropertyValue:(id)arg1;
+ (id)_prototypeMatchingServerHeaders:(id)arg1;
+ (id)versionWithHTTPHeaders:(id)arg1;

- (id)propertyValue;
- (void)setSupportsManagedAttachments:(BOOL)arg1;
- (BOOL)supportsManagedAttachments;
- (void)setSupportsPrincipalPropertySearch:(BOOL)arg1;
- (void)setSupportsSubscriptionCalendars:(BOOL)arg1;
- (BOOL)supportsSubscriptionCalendars;
- (void)setSupportsPrivateEvents:(BOOL)arg1;
- (BOOL)supportsPrivateEvents;
- (void)setSupportsCalendarProxy:(BOOL)arg1;
- (BOOL)supportsCalendarProxy;
- (void)setSupportsSharingNoScheduling:(BOOL)arg1;
- (BOOL)supportsSharingNoScheduling;
- (void)setSupportsSharing:(BOOL)arg1;
- (void)setSupportsPrivateComments:(BOOL)arg1;
- (BOOL)supportsPrivateComments;
- (void)setSupportsAutoSchedule:(BOOL)arg1;
- (void)setSupportsTimeRangeFilterOnInbox:(BOOL)arg1;
- (void)setSupportsTimeRangeFilterWithoutEndDate:(BOOL)arg1;
- (void)setSupportsTodoTimeRangeFilter:(BOOL)arg1;
- (BOOL)supportsTodoTimeRangeFilter;
- (void)setSupportsTimeRangeFilter:(BOOL)arg1;
- (BOOL)supportsRequestCompression;
- (id)_allFlagKeys;
- (id)complianceClasses;
- (id)serverHeader;
- (void)setSupportsRequestCompression:(BOOL)arg1;
- (void)_setPropertiesFromComplianceClasses:(id)arg1;
- (void)setSupportsInboxAvailability:(BOOL)arg1;
- (BOOL)supportsInboxAvailability;
- (void)setComplianceClasses:(id)arg1;
- (id)_additionalFlagKeys;
- (id)_propertiesToComplianceClasses;
- (void)setServerHeader:(id)arg1;
- (BOOL)supportsTimeRangeFilterWithoutEndDate;
- (BOOL)supportsTimeRangeFilterOnInbox;
- (BOOL)supportsTimeRangeFilter;
- (BOOL)supportsAutoSchedule;
- (BOOL)supportsSharing;
- (void)setSupportsExtendedCalendarQuery:(BOOL)arg1;
- (BOOL)supportsExtendedCalendarQuery;
- (BOOL)supportsPrincipalPropertySearch;
- (id)supportedCalendarComponentSets;
- (void)setSupportedCalendarComponentSets:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)type;
- (void)setVersion:(double)arg1;
- (double)version;

@end
