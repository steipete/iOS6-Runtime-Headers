/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement  {
    BOOL _content;
    CoreDAVItem *_prop;
    NSMutableSet *_calendarChanges;
}

@property BOOL content;
@property(retain) CoreDAVItem * prop;
@property(retain) NSMutableSet * calendarChanges;


- (void)addCalendarChange:(id)arg1;
- (void)addContentItem:(id)arg1;
- (void)setCalendarChanges:(id)arg1;
- (id)calendarChanges;
- (void)setProp:(id)arg1;
- (id)prop;
- (id)copyParseRules;
- (void)setContent:(BOOL)arg1;
- (BOOL)content;
- (id)init;
- (void)dealloc;

@end
