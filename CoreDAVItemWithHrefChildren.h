/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem  {
    NSMutableSet *_hrefs;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property(retain) NSMutableSet * hrefs;
@property(retain) CoreDAVItemWithNoChildren * unauthenticated;

+ (id)copyParseRules;

- (id)hrefsAsOriginalURLs;
- (id)hrefsAsStrings;
- (void)setUnauthenticated:(id)arg1;
- (void)setHrefs:(id)arg1;
- (void)addHref:(id)arg1;
- (id)hrefs;
- (id)unauthenticated;
- (id)hrefsAsFullURLs;
- (void)dealloc;
- (id)description;

@end
