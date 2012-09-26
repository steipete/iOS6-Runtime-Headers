/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, NSMutableSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem  {
    NSMutableSet *_comps;
}

@property(retain) NSMutableSet * comps;
@property(readonly) NSSet * compNames;


- (id)comps;
- (void)setComps:(id)arg1;
- (void)addComp:(id)arg1;
- (id)componentsAsString;
- (id)compNames;
- (id)childrenToWrite;
- (id)copyParseRules;
- (id)init;
- (void)dealloc;
- (id)description;

@end
