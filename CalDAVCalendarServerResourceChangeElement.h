/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CalDAVUpdateOwnerItem, NSURL;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem  {
    CalDAVUpdateOwnerItem *_changedBy;
}

@property(readonly) NSURL * fullHrefURL;
@property(retain) CalDAVUpdateOwnerItem * changedBy;


- (id)changedBy;
- (id)fullHrefURL;
- (void)setChangedBy:(id)arg1;
- (id)copyParseRules;
- (id)init;
- (void)dealloc;

@end